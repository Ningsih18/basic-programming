#include <iostream>
using namespace std;

int main() {
    int angka;
    int total = 0;

    cout << "Masukkan 5 angka untuk dijumlahkan:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Angka ke-" << i << ": ";
        cin >> angka;
        total += angka;
    }

    cout << "Total penjumlahan: " << total << endl;

    return 0;
}