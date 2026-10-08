#include <iostream>
using namespace std;

int main()
{ 
    int n;
    cout << "Nhap so dong cua tam giac: ";
    cin >> n;
    for (int dong = 1; dong <= n; dong++)
    {
        for (int cot = 1; cot <= dong; cot++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}