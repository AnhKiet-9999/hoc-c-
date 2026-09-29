#include <iostream>

using namespace std;
int main(){
    // tim hieu ve cau truc dieu kien trong c++ (if else)
    // ban chat la yeu cau may tinh ra duoc cac quyet dinh xu ly cac tinh huong khac nhau
    int my_age = 16;
    if (my_age >= 18) {
        cout << "Ban da du tuoi hoc lai xe may phan khoi lon" << endl;
    }else {
        cout << "Ban chua du tuoi hoc lai xe may phan khoi lon" << endl;
    }   
      //if : keyword (tu khoa - bat buoc ghi nho va viet chin xac)
     //() : cu phap bieu dien dieu kien cho if : my_age >= 18 (bieu thuc dieu kien)
     //{} : khoi lenh thuc thi khi dieu kien dung (true)
     // neu bieu thuc dieu kien dung (true) thi thuc hien cac lenh trong dau {}
     // neu bieu thuc dieu kien sai (false) thi bo qua cac lenh trong dau {}
     //else :keyword (tu khoa) va se thuc thi lenh ben trong {} neu ma bieu thuc dieu kien cua if la sai (false)

     float my_point = 7.5;
     //thong bao xep loai cua sinh vien : kem - trung binh - kha - gioi
         // 0 - < 5.0: kem
        // 5.0 - < 7.0:trung binh
        // 7.0 - < 9.0 : kha
        // >= 9.0 : gioi
    if(my_point < 5.0){
        cout << "Xep loai sinh vien kem" << endl;
    }else if (my_point >= 5.0 && my_point < 7.0){
        cout << "Xep loai sinh vien trung binh" << endl;
    }else if (my_point >= 7.0 && my_point < 9.0){
        cout << "Xep loai sinh vien kha" << endl;
    }else if (my_point >= 9.0){
        cout << "Xep loai sinh vien gioi" << endl;
    } else {
        cout << "Diem nhap vao khong hop le" << endl;
    }
   
    //if else long nhau (nested)
    // xu ly giai bai tap phuong trinh bac nhat ax + b = 0

    float hsa = 3;
    float hsb = -6;
    // 3x - 6 = 0;
    if (hsa == 0) {
        if (hsb == 0) {
            cout << "phuong trinh co vo so nghiem" << endl;
        } else {
            // Trường hợp hsa == 0 và hsb != 0 (Ví dụ: 0x - 6 = 0)
            cout << "phuong trinh vo nghiem" << endl;
        }
    } else {
        // Trường hợp hsa != 0 (Ví dụ: 3x - 6 = 0)
        float result = -hsb / hsa;
        cout << "phuong trinh co nghiem la x = " << result << endl;
    }
        
   
    
                                                                  

    return 0;
}