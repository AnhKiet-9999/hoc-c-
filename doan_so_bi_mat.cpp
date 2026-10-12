#include <iostream>
using namespace std;

int main() {
    int soBiMat = 7;
    int doan;
    int soLanDoan = 0;

    do {
        cout << "Doan mot so tu 1 den 10: ";
        cin >> doan;
        soLanDoan++;

        if (doan > soBiMat) {
            cout << "Qua lon! Thu lai." << endl;
        } else if (doan < soBiMat) {
            cout << "Qua nho! Thu lai." << endl;
        }
    } while (doan != soBiMat);

    cout << "Chinh xac! So can tim la " << soBiMat << ". Ban da doan " << soLanDoan << " lan." << endl;
    return 0;