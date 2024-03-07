#include<iostream>
#include<math.h>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n) ; i = i + 1) {
        if(n % i == 0) return false;
    }
    return true;
}

int tong(int n) {
    int tong = 0;
    while(n > 0) {
        tong = tong + n % 10;
        n = n / 10;
    }
    return tong;
}

int tongchan(int n) {
    int tong = 0;
    while(n > 0){
        int du = n % 10;
        if(du % 2 == 0) tong = tong + du;
        n = n / 10;
    }
    return tong;
}
int tongnto(int n) {
    int tong = 0;
    while(n > 0) {
        int du = n % 10;
        if(nto(du)) tong = tong + du;
        n = n / 10;
    }
    return tong;
}
int nguoc(int n) {
    int nguoc = 0;
    while(n > 0) {
        nguoc = nguoc * 10 + n % 10;
        n = n / 10;
    }
    return nguoc;
}
int uocnto(int n) {
    int dem = 0;
    for(int i = 1; i <= n; i = i + 1) {
        if(n % i == 0 && nto(i)) dem = dem + 1;
    }
    return dem;
}
int uocntomax(int n) {
    for(int i = n; i > 0; i = i - 1) {
        if(n % i == 0 && nto(i)) return i;
    }
}
bool so6(int n) {
    for(int i = n; i > 0; i = i / 10) {
        if(n % 10 == 6) return true;
    }
    return false;
}
bool chia8(int n) {
    int tong = 0;
    for(int i = n; i > 0; i = i / 10) {
        tong = tong + i % 10;
    }
    return tong % 8 == 0;
}
int tonggiaithua(int n) {
    int tong = 0;
    while(n > 0) {
        int du = n % 10;
        int giaithua = 1;
        for(int i = 2; i <= du; i = i + 1) giaithua = giaithua * i;
        tong = tong + giaithua;
        n = n / 10;
    }
    return tong;
}
bool motso(int n) {
    int du = n % 10;
    while (n > 0) {
        if(du != n % 10) return false;
        n = n / 10;
    }
    return true;
}
bool check(int n) {
    int du = n % 10;
    while(n > 0) {
        if(n % 10 > du) return false;
        n = n / 10;
    }
    return true;
}
long long tong1(int n) {
    int cs = 0;
    long long tong = 0;
    for(int i = n; i > 0; i = i / 10) {
        cs = cs + 1;
    }
    while(n > 0) {
        tong = tong + (long long)pow(n % 10, cs);
        n = n / 10;
    }
    return tong;
}
int main() {
    int n; cin >> n;
    int sum = tong(n);
    if(nto(n)) cout << "1" << endl;
    else cout << "0" << endl;
    cout << tong(n)<< endl;
    cout << tongchan(n) << endl;
    cout << tongnto(n) << endl;
    cout << nguoc(n) << endl;
    cout << uocnto(n) << endl;
    cout << uocntomax(n) << endl;
    if(so6(n)) cout << "1" << endl;
    else cout << "0" << endl;
    if(chia8(n)) cout << "1" << endl;
    else cout << "0" << endl;
    cout << tonggiaithua(n) << endl;
    if(motso(n)) cout << "1" << endl;
    else cout << "0" << endl;
    if(check(n)) cout << "1" << endl;
    else cout << "0" << endl;
    cout << tong1(n);
    return 0;
}