#include<cstdlib>
#include<ctime>
#include<iostream>
#include<math.h>

using namespace std;

void doanso() {
    srand(time(NULL));
    int n = rand()%1000 + 1;
    cout << n;
    cout << "toi vua nghi ra mot so trong khoang tu 1 den 1000" << endl << "hay doan so do?";
    int x; cin >> x;
    int dem = 0;
    int sai = 0;
    while(x > 1000 || x < 1) {
        cout << "may thieu nang a? nhap cmm lai nhanh";
        ++sai;
        cin >> x;
    }
    if(sai > 1) cout << "choi xong di kham nao di nha" << endl;
    while(x != n) {
        if(x > n) {
            if(x - n <= 50) {
                cout << "gan roi do ... giam di 1 chut nua";
                cin >> x;
                ++dem;
            }
            else if(x - n <= 150) {
                cout << "hoi lon ... giam xuong nua di";
                cin >> x;
                ++dem;
            }
            else {
                cout << "qua lon ... hay doan lai?";
                cin >> x;
                ++dem;
            }
        }
        else {
            if(n - x <= 50) {
                cout << "gan roi do ... tang len 1 chut nua";
                cin >> x;
                ++dem;
            }
            else if(n - x <= 150) {
                cout << "hoi be ... tang len nua di";
                cin >> x;
                ++dem;
            }
            else {
                cout << "qua nho ... hay doan lai?";
                cin >> x;
                ++dem;
            }
        }
    }
    if(dem >= 10) cout << "finally! mai moi dung, " << dem << " lan moi dung ga vc!!!" << endl;
    else if(dem >= 5) cout << dem << " lan moi dung, hoi non!" << endl;
    else if(dem == 1) cout << "dm dinh, doan phat dung luon" << endl;
    else   cout << "dung roi!!!" << endl;
    cout << "muon choi tiep ko(c hoac k)?"; 
}

int main(){
    char c = 'c';
    while(c == 'c') {
        doanso();
        cin >> c;
        while(c != 'c' && c != 'k') {
            cout << "sai cu phap hay nhap lai dmm";
            cin >> c;
        }
    }
    cout << "hen gap lai!";
    return 0;
}