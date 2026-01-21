#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double nilai[5];
    double total = 0.0;
    double rata2 = 0.0;
    char grade;
    bool sudahHitung = false;

    while (true) {
        cout << "\n=== MENU PROGRAM ===\n";
        cout << "1. Input & Hitung Rata-rata\n";
        cout << "2. Tampilkan Grade\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                total = 0.0;
                cout << "Masukkan 5 nilai:\n";
                for (int i = 0; i < 5; i++) {
                    cout << "Nilai ke-" << (i + 1) << ": ";
                    cin >> nilai[i];
                    total += nilai[i];
                }
                rata2 = total / 5;
                sudahHitung = true;
                cout << "Rata-rata: " << rata2 << endl;
                break;

            case 2:
                if (!sudahHitung) {
                    cout << "Silakan hitung rata-rata dulu (menu 1)\n";
                    break;
                }

                if (rata2 >= 85) grade = 'A';
                else if (rata2 >= 70) grade = 'B';
                else if (rata2 >= 55) grade = 'C';
                else if (rata2 >= 40) grade = 'D';
                else grade = 'E';

                cout << "Grade: " << grade << endl;
                break;

            case 3:
                cout << "Terima kasih.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid.\n";
        }
    }

    return 0;
}
