#include <iostream>
using namespace std;

int main() {
    double nilaimhs[10];
    double total = 0.0;
    double rata2;
    char grade;

    cout << "\nDaftar nilai mahasiswa:\n";
    for (int i = 0; i < 10; i++) {
    cout << "Mahasiswa ke-" << (i + 1) << ": " << nilaimhs[i] << endl;
        if (nilaimhs[i] < 0 || nilaimhs[i] > 100) {
            cout << "Nilai harus antara 0 hingga 100. Silakan masukkan lagi." << endl;
            i--; // Mengulang input untuk nilai yang sama
            continue; // Kembali ke loop
        }
        total += nilaimhs[i];
    }
    rata2 = total / 10.0;
    if (rata2 >= 80) {
        grade = 'A';
    } else if (rata2 >= 70) {
        grade = 'B';
    } else if (rata2 >= 60) {
        grade = 'C';
    } else if (rata2 >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    cout << "Rata-rata nilai mahasiswa: " << rata2 << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}