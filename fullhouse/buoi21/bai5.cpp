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

void push(node* &a, int x) {
    node* tmp = makeNode(x);
    if(a == nullptr) {
        a = tmp;
    }
    else {
        node* p = a;
        while(p->next != nullptr) {
            p = p->next;
        }
        p->next = tmp;
    }
}

void pop(node* &a) {
    if(a == nullptr) return;
    a = a->next;
}

void front(node* a) {
    if(a == nullptr) {
        cout << "EMPTY" << endl;
    }
    else {
        cout << a->data << endl;
    }
}

void in(node* a) {
    if(a == nullptr) {
        cout << "EMPTY";
    }
    else {
        while(a != nullptr) {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }
}

int main() {
    node* a = nullptr;
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) {
        string s; cin >> s;
        if(s == "push") {
            int x; cin >> x;
            push(a, x);
        }
        else if(s == "pop") {
            pop(a);
        }
        else if(s == "front") {
            front(a);
        }
        else if(s == "print") {
            in(a);
        }
    }
    return 0;
}