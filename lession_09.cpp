#include <iostream>
#include <cmath>
using namespace std;

bool is_number(const string& str)
{
    //nhap vao mot chuoi "1234acbd" => co phai chi chua cac con so hay khong?
}

int main ()
{
    // giai phuong trinh bac hai
    // he so nhap tu ban phim
    cout << "======= GIAI PHUONG TRINH BAC HAI ========= " << endl;
    double a,b,c;
    // yeu cau nguoi dung nhap so tu ban phim
    // bat buoc nguoi dung nhap la so cho 3 he so cua phuong trinh , nhap sai phai nhap lai;
    
        cout << "Hay nhap he so a: " << endl;
        cin >> a;
        cout << "hay nhap he so b: " << endl;
        cin >> b;
        cout << "hay nhap he so c: " << endl;
        cin >> c;
        // kiem tra chac chan nhap so
        if (cin.fail())
        {
            cout << "nhap he so phai la cac so" << endl;

        } else 
        {    
            
            if(a == 0)
            {
                cout << " khong phai chuong trinh bac hai, vui long nhap he so a khac 0" << endl;
                // 0x2 + bx + c = 0 // phuong trinh bac nhat

            }
            else
            {
                cout << "bat dau giai phuong trinh bac hai" << endl;
                double delta = (b*b) - (4 * a * c);
                if (delta < 0)
                {
                    cout << "Phuong trinh vo nghiem" << endl;
                } 
                else if (delta == 0)
                {
                    cout << "phuong trinh co nghiep kep x1 = x2 = " << (-b/2*a) << endl;
                }
                else 
                {
                    double x1 =  (-b + sqrt(delta)) / (2*a);
                    double x2 =  (-b + sqrt(delta)) / (2*a);
                }
                
            }
        }

    


    return 0;
}