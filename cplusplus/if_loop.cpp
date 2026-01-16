#include <iostream>
using namespace std;

int main() {
    int angka;

    for (int i = 1; i <= 5; i++) {
        cout << "Masukkan sebuah angka ke-" << i << " : ";
        cin >> angka;

        if (angka % 2 == 0) {
            cout << angka << " Angka adalah genap." << endl;
        } else {
            cout << angka << " Angka adalah ganjil." << endl;
        }
    }

    return 0;
}