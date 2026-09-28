#include <iostream>
#include <string>

using namespace std;

#define BASIC_SALARY 1000
// #define : keyword khai bao hang so 
// BASIC_SALARY : ten hang so
// 1000 : gia tri hang so
// hang so : gia tri khong thay doi trong qua trinh thuc thi chuong trinh

int main() {
string full_name = "Pham Anh Kiet";

int my_age = 28;

string my_address = "Binh Duong City, Vietnam";

bool checking = true;

char letter = 'A';

float my_point = 8.2;

double my_money = 23.6;

const double PI = 3.14; // hang so
//Pi = 3.56 //khong the thay doi gia tri cua hang so PI
// uu tien su dung tu khoa const khi khai bao hang so (han che dung #define)

int number1 = 4;
int number2 = 9;
int result = number1 % number2;
//phep chia lay du (modulus) : 4 chia 9 du 4
int number4 = 9;
int number5 = 10;

bool kiem_tra = (number1 > number2); // so sanh gia tri cua 2 bien number1 va number2
bool kiem_tra2 = (number1 != number2); // so sanh gia tri cua 2 bien number1 va number2
bool kiem_tra3 = (number1 > number2) && (number4 < number5); 
bool kiem_tra4 = (number1 > number2) || (number4 < number5);

cout << "Full name: " << full_name << endl;
cout << "My age: " << my_age << endl;
cout << "My address: " << my_address << endl;
cout << "Checking: " << checking << endl;
cout << "Letter: " << letter << endl;
cout << "My point: " << my_point << endl;
cout << "My money: " << my_money << endl;
cout << "Luong Co Ban: " << BASIC_SALARY << endl;
cout <<"Gia tri cua so PI: " << PI << endl;
cout << "Ket qua phep chia lay du cua " << number1 << " va " << number2 << " la: " << result << endl;
cout << (number1 + number2) << endl;
cout << (number1 - number2) << endl;
cout << (number1 * number2) << endl;
cout << (number1 / number2) << endl;
cout << kiem_tra << endl; // false =0 : bang nhau la sai
cout << kiem_tra2 << endl; // true = 1 : khac nhau la dung
cout << kiem_tra3 << endl; // false = 0 : dung && sai = sai
cout << kiem_tra4 << endl; // true = 1 : dung || sai = dung
// = phep gan gia tri, == phep so sanh gia tri, != phep khac nhau, > phep lon hon, < phep nho hon, >= phep lon hon hoac bang, <= phep nho hon hoac bang

    return 0;
}