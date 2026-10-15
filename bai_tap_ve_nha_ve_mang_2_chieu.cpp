#include <iostream>

using namespace std;

int main()
{   
    int rows;
    int cols;
    cout << "==============Nhap dong va cot cho mang 2 chieu===============" << endl;
    do
    {   
        cout << "hay nhap so dong (1 - 3):   ";
        cin >> rows;
        if(cin.fail() ||rows < 0 || rows > 3)
        {
            cout << " so dong chi tu 1 den 3" << endl;
        }

    }while(rows < 0 || rows > 3);
    do
    {
        cout << "hay nhap so co( 1 - 3): ";
        cin >> cols;
        if(cin.fail() || cols < 0 || cols > 3)
        {
            cout << "so cot chi tu 1 den 3" << endl;
        }

    } while (cols < 0 || cols > 3);

    //////////////////=======nhap gia tri mang bang ban phim
    cout << "nhap cac gia tri cua mang" << endl;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
             cout  << " my_arr[" << i << "][" << j << "] = ";
             cin >> arr[i][j];
        }
        
    }
    /////////////////// xuat mang ra man hinh
    cout << " mang cua ban la" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
             cout  << " my_arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
        
    }
    // mang arr[3][3]
    // {1, 2, 3},
    // {4, 5, 6},
    // {7, 8, 9}
    // tinh tong cac so tren mot dong tu ban phim
    
    // tinh tong cac so tren 1 dong bat ky nhap tu ban phim
    int so_dong = 0;
    int so_cot = 0;
    int sum_rows = 0;
    int sum_cols = 0; 

 
        do
        {
            cout << "moi nhap so dong can tinh tong: ";
            cin >> so_dong;
            
            if (cin.fail() || so_dong < 0 || so_dong >= rows)
            {
                cout << "vui long khong nhap vuot qua chi so cua dong (chi so bat dau bang 0): " << endl;
            }
            
        } while (so_dong < 0 || so_dong >= rows);
         
        
        for (int j = 0; j < cols; j++)
        {
            sum_rows+=arr[so_dong][j];
        }
       
        
    
    cout << "tong cua so dong: " << so_dong << " la: " << sum_rows << endl;
    // tinh tong cac so tren 1 cot bat ky nhap tu ban phim
    
        do
        {
           cout << "Hay nhap so cot muon tinh tong: " ;
           cin >> so_cot; 
           if (cin.fail() || so_cot < 0 || so_cot >= cols)
           {
            cout << "vui long khong nhap vuot qua chi so cua cot(chi so bat dau tu 0): " << endl;
           }
           
        } while (so_cot < 0 || so_cot >= cols);
        for (int i = 0; i < rows; i++)
        {
            sum_cols+=arr[i][so_cot];
        }
        
        
    
     cout << "tong cua so cot: " << so_cot << " la: " << sum_cols << endl;
     //////// tim so dong co tong cac gia tri phan tu lon nhat 
     int max_sum_rows = sum_rows;
     int total_sum_rows = 0;
     int index_max_sum_rows =so_dong;
     int total_sum_cols = 0;
     int max_sum_cols = sum_cols;
     int index_max_sum_cols = so_cot;
     for ( int i = 0; i < rows; i++)
     {
        total_sum_rows = 0;
       for (int j = 0; j < cols; j++)
       {
            
            total_sum_rows+= arr[i][j];
       }
        if (max_sum_rows < total_sum_rows)
            {
            max_sum_rows = total_sum_rows;
            index_max_sum_rows = i;
           
            }
     }
    cout << "dong co tong phan tu lon nhat la dong so: " << index_max_sum_rows << " co tong gia tri la: " << max_sum_rows << endl;
     for (int j = 0; j < cols; j++)
     {  
        total_sum_cols = 0;
        for (int i = 0; i < rows; i++)
        {   
            
            total_sum_cols += arr[i][j];
           
            
        }
         if (max_sum_cols < total_sum_cols)
            {
                max_sum_cols = total_sum_cols;
                index_max_sum_cols = j;
            }
     }
     cout << "cot co tong phan tu lon nhat la cot so: " << index_max_sum_cols << " co tong gia tri la: " << max_sum_cols << endl;

    
    
    return 0;
}