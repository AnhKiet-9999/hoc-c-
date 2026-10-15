#include <iostream>

using namespace std;

int main()
{   
    int number[3][3] = 
    {
        {5, 6, 2},
        {1, 8, 3},
        {9, 4, 7}
    };
    // tính tổng các phần tử trên đường chéo phụ của mảng 2 chiều : 2 + 8 + 9
    // tính tổng các phần tử trên đường chéo chính của mảng 2 chiều: 5 + 8 + 7
    // các phần tử của đường chéo chính i = j ( số hàng == số cột)
    int sum_main = 0; // tổng phần tử trên các đường chéo chính
    int sum_phu = 0; // tổng số phần tử trên các đường chéo phụ
    for( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum_main+=number[i][j];
            }
            if( i + j == 2)
            {
               sum_phu+=number[i][j];
            }
            
        }
        
    }
    cout << "tong cua duong cheo chinh la: " << sum_main << endl;
    cout << "tong cua duong cheo phu la: " << sum_phu << endl;
    // tìm phần tử nhỏ nhất trong mảng? cho biết vị trí của phàn tử nằm ở dòng số mấy và cột số mấy
    int min = number[0][0];
    int cot = 0;
    int dong = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(min > number[i][j])
            {
                min = number[i][j];
                dong = i;
                cot = j;
            }
        }
        
    }
    cout << " phan tu nho nhat trong mang la: " << min << endl;
    cout << "o dong: " << dong << " va cot " << cot << endl;

    // ---------------- them bai tap ve nha --------------
    // tao 1 mang 2 chieu nhap tu ban phim
    // tinh tong cac so tren 1 dong bat ky nhap tu ban phim
    // tinh tong cac so tren 1 cot bat ky nhap tu ban phim
    // tim dong co tong gia tri lon nhat // tuong tu lam cho cot


    return 0;
}