#include <iostream>

using namespace std;

int main()
{
    // bai 1.1 tinh tong cac so nhap tu ban phim 
    int sum = 0;
    int nhap_so = 1;
   
   
while (nhap_so != 0)
{
    cout << "moi nhap cac so nguyen duong de tinh tong: ";
    cin >> nhap_so;
    while(cin.fail() || nhap_so < 0)
    {   
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "so nhap phai la so nguyen duong, moi nhap lai: " << endl;
        cin >> nhap_so;
    }    
    if(nhap_so == 0)
    {
        break;
    }
    cout << "so da nhap la: " << nhap_so << endl;
    sum+=nhap_so;
    cout << "tong cac so da nhap la: " << sum << endl;
}
    cout << "ban da thoat chuong trinh!!!!" << endl;
///////////////////// bai 1.2 , diem so uoc cua n
    int n;
    cout << "moi nhap so n: " ;
    cin >> n;
    int so_chia = 1;
    int bo_diem = 0;

    while ( so_chia <= n )
    {
        if(n == 0)
        {   
           
            break;
        }
        if (n % so_chia == 0)
        {
            bo_diem++;
        }

        so_chia++;
    }
    if (n == 0)
    {
        cout << "ban da thoat chuong trinh" << endl;
    }
    else
    {
        cout << " so luong uoc  cua so n la: " << bo_diem << endl;
    }
    ///////////////////////////////Bài 1.3 — Tính tổng các chữ số của một số (Cơ bản) Nhập một số nguyên,
    int so_nguyen_n;
    cout << "moi nhap so nguyen N: ";
    cin >> so_nguyen_n;
    int so_nguyen = so_nguyen_n;
    int so_tong = 0;
    int giu_so;
    while(so_nguyen_n > 0)
    {
        giu_so = so_nguyen_n % 10;
        so_nguyen_n/=10;
        so_tong += giu_so;

    }
    cout << "tong cua so nguyen " << so_nguyen << " la: " << so_tong << endl;

//////////////////Bài 1.4 — Đảo ngược một số nguyên (Trung bình) Nhập một số nguyên, dùng vòng lặp while đảo ngược các chữ số của số đó (ví dụ: 1234 → 4321).
 int so_nguyen_n1;
    cout << "moi nhap so nguyen N1: ";
    cin >> so_nguyen_n1;
    int so_nguyen1 = so_nguyen_n1;
    int so_dao_nguoc = 0;
    int giu_so1;
    while(so_nguyen_n1 > 0)
    {
        giu_so1 = so_nguyen_n1 % 10;
        so_nguyen_n1/=10;
        so_dao_nguoc = so_dao_nguoc * 10 + giu_so1;

    }
    cout << "so dao nguoc cua so: " << so_nguyen1 << " la: " << so_dao_nguoc << endl;

//////////////////////////////Bài 4.5 — Bài toán tổng hợp: Quản lý số dư tài khoản (Nâng cao) Viết chương trình mô phỏng rút tiền ATM dùng do...while hiển thị menu (Rút tiền / Kiểm tra số dư / Thoát) lặp lại liên tục; khi rút tiền, dùng while hoặc if kiểm tra số dư có đủ không, nếu không đủ thì yêu cầu nhập lại số tiền cho đến khi hợp lệ hoặc chọn hủy.
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
