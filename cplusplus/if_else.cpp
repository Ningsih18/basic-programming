#include <iostream>
#include <string>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai Anda (0-100): ";
    cin >> nilai;
    if (nilai >= 90 && nilai <= 100) {
        cout << "Grade Anda: A" << endl;
    } else if (nilai >= 80 && nilai < 90) {
        cout << "Grade Anda: B" << endl;
    } else if (nilai >= 70 && nilai < 80) {
        cout << "Grade Anda: C" << endl;
    } else if (nilai >= 60 && nilai < 70) {
        cout << "Grade Anda: D" << endl;
    } else if (nilai >= 0 && nilai < 60) {
        cout << "Grade Anda: F" << endl;
    } else {
        cout << "Nilai tidak valid!" << endl;
    }

    return 0;
}