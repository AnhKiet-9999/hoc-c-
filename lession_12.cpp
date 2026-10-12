#include <iostream>

using namespace std;

int main()
{
    int number[9] = {1, 5 , 7 , 4 , 3 , 8 , 2 , 9 , 6};
    int sum_le = 0;
    int sum_chan = 0;
     int sl_le=0;
    int sl_chan = 0;
    int tbc_le;
    int tbc_chan;
    // tinh tong cac so le va chan trong mang
    for(int i = 0; i < 9; i++)
    {
        if(number[i] % 2 == 0)
        {
            sum_chan+= number[i];
            sl_chan++;
        }
        if (number[i] % 2 != 0)
        {
            sum_le+=number[i];
            sl_le++;
        }
    }
    tbc_le = sum_le / sl_le;
    tbc_chan = sum_chan / sl_chan; 
    cout <<  " tbc chan la: " <<tbc_chan << endl;
    cout << "tbc le la: " << tbc_le << endl;
    
    int age[7] = {20,43,64,89,80,30,55};
    // tim so tuoi lon nhat
    // gia su tim duoc so tuoi lon nhat o gia tri dau tien
    int max_age = age[0];
    int min_age = age[0];
    // kiem tra lan luot gia tri nay voi so tuoi con lai trong mang
    // neu co so tuoi lon hon thi gan lai, lap di lap lai den khi kiem tra het thi thoi
    for( int i = 0; i < 7 ; i++)
    {
        if(max_age < age[i])
        {
            max_age = age[i];
        }
        if(min_age > age[i])
        {
            min_age = age[i];
        }
    }
    cout << "so tuoi lon nhat trong mang la: " << max_age << endl;
    cout << "so tuoi nho nhat trong mang la: " << min_age << endl;


 



    return 0;
}