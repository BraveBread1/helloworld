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
    tmp->next = a;
    a = tmp;
}

void pop(node* &a) {
    if(a == nullptr) {
        return;
    }
    else {
        a = a->next;
    }
}

void in(node* a) {
    if(a == nullptr) {
        cout << "EMPTY" << endl;
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
        string com;
        cin >> com;
        if(com == "push") {
            int x; cin >> x;
            push(a, x);
        }
        else if(com == "pop") {
            pop(a);
        }
        else if(com == "print") {
            in(a);
        }
    }
    return 0;
}