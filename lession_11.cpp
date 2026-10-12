#include <iostream>

using namespace std;

int main()
{
    // tim hieu ve mang trong c++;
    // co 2 loai : mang 1 chieu va mang da chieu(2 chieu);
    // tim hieu ve mang 1  chieu truoc;       
    // dinh nghia : mang la mot tap hop cac gia tri cung kieu du lieu trong mot bien duoc luu tru duoc cai o nho lien tiep nhau trong bo nho cua may tinh (bo nho ram)
    // mỗi một phần tử trong mảng được định danh bằng một chỉ số (index) bắt đầu từ 0 đên n-1 (trong đó n là số lượng phần tử của mảng). phần tử đầu tiên trong mảng có chỉ số (index) là 0. phần từ cuối cùng trong mảng có chỉ số là n - 1.

    //==================== KHAI BAO VA KHOI TAO MANG 1 CHIEU =====================
    int numbers[5]; // khai bao mot mang se chua 5 phan tu la so nguyen (chua gan gia tri);
    int scores[3] = {7,8,9}; // mot mang chua 3 so nguyen duoc gan gia tri cu the;
    int ages[] = {20,21,22,23,24}; // khong khai bao san kich thuoc (so luong phan tu) cho mang. tu dong diem so luong phan tu da duoc gan de  xac dinh kich thuoc cua mang;

    //======= TRUY CAP VA DUYET MANG (VONG LAP) ==========
    // de thao tac (truy cap) voi tung phan tu trong mang, nho cuu phap
    // ten_mang[chi so]; chi so vi tri cua phan tu nam trong mang
    int my_age = ages[2]; //22
    cout << "my age: " << my_age << endl;
   int my_score = scores[0];
    cout << "my score: " << my_score << endl;
    cout << "gia tri: " << numbers[2] << endl;
    int my_number[9] = {1,2,3,4,5,6,7,8,9};
    // dung vong lap for de duyet ( vi ta biet minh can lap bao nhieu lan)
    for (int i = 0 ; i < 9 ; i++)
    {
        cout << "vi tri: " << i << " Gia tri: " << my_number[i] << endl;
    }

    //==================== THAO TAC NHAP MANG 1 CHIEU TU BAN PHIM VA IN RA MANG;
    int arr_size; //kich thuoc: so luong phan tu cua mang;
    // kich thuoc toi thieu 3 phan tu va toi da 10 phan tu(kich thuoc khong the la so am phai > 0)
    do
    {
        cout << "nhap so luong phan tu cua mang:  " << endl;
        cin >> arr_size;
        if(cin.fail() || arr_size < 3 || arr_size > 10)
        {
            cout << "nhap toi thieu 3 phan va toi da 10 phan: " << endl;
        }

    } while (arr_size < 3 || arr_size > 10);

    int arr[arr_size]; // khai bao mang tinh chua co gia tri
    cout << "nhap cac phan tu cho mang: " << endl;
    for(int i = 0; i < arr_size; i++)
    {
        cout << "arr [" << i << "] = ";
        cin >> arr[i]; // nhap du lieu tu ban phim ;

    }
    // in mang vua nhap tu ban phim ra 
    cout << "\nMang vua nhap la: ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " "; // in tung phan tu cach nhau boi khoang trang;
    }
    cout << endl;
    

    return 0;
}