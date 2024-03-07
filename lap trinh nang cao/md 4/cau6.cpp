#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int temp;
    for(int x = -n; x <= n; x++){
        for(int y = -n; y <= n; y++){
            temp = x;
            // Nếu muốn in ra nửa dưới hình thoi chỉ cần xét điều kiện của x
            // và cập nhật biến temp ở đây.
            if(x > 0)
            {
                temp = -x;
            }
            if (y >= -(n + temp) && y <= n + temp){
                cout<<"* ";
            }else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
    return 0;
}