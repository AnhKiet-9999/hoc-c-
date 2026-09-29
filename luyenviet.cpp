#include <iostream>
using namespace std;

// Phan 1: Hang so bang #define (KHONG co dau ; o cuoi)
#define MA_CONG_TY "CTY001"

int main() {
    // Phan 2: Hang so bang const (PHAI co dau ; o cuoi)
    const double TAX_RATE = 0.1;                    // Thue suat 10%
    const double MUC_LUONG_TOI_THIEU = 5000000;      // Muc luong toi thieu chiu thue

    // Phan 3: In gia tri ra man hinh
    cout << "Ma cong ty: " << MA_CONG_TY << endl;
    cout << "Thue suat: " << TAX_RATE << endl;
    cout << "Muc luong toi thieu chiu thue: " << MUC_LUONG_TOI_THIEU << endl;

    // Phan 4: Ap dung vao tinh toan thuc te
    double luong = 15000000;
    double tienThue = 0;

    if (luong > MUC_LUONG_TOI_THIEU) {
        tienThue = (luong - MUC_LUONG_TOI_THIEU) * TAX_RATE;
    }

    cout << "Luong: " << luong << endl;
    cout << "Tien thue phai nop: " << tienThue << endl;

    return 0;
}