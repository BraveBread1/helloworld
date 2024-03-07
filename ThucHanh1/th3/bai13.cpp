#include <iostream>
#include <cstdlib>
#include <ctime>

int taoSoNgauNhien(int max)
{
	return rand() % max;
}
int main()
{
	const int DONG_XU = 2;
	const int XUC_XAC = 6;
	const int XO_SO = 100;
	const int VIET_LOTT = 45;
    srand(time(0));

    // du doan dong xu
	std::cout << "tro choi du doan dong xu xap ngua" << std::endl;
	std::cout << "Hay du doan dong xu xap (1) hay ngua (0): ";
	int du_doan; std::cin >> du_doan;

	int ket_qua = taoSoNgauNhien(DONG_XU);
    if (ket_qua == du_doan)
    {
    	std::cout << "xin chuc mung, ban da doan dung\n";
    	if (ket_qua) std::cout << "dong xu xap, ban doan la xap\n";
    	else std::cout << "dong xu ngua, ban doan la ngua\n";
    }
    else
    {
    	std::cout << "rat tiec, ban da doan sai\n";
    	if (ket_qua) std::cout << "dong xu xap, ban doan la ngua\n";
    	else std::cout << "dong xu ngua, ban doan la xap\n";
    }

    return 0;
}
