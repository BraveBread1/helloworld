#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* makeNode(int x) {
    node* tmp = new node;
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}

bool empty(node* a) {
    return a == nullptr;
}

int size(node* a) {
    int cnt = 0;
    while(a != nullptr) {
        ++cnt;
        a = a-> next;
    }
    return cnt;
}

void addLast(node* &a, int x) {
    node* tmp = makeNode(x);
    if(empty(a)) {
        a = tmp;
    }
    else {
        node* p = a;
        node* ans = nullptr;
        while(p != nullptr) {
            ans = p;
            p = p->next;
        }
        ans->next = tmp;
    }
}

void del(node* &a, int x) {
    node* tmp = a;
    while(tmp->next != nullptr) {
        if(tmp->next->data == x) {
            tmp->next = tmp->next->next;
            if(tmp->next == nullptr) return;
        }
        tmp = tmp->next;
    }
}

void in(node* a) {
    while(a != nullptr) {
        cout << a->data << " ";
        a = a->next;
    }
}

int main() {
    int n; cin >> n;
    node* a = nullptr;
    int x; cin >> x;
    for(int i = 1; i <= n; ++i) {
        int val; cin >> val;
        addLast(a, val);
    }
    del(a, x);
    if(empty(a)) {
        cout << "EMPTY";
    }
    else {
        in(a);
    }
    return 0;
}