#include <iostream>

using namespace std;

int main()
{
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

    return 0;
}
