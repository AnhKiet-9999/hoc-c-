#include <iostream>
#include <string>

using namespace std;
int main() {
    int id;
    string address;

    cout <<"Hello, World!" << endl;
    cout <<"Codegym C++" << endl;

    cout<<"Moi Nhap Ma So";
    cin >> id;
    cin.ignore();
    cout<<"Moi Nhap Dia Chi";
    //cin >> address;
    getline(cin, address);
    cout << "ID: " << id  << " Address: " << address << endl;

    return 0;
}