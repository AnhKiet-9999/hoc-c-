#include <iostream>
using namespace std;

int main()
{ 
    int tong_so_dong = 5;
    for (int dong = 1; dong <= tong_so_dong; dong++)
    {  
       
        for(int so_dau_cach = 1; so_dau_cach <= tong_so_dong - dong; so_dau_cach++)
        {
            cout << " "; 
        }

        for (int so_sao_tren_mot_dong = 1; so_sao_tren_mot_dong <=2 * dong - 1; so_sao_tren_mot_dong++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}