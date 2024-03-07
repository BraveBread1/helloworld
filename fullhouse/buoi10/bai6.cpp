#include<iostream>
#include<vector>

using namespace std;

void nhap(long long a[], int n) {
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    int t; cin >> t;
    for(int i = 1; i <= t; ++i) {
        vector<long long> v;
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        long long a1[n1], a2[n2], a3[n3];
        nhap(a1, n1);
        nhap(a2, n2);
        nhap(a3, n3);
        int dem1 = 0;
        int dem2 = 0;
        int dem3 = 0;
        while(dem1 < n1 && dem2 < n2 && dem3 < n3) {
            if(a1[dem1] == a2[dem2] && a2[dem2] == a3[dem3]) {
                v.push_back(a1[dem1]);
                ++dem1;
                ++dem2;
                ++dem3;
            }
            else if(a1[dem1] <= a2[dem2] && a1[dem1] <= a3[dem3]) ++dem1;
            else if(a2[dem2] <= a1[dem1] && a2[dem2] <= a3[dem3]) ++dem2;
            else if(a3[dem3] <= a1[dem1] && a3[dem3] <= a2[dem2]) ++dem3;
        }
        if(v.empty()) cout << "-1";
        else for(int x:v) cout << x << " ";
        cout << endl;
    } 
}