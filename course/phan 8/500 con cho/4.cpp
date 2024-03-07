bool* isHigher(int* arr, int num, int thres) {
    bool* a = new bool[num];
    for(int i = 0; i < num; ++i) {
        if(arr[i] >= thres) a[i] = true;
        else a[i] = false;
    }
    return a;
}