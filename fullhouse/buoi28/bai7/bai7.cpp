#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("data.txt");
    ofstream out;
    out.open("Contact.txt");
    string tmp;
    while(getline(in, tmp)) {
        string::iterator it = tmp.begin();
        while(it != tmp.end()) {
            if(*it == '0') {
                string result;
                while(it != tmp.end() && *it >= '0' && *it <= '9') {
                    result += *it;
                    ++it;
                }
                if(result.size() == 10) {
                    string::iterator x = tmp.begin();
                    string name;
                    while(*x != ':') {
                        name += *x;
                        ++x;
                    }
                    result = name + ": " + result;
                    out << result << endl;
                }
            }
            if(it != tmp.end()) ++it;
        }
    }
    in.close();
    out.close();
    return 0;
}