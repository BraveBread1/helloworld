void housesOfHogwarts(const char* path) {
    ifstream in(path);
    int n;
    in >> n;
    in.ignore();
    for(int i = 1; i <= n; ++i) {
        string s;
        getline(in, s);
        cout << s << endl;
    }
}
