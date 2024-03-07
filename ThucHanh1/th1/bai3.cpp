#include<iostream>

using namespace std;

int main() {
    int hientai;
    cout << "Nhap vao nam hien tai roi an ENTER" << endl;
    cin >> hientai;
    int tuoihientai;
    cout << "Nhap vao tuoi hien tai roi an ENTER" << endl;
    cin >> tuoihientai;
    int nam;
    cout << "Nhap vao nam ban muon biet tuoi." << endl;
    cin >> nam;
    if(nam < (hientai - tuoihientai)) {
        cout << "Ban chua duoc sinh ra";
    }
    else {
        int tuoi = nam - (hientai - tuoihientai);
        cout << "Nam " << nam << " ban " << tuoi << " tuoi";
    }
}