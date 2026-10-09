#include <iostream>
using namespace std;

int main()
{
    int tong_so_dong = 5;

    for (int dong = 1; dong <= tong_so_dong; dong++)
    {
        // In khoảng trắng
        for (int so_dau_cach = 1; so_dau_cach <= dong - 1; so_dau_cach++)
        {
            cout << " ";
        }

        // In dấu *
        for (int so_sao = 1; so_sao <= 2 * tong_so_dong - 2 * dong + 1; so_sao++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}