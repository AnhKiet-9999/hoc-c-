#include <iostream>

using namespace std;

int main()
{
    // mảng đa chiều  - không gian 2 chiều (mảng 2 chiều);
    // mảng 2 chiều là 1 tập hợp các phần tử cùng kiểu dữ liệu , được sắp xếp theo dạng bảng (ma trận) bao gồm các hàng và các cột 
    // trong c++ , mảng 2 chiều được lưu trữ trong một khối bộ nhớ liên tục tuyến tính theo thứ tự từng hàng (bộ nhớ ram)
    // cú pháp khai báo : data_type array_name[rowl][cols]
    //                                         hàng   cột

    int number[2][3] = 
    {  
        {1 ,2 ,3},
        {4 ,5 ,6}
    };
    // khai báo thành công mãng 2 chiều;
    // 2 : sô dòng của mảng (2 chiều)
    // 3 : là số cột của mảng (2 chiều)
    // trong mảng 2 chiều có khái niệm : chỉ số theo dòng và chỉ số theo cột để biểu diễn vị trí của phần tử
    // dòng đầu tiên trong mảng 2 chiêu là vị trí số 0
    // cột đầu tiên trong mảng 2 chiêu là vị trí số 0
    //truy cập vào 1 phần tử trong mảng 2 chiều;
    int my_number = number[0][2];
    cout << "number :" << my_number << endl;
    // duyệt mảng 2 chiều : truy cập vào tất cả các phần tử nằm trong mảng

    for(int i = 0; i < 2; i++) // vòng lặp này đề duyệt các dòng(rows) ở trong mảng 2 chiều
    {
        for(int j = 0; j < 3; j++) // vòng lặp này duyệt qua các cột(cols) trong mảng 2 chiều 
        {
            cout  << " number[" << i << "][" << j << "] = " << number[i][j] << endl;
        }
    }
    //cho nhập mảng 2 chiều từ bản phím, sau đó in mảng vừa nhập ra 
    int rows; // số dòng của mảng 2 chiều cần nhập
    int cols; // số cột của mảng 2 chiều cần nhập
    cout << "=== nhap so hang va so cot cua mang 2 chieu ===" << endl;
    cout << "xu ly nhap so dong cho mang 2 chieu" << endl;
    do
    {
        cout << "nhap so dong(1-10) : " << endl;
        cin >> rows;
        if(cin.fail() || rows < 0 || rows > 10)
        {
            cout << "nhap so dong tu 1 - 10" << endl;
        }
    }while(rows < 0 || rows > 10);

      cout << "xu ly nhap so cot cho mang 2 chieu" << endl;
    do
    {
        cout << "nhap so cot(1-10) : " << endl;
        cin >> cols;
        if(cin.fail() || cols < 0 || cols > 10)
        {
            cout << "nhap so cot tu 1 - 10" << endl;
        }
    }while(cols < 0 || cols > 10);

    int arr[rows][cols]; // khởi tạo mảng mà chưa gán giá trị
    // cho nhập mảng từ bàn phím
    cout << " nhap cac gia tri phan tu vao trong mang" << endl;
    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            cout  << " my_arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j]; // nhap tu ban phim

        }
    }
    // xuất mảng vừa nhập
    cout << " mang vua nhap la:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout  << " arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }

    return 0;
}