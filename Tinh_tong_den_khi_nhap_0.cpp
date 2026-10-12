#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int nhap_so;
while (nhap_so != 0)
{
    cout << "moi nhap so khac 0 neu muon tiep tuc tinh tong cac so nhap: ";
    cin >> nhap_so;
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
