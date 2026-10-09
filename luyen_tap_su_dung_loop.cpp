#include <iostream>

using namespace std;

int main()
{
    //bai 1.1  Tính tổng các số từ 1 đến N (Cơ bản) Nhập số N, dùng vòng lặp for tính tổng các số nguyên từ 1 đến N.
    int sum = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
           
    } 
    cout << "tong cac so nguyen tu 1 den n la: " << sum << endl;  

    //bai 1.2 — In bảng cửu chương (Cơ bản) Nhập một số, dùng vòng lặp for in ra bảng cửu chương của số đó (từ 1 đến 10).
    int n1 = 5;
    int kq;
    for (int i = 1; i <= 10; i++)
    {
        kq = n1 * i;
        cout << "bang cuu chuong cua n1 la: " << n1 << "x" << i << "=" << kq << endl;
    }
    //bai 1.3 — Tính giai thừa của một số (Cơ bản) Nhập số N, dùng vòng lặp for tính N! (giai thừa).
    int n2 = 10;
    int kq1 = 1;
    for (int i = 1; i <= n2; i++)
    {
        kq1*=i;
       
    }
    cout << "giai thua cua n2 la: " << kq1 << endl;
    // Bài 1.4 — Đếm số chữ số của một số nguyên (Cơ bản) Nhập một số nguyên, dùng vòng lặp for đếm số chữ số của số đó.
    int n3 = 1234789;
    int bodiem = 0;
    cout << "so nguyen n3: " << n3 << endl;
    for ( int i = 0 ; n3 > 0; i++)
    {    

        
         n3/=10;
        bodiem++;
        cout << n3 << endl;
       
    }  
    // Bài 1.5 — In các số chẵn trong một khoảng (Cơ bản) Nhập 2 số a, b (a < b), dùng for in ra tất cả các số chẵn trong khoảng [a, b].



    cout << "co: " << bodiem << "chu so" << endl;
    int a = 25;
    int b = 30;
    for ( int i = a ; i <= b; i++ )
    {
        if(i % 2 == 0)
        {
            cout << "cac so chang tu a - b la: " << i << endl;
        }
    }

    return 0;
}