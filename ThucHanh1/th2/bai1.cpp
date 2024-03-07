// Chương trình minh họa các khối câu lệnh
#include <iostream>
int main()
{
 int a = 22;
 std::cout << a << std::endl;
 // khối câu lệnh 1
 {
 int a = 33;
 std::cout << a << std::endl;
 } // Kết thúc khối câu lệnh 1
 // khối câu lệnh 2
 {
 int a = 44;
 std::cout << a << std::endl;
 } // Kết thúc khối câu lệnh 2
 std::cout << a << std::endl;
 return 0;
} // Kết thúc hàm main()
