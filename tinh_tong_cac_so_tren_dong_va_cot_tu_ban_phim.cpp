#include <iostream>

using namespace std;

int main()
{   
    int arr[3][3]=
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;
    int so_dong = 0;
    int so_cot = 0;
    int sum_rows = 0;
    int sum_cols = 0; 

    // tinh tong cac so tren 1 dong bat ky nhap tu ban phim

    for (int i = 0; i < rows; i++)
    {  
        do
        {
            cout << "moi nhap so dong can tinh tong: ";
            cin >> i;
            so_dong = i;
            if (cin.fail() || i < 0 || i >= rows)
            {
                cout << "vui long khong nhap vuot qua chi so cua dong (chi so bat dau bang 0): " << endl;
            }
            
        } while (i < 0 || i >= rows);
         
        
        for (int j = 0; j < cols; j++)
        {
            sum_rows+=arr[i][j];
        }
        break;
        
    }
    cout << "tong cua so dong: " << so_dong << " la: " << sum_rows << endl;
    // tinh tong cac so tren 1 cot bat ky nhap tu ban phim
    for (int j = 0; j < cols; j++)
    {
        do
        {
           cout << "Hay nhap so cot muon tinh tong: " ;
           cin >> j;
           so_cot = j;
           if (cin.fail() || j < 0 || j >= cols)
           {
            cout << "vui long khong nhap vuot qua chi so cua cot(chi so bat dau tu 0): " << endl;
           }
           
        } while (j < 0 || j >= cols);
        for (int i = 0; i < rows; i++)
        {
            sum_cols+=arr[i][j];
        }
        break;
        
    }
     cout << "tong cua so cot: " << so_cot << " la: " << sum_cols << endl;

    return 0;
}