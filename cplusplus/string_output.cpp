#include <iostream>
#include <string>
using namespace std;

int main () {
    string nama;

    cout << "Masukkan nama Anda : ";
    getline(cin, nama);
    cout << "Halo, " << nama << "!" << endl;
  
    return 0;
}