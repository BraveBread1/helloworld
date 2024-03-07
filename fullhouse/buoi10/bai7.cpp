#include<iostream>

using namespace std;

void nhap(int a[], int n) {
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int bs(int a[], int n, int x) {
    int l = 0; int r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) return m;
        else if(a[m] < x) {
            l = m + 1;
        }
        else if(a[m] > x) {
            r = m - 1;
        }
    }
    return -1;
}

int search1(int a[], int n, int x) {
    int index = bs(a, n, x);
    if(index == - 1) return -1;
    else if(index == 0) return 0;
    else {
        while(a[index - 1] == a[index]) --index;
    }
    return index;
}

int search2(int a[], int n, int x) {
    int index = bs(a, n, x);
    if(index == - 1) return -1;
    else {
        while(a[index + 1] == a[index]) ++index;
    }
    return index;
}

int search3(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] < x) {
            l = m + 1;
        }
        else if(a[m] >= x) {
            if(m == 0) return 0;
            else if(a[m - 1] < x) return m;
            else r = m - 1;
        }
    }
    return -1;
}

int search4(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] <= x) {
            l = m + 1;
        }
        else if(a[m] > x) {
            if(m == 0) return 0;
            else if(a[m - 1] <= x) return m;
            else r = m - 1;
        }
    }
    return -1;
}

int search5(int a[], int n, int x) {
    int kq1= search1(a, n, x);
    int kq2=search2(a, n, x);
    if (search1(a,n,x)== -1 || search2(a,n,x) == -1) {
        return 0;
    } else {
        return kq2-kq1+ 1;
    }
}

int main() {
    int n; cin >> n;
    int x; cin >> x;
    int a[n];
    nhap(a, n);
    cout << search1(a, n, x) << endl;
    cout << search2(a, n, x) << endl;
    cout << search3(a, n, x) << endl;
    cout << search4(a, n, x) << endl;
    cout << search5(a, n, x) << endl;
    return 0;
}