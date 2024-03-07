#include<iostream>
#include<vector>

using namespace std;

int ucln(int a, int b) {
    while(b != 0) {
        int du = a % b;
        a = b;
        b = du; 
    }
    return a;
}

int main() {
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        a.push_back(x);
    }
    int dem = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) if(ucln(a[i], a[j]) == 1) ++dem;
    }
    cout << dem;
    return 0;
}