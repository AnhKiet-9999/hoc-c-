#include <iostream>

using namespace std;

int main()
{
    int number;
    int so_du_tai_khoan = 500000;
     int so_tien_rut;

    do
{
    cout << "                              MENU                             " << endl;
    cout << "vui long nhap so de thuc hien hanh dong" << endl;
    cout << "1. de thuc hien rut tien" << endl;
    cout << "2. de thuc hien kiem tra so du tai khoan" << endl;
    cout << "0. de thoat khoi chuong trinh" << endl;
    cout << "nhap so tai day =>> : ";
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "nhap so tien ban muon rut: " ;
        cin >> so_tien_rut;
        if (so_tien_rut < so_du_tai_khoan)
        {
            so_du_tai_khoan -= so_tien_rut;
            cout << "chuc mung ban da rut thanh cong so tien: " << so_tien_rut << " va so du con lai la: " << so_du_tai_khoan << endl;

        }
        
        break;
    case 2:
        cout << "so du tai khoan cua ban la: " << so_du_tai_khoan << endl;
        break;
    default:
        break;
   
    }

}while (number != 0);
cout << " cam on ban da su dung dich vu!!!!" << endl;



    return 0;
}