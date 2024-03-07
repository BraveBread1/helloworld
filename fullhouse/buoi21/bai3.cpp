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

void addFirst(node* &a, int x) {
    node* tmp = makeNode(x);
    if(a == nullptr) {
        a = tmp;
    }
    else {
        tmp->next = a;
        a = tmp;
    }
}

void tang(node* &a) {
    node* p = a;
    while(p != nullptr) {
        node* g = p->next;
        while(g != nullptr) {
            if(g->data < p->data) {
                int tmp = p->data;
                p->data = g->data;
                g->data = tmp;
            }
            g = g->next;
        }
        p = p->next;
    }
}

void in(node* a) {
    while(a != nullptr) {
        cout << a->data << " ";
        a = a->next;
    }
}

int main() {
    int n;
    cin >> n;
    node* a = nullptr;
    for(int i = 1; i <= n; ++i) {
        int x; cin >> x;
        addFirst(a, x);
    }
    tang(a);
    in(a);
    return 0;
}