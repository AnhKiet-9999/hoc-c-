#include <iostream>

using namespace std;

int main() 
{
    // tao ra mot menu nhieu lua chon don gian
    // yeu cau : viet chuong trinh tao mot menu tinh toan don gian
    // chay lap di lap lai cho den khi nguoi dung chon thoat ( bam phim so 0 tren ban phim )
    int lua_chon; // phim chon
    // nhap phim 1 tinh tong 2 so
    // nhap phim 2 tinh hieu 2 so
    // nhap phim 3 tinh tich 2 so
    // nhap phim 4 tinh thuong 2 so
    double number1, number2; // so nguoi dung se nhap tu ban phim
    do 
    {   
        
        cout << "==============MENU================" << endl;
        cout <<"1.tinh tong 2 so" << endl;
        cout <<"2.tinh hieu 2 so" << endl;
        cout <<"3.tinh tich 2 so" << endl;
        cout <<"4.tinh thuong 2 so" << endl;
        cout <<"0.thoat chuong trinh" << endl;
        cout <<"moi ban nhap lua chon cac phim chuc nang: " << endl;
        cin >> lua_chon; // nhap lua chon tu ban phim
        if (lua_chon == 0) 
        {
            cout << "da thoat ung dung" << endl;
            cin >> lua_chon; // nhap lua chon tu ban phim
            break; // thoat khoi vong lap do ... while

        }
        cout << "moi ban nhap so thu nhat: " << endl;
        cin >> number1; // nhap so thu nhat tu ban phim
        cout << "moi ban nhap so thu hai: " << endl;
        cin >> number2; // nhap so thu hai tu ban phim
        switch (lua_chon) 
        {
            case 1:
                cout << "tong cua 2 so la: " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
                break;
            case 2:
                cout << "hieu cua 2 so la: " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
                break;
            case 3:
                cout << "tich cua 2 so la: " << number1 << " * " << number2 << " = " << number1 * number2 << endl;
                break;
            case 4:
                cout << "thuong cua 2 so la: " << number1 << " / " << number2 << " = " << number1 / number2 << endl;
                break;
            
            default:
                cout << "lua chon khong hop le, moi ban nhap lai!" << endl;
                
        } 
            

    } while (lua_chon != 0); // khi nguoi dung bam so khong thi dung vong lap


    return 0;
}
