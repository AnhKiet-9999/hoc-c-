#include <iostream>

using namespace std;

int main() {{
    //short syntax
    int number1 = 10;
    int number2 = 11;
    number1 += number2; // number1 = number1 + number2 = 21
    // x += y : x = x + y
    // x -= y : x = x - y
    // x *= y : x = x * y
    // x /= y : x = x / y
    // x %= y : x = x % y
    cout << number1 << endl;
    int number3 = 10;
    int number4 = 20;
    number4 /= number3; // number4 = number4 / number3 = 2
    cout << number4 << endl;

    int number5 = 6;
    int number6 = 8;
    number5++; // tang len mot don vi : number5 = number5 + 1 = 7 : tang sau 
    ++number6; // tang len mot don vi : number6 = number6 + 1 = 9 : tang truoc
    number5--; // giam di mot don vi : number5 = number5 - 1 = 6 : giam sau
    --number6; // giam di mot don vi : number6 = number6 - 1 = 8 : giam truoc

    int n1 = 9;
    int n2 = 8;
    int n3 = (++n1) - (n2++) + (--n2) + (n1--) - (n2++) + (--n1);
    cout << n3 << endl;
    int n4 = 3;
    int n5 = 5;
    
    int n6 = (--n5) + (n4--) + (n5++) - (--n4) + (--n5) + (n4++);
    //n6 =    4     +   3    +   4    -    1   +    4  +    1  = 15
    cout << n6 << endl;





    return 0;
}}