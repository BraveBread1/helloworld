#include<iostream>
#include<iomanip>

using namespace std;

struct node{
    string msv, name, lop;
    double gpa;
    node* next;
};

istream& operator >> (istream& in, node* &a) {
    a = new node;
    in >> a->msv;
    in.ignore();
    getline(in, a->name);
    in >> a->gpa;
    in >> a->lop;
    a->next = nullptr;
    return in;
}

ostream& operator << (ostream& out, node* a) {
    out << a->msv << " " << a->name << " " << fixed << setprecision(2) << a->gpa << " " << a->lop << endl;
    return out;
}

void addFirst(node* &a, node* tmp) {
    tmp->next = a;
    a = tmp;
}

void addLast(node* &a, node* tmp) {
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

int size(node* a) {
    int cnt = 0;
    while(a != nullptr) {
        ++cnt;
        a = a->next;
    }
    return cnt;
}

void add(node* &a, node* tmp, int k) {
    node* p = a;
    if(a == nullptr) {
        a = tmp;
    }
    else if(k == size(a) + 1) {
        addLast(a, tmp);
    }
    else if(k == 1) {
        addFirst(a, tmp);
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
        cout << a;
        a = a->next;
    }
}

int main() {
    int n;
    cin >> n;
    node* a = nullptr;
    for(int i = 1; i <= n; ++i) {
        int q; cin >> q;
        if(q == 1) {
            node* tmp;
            cin >> tmp;
            addFirst(a, tmp);
        }
        else if(q == 2) {
            node* tmp ;
            cin >> tmp;
            addLast(a, tmp);
        }
        else if(q == 3) {
            int k; cin >> k;
            node* tmp;
            cin >> tmp;
            add(a, tmp, k);
        }
    }
    in(a);
    return 0;
}