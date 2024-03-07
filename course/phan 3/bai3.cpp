#include<iostream>

using namespace std;

int main() {
    int d, m;
    cin >> d >> m;
    switch(m) {
        case 1:
            if(d <= 19) cout << "Ma Ket";
            else cout << "Bao Binh";
            break;
        case 2:
            if(d <= 18) cout << "Bao Binh";
            else cout << "Song Ngu";
            break;
        case 3:
            if(d <= 20) cout << "Song Ngu";
            else cout << "Bach Duong";
            break;
        case 4:
            if(d <= 19) cout << "Bach Duong";
            else cout << "Kim Nguu";
            break;
        case 5:
            if(d <= 20) cout << "Kim Nguu";
            else cout << "Song Tu";
            break;
        case 6:
            if(d <= 21) cout << "Song Tu";
            else cout << "Cu Giai";
            break;
        case 7:
            if(d <= 22) cout << "Cu Giai";
            else cout << "Su Tu";
            break;
        case 8:
            if(d <= 22) cout << "Su Tu";
            else cout << "Xu Nu";
            break;
        case 9:
            if(d <= 22) cout << "Xu Nu";
            else cout << "Thien Binh";
            break;
        case 10:
            if(d <= 23) cout << "Thien Binh";
            else cout << "Thien Yet";
            break;
        case 11:
            if(d <= 22) cout << "Thien Yet";
            else cout << "Nhan Ma";
            break;
        case 12:
            if(d <= 21) cout << "Nhan Ma";
            else cout << "Ma Ket";
            break;      
    }
    return 0;
}