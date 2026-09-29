#include <iostream>
using namespace std;

int main() {
    
    int num1, num2;

   
    cout << "Nhap so thu nhat: ";
    cin >> num1;

    cout << "Nhap so thu hai: ";
    cin >> num2;

    
    int tongCong = num1 + num2;
    int hieuTru = num1 - num2;
    int tichNhan = num1 * num2;
    int thuongChia = num1 / num2;
    int soDu = num1 % num2;

   
    cout << "----- KET QUA -----" << endl;
    cout << num1 << " + " << num2 << " = " << tongCong << endl;
    cout << num1 << " - " << num2 << " = " << hieuTru << endl;
    cout << num1 << " * " << num2 << " = " << tichNhan << endl;
    cout << num1 << " / " << num2 << " = " << thuongChia << endl;
    cout << num1 << " % " << num2 << " = " << soDu << endl;

    return 0;
}