#include <iostream>
using namespace std;

int main() {
    double angka;
    double total = 0.0;
    double rata2;

    cout << "Masukkan 5 angka untuk dihitung rata-ratanya:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Angka ke-" << i << ": ";
        cin >> angka;

        if (angka < 0) {
            cout << "Angka tidak boleh negatif. Silakan masukkan lagi." << endl;
            i--; // Mengulang input untuk angka yang sama
            continue; // Kembali ke loop
        }
        total += angka;
    }

    rata2 = total / 5.0;
    cout << "Rata-rata: " << rata2 << endl;

    return 0;
}