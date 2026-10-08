#include <iostream>

using namespace std;

int main() 
{     
      int n;
      cin >> n;
     int tong = 0;
     for(int i=1; i<=n; i++)
     {
        tong += i;
        
     } 
     cout << "\nTong cac so tu 1 den " << n << " la: " << tong << endl;
    return 0;
}