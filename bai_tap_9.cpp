#include <iostream>
using namespace std;

int main() {
    // Phan 1: Chuan bi va nhap lieu
    int a, b;
    cout << "Nhap gia tri a: ";
    cin >> a;
    cout << "Nhap gia tri b: ";
    cin >> b;

    // Phan 2: Tien to (Prefix) - Hanh dong ngay lap tuc
    cout << "\n----- TIEN TO ++a (Tang truoc) -----" << endl;
    cout << "Ket qua ++a in ra: " << ++a << endl;
    cout << "Gia tri a SAU do: " << a << endl;

    // Phan 3: Hau to (Postfix) - Hanh dong sau
    cout << "\n----- HAU TO b++ (Tang sau) -----" << endl;
    cout << "Ket qua b++ in ra: " << b++ << endl;
    cout << "Gia tri b SAU do: " << b << endl;

    // Phan 4: Giam gia tri (--a va b--)
    cout << "\n----- GIAM GIA TRI -----" << endl;
    cout << "Ket qua --a in ra: " << --a << endl;
    cout << "Ket qua b-- in ra: " << b-- << endl;
    cout << "Gia tri a, b SAU cung: a=" << a << ", b=" << b << endl;

    // Phan 5: Thu thach trong bieu thuc toan hoc
    cout << "\n----- THU THACH BIEU THUC -----" << endl;
    cout << "Truoc thu thach: a=" << a << ", b=" << b << endl;
    int tong = a++ + ++b;
    cout << "int tong = a++ + ++b;" << endl;
    cout << "Ket qua tong = " << tong << endl;
    cout << "Sau do: a=" << a << ", b=" << b << endl;

    return 0;
}