#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            cout << "Da tim thay so dau tien chia het cho 7: " << i << endl;
            break;
        }
    }

    return 0;
}