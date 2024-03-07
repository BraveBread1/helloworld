#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

bool empty(node* a) {
    if(a == nullptr) {
        return true;
    }
    else return false;
}

int size(node* a) {
    int cnt = 0;
    while(a != nullptr) {
        ++cnt;
        a = a->next;
    }
    return cnt;
}

node* makeNode(int x) {
    node* tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void addFirst(node* &a, int x) {
    node* tmp = makeNode(x);
        tmp->next = a;
        a = tmp;
}

void addLast(node* &a, int x) {
    node* tmp = makeNode(x);
    if(a == nullptr) {
        a = tmp;
    }
    else {
        node* trc = nullptr;
        node* p = a;
        while(p != nullptr) {
            trc = p;
            p = p->next;
        }
        trc->next = tmp;
    }
}

void add(node* &a, int x, int k) {
    node* tmp = makeNode(x);
    node* p = a;
    if(empty(a)) {
        a = tmp;
    }
    else if(k == size(a) + 1) {
        addLast(a, x);
    }
    else if(k == 1) {
        addFirst(a, x);
    }
    else {
        for(int i = 1; i < k - 1; ++i) {
            p = p->next;
        }
        tmp->next = p->next;
        p->next = tmp;
    }
}

void in(node* a) {
    while(a != nullptr) {
        cout << a->data << " ";
        a = a->next;
    }
}

int main() {
    node* a = nullptr;
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) {
        int com; cin >> com;
        if(com == 1) {
            int x; cin >> x;
            addFirst(a, x);
        }
        else if(com == 2) {
            int x; cin >> x;
            addLast(a, x);
        }
        else {
            int k, x;
            cin >> k >> x;
            add(a, x, k);
        }
    }
    in(a);
    return 0;
}