#include <iostream>

using namespace std;

int main()
{
    // viet chuong tirnh nhap vao diem so cua sinh vien (0 <= p <= 10)
    //neu nhap sai bat nhap lai den khi nao hop le thi thoi?
    float diem;
    do
    {
        cout << "moi ban nhap diem so sinh vien: " << endl;
        cin >> diem;
        if(diem < 0 || diem > 10)
        {
            cout << "diem khong hop le, vui long nhap lai" << endl;

        } else
        {
            break;
        }


    }while (diem < 0 || diem > 10);
    cout << "diem so cua sinh vien la: " << diem << endl;

    // bai tap : gia su 1 be gai sinh ngay 29/02/2020. hoi tu lan sinh  den nam 2069 be a to chuc sinh nhat dung ngay bao nhieu lan?;
    // viet chuong trinh tra loi cau hoi tren?;
    // kiem tra tu nam 2020 den 2069 co bao nhieu nam la nam nhuan ? thi co bay nhieu lan to chuc sinh nhat dung ngay.

    int so_nam_nhuan = 0;
    int nam_ket_thuc = 2069;
    for (int nam_sinh = 2020; nam_sinh <= nam_ket_thuc ; nam_sinh++ )
    {
        if (nam_sinh % 400 == 0 || (nam_sinh % 4 == 0 && nam_sinh % 100 != 0))
         {
            so_nam_nhuan++;
         }
         else
         {

         }
    }
    

    
    cout << "so lan be gai A to chuc sinh nhat tu khi sinh ra la: " << so_nam_nhuan << endl; 








    return 0;
}