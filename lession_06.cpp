#include <iostream>
#include <cmath>

using namespace std;
int main() {
    // 1- xu ly ve vong lap for....
    // hien thi cac so lan luot tu 1 den 10
    for (int run = 1; run <= 10; run++) 
    {
        // toan bo logic cua vong lap for nam o day
        // int run = 1; diem bat dau cua vong lap
        // run <= 10; dieu kien de vong lap tiep tuc chay , diem ket thuc cua vong lap
        // run++: buoc nhay cua vong lap (de vong chay sau do - tiep theo phai xay ra nhu the nao)
        // run la 1 bien chay tu 1 den 10
        cout << "gia tri cac so tu 1 den 10: " << run << endl;
    }
    // hien thi cac so tu 10 den 1
    for (int i = 10; i >= 1 ; i--) 
    {
        cout << "gia tri cac so tu 10 den 1: " << i << endl;
    }
    // su dung vong lap for hien thi cac so chia het cho 3 va 5 trong tu 10 den 30
    for (int i = 10; i <= 30; i++) 
    {   // duyet lan luot cac so tu 10 den 30
        // ap dung if ... else vao trong vong lap
        // chi in ra cac so chia het cho 3 va 5
        if (i % 3 == 0 && i % 5 == 0) 
        {
            cout << "cac so chia het cho 3 va 5 trong tu 10 den 30: " << i << endl;
        }
    }
        // su dung tu khoa break trong vong lap for 
        // tu khoa break giup thoat khoi vong lap for (theo mot dieu kien nao do) , vong lap for se bi dung lai va khong xu li toan bo
        // tu 1 den 20 chi in ra so dau tien chia het cho 6
    for (int k = 1; k <= 20; k++) 
    {
        if (k % 6 == 0) 
        {
            cout << "so dau tien chia het cho 6 trong tu 1 den 20: " << k << endl;
            break; 
        }
    }
        // tu khoa contineue : bo qua phan con lai cua vong lap for va tiep tuc chay vong lap for
        // in ra cac so tu 1 den 5 , bo qua so 3 khong can in
        // 1 . 2 .4 .5 
    for (int p = 1; p <= 5; p++) 
    {
        if (p == 3) 
        {
            continue; // bo qua so 3
        }
        cout << "cac so tu 1 den 5 , bo qua so 3: " << p << endl;
    }
        // viet chuong trinh kiem tra 1 so co phai la so nguyen to hay khong
        // su dung if ... else va vong lap
        // su dung tu khoa break
       bool isPrime = true; // gia su so do la so nguyen to
       int my_number = 22; // so can kiem tra
    for (int i = 2; i <=sqrt(my_number); i++) 
    {
        if (my_number % i == 0) 
        {
            isPrime = false; // so do khong phai la so nguyen to
            cout << my_number << " khong phai la so nguyen to" << endl;
            break; // thoat khoi vong lap for
        }else 
        {
            isPrime = true; // so do la so nguyen to
            cout << my_number << " la so nguyen to" << endl;
        }
    }


    return 0;
}