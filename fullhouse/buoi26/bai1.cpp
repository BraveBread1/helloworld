#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

class human{
    private:
        string name, date;
    public:
        string getName() {
            return name;
        }
        string getDate() {
            return date;
        }
        void setName(string a) {
            this->name = a;
        }
        void setDate(string a) {
            this->date = a;
        }
};

class student : public human{
    private:
        double d1, d2, d3, tong;
    public:
        friend istream& operator >> (istream& in, student &a) {
            string tmp;
            getline(in, tmp);
            a.setName(tmp);
            in >> tmp;
            a.setDate(tmp);
            in >> a.d1 >> a.d2 >> a.d3;
            return in;
        }
        friend ostream& operator << (ostream& out, student a) {
            out << a.getName() << " " << a.getDate() << " " << fixed << setprecision(1) << a.tong << endl;
            return  out; 
        }
        friend void chuan(student &a);
        void cal();
};

void student::cal() {
    tong = d1 + d2 + d3;
}

void chuan(student &a) {
    stringstream ss (a.getDate());
    string result;
    string tmp;
    int cnt = 1;
    while(getline(ss, tmp, '/')) {
        if(cnt < 3) {
            if(tmp.size() < 2) {
                tmp = "0" + tmp + "/";
                result += tmp;
            }
            else {
                tmp = tmp + "/";
                result += tmp;
            }
            ++cnt;
        }
        else {
            result += tmp;
        }
    }
    a.setDate(result);
    stringstream ss2 (a.getName());
    result = "";
    while(ss2 >> tmp) {
        string::iterator it = tmp.begin();
        if(*it >= 'a' && *it <= 'z') {
            *it -= 32;
        }
        ++it;
        while(it != tmp.end()) {
            if(*it >= 'A' && *it <= 'Z') {
                *it += 32;
            }
            ++it;
        }
        result += tmp + " ";
    }
    a.setName(result);
}

int main() {
    student a;
    cin >> a;
    chuan(a);
    a.cal();
    cout << a;
}