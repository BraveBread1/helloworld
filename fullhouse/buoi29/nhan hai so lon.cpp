#include<iostream>

using namespace std;

string cong(string a, string b)
{
    string::reverse_iterator it = a.rbegin();
    string::reverse_iterator it2 = b.rbegin();
    string result;
    int du = 0;
    while(it != a.rend() && it2 != b.rend()) {
        int tong = static_cast<int>(*it) + static_cast<int>(*it2) + du - 96;
        if(tong >= 10) {
            result = to_string(tong - 10) + result;
            du = 1;
        } 
        else {
            du = 0;
            result = to_string(tong) + result;
        }
        ++it;
        ++it2;
    }
    while(it != a.rend()) {
        int tong = static_cast<int>(*it) + du - 48;
        if(tong >= 10) {
            result = to_string(tong - 10) + result;
            du = 1;
        } 
        else {
            du = 0;
            result = to_string(tong) + result;
        }
        ++it;
    }
    while(it2 != b.rend()) {
        int tong = static_cast<int>(*it2) + du - 48;
        if(tong >= 10) {
            result = to_string(tong - 10) + result;
            du = 1;
        } 
        else {
            du = 0;
            result = to_string(tong) + result;
        }
        ++it2;
    }
    if(du == 1) result = "1" + result;
    return result;
}

string nhan(string a, char b)
{
    string result;
    string::reverse_iterator it = a.rbegin();
    int c = b - '0';
    int du = 0;
    int tmp;
    while(it != a.rend())
    {
        tmp = (*it - '0') * c;
        tmp += du;
        du = tmp / 10;
        result = to_string(tmp % 10) + result;
        ++it;
    }
    if(du != 0)
    {
        result = to_string(du) + result;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    if(a == "0" || b == "0") 
    {
        cout << "0";
        return 0;
    }
    string result;
    string::reverse_iterator it = b.rbegin();
    int dem = 0;
    while(it != b.rend())
    {
        if(b == "0") continue;
        result = cong(result, nhan(a, *it) + string(dem, '0'));
        ++dem;
        ++it;
    }
    cout << result << endl;
    return 0;
}