#include <iostream>
using namespace std;

int main () {
    struct Mahasiswa {
        string nama;
        int umur;
        string jurusan;
        double nilai;
        char grade;
    };

    Mahasiswa mhs[5];
    int pilihan;
    bool sudahInput = false;
    double totalNilai = 0.0;
    double rataRata = 0.0;
    char grade;

    while (true) {
        cout << "\n=== MENU PROGRAM MAHASISWA ===\n";
        cout << "1. Input Data Mahasiswa & Hitung Rata-rata\n";
        cout << "2. Tampilkan Grade Mahasiswa\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore(); // Membersihkan newline dari buffer setelah input angka

        switch (pilihan) {
            case 1:
                totalNilai = 0.0;
                for (int i = 0; i < 5; i++) {
                    cout << "Masukkan data untuk Mahasiswa ke-" << (i + 1) << ":\n";
                    
                    cout << "Nama: ";
                    getline(cin, mhs[i].nama);

                    cout << "Umur: ";
                    cin >> mhs[i].umur;

                    cout << "Jurusan: ";
                    getline(cin, mhs[i].jurusan);

                    cout << "Nilai: ";
                    cin >> mhs[i].nilai;

                    totalNilai += mhs[i].nilai;
                    // Tentukan grade berdasarkan nilai
                    if (mhs[i].nilai >= 85) mhs[i].grade = 'A';
                    else if (mhs[i].nilai >= 70) mhs[i].grade = 'B';
                    else if (mhs[i].nilai >= 55) mhs[i].grade = 'C';
                    else if (mhs[i].nilai >= 40) mhs[i].grade = 'D';
                    else mhs[i].grade = 'E';
                }

                rataRata = totalNilai / 5;
                sudahInput = true;
                cout << "Rata-rata nilai mahasiswa: " << rataRata << endl;
                
                break;

            case 2:
                if (!sudahInput) {
                    cout << "Silakan input data mahasiswa dulu (menu 1)\n";
                    break;
                }

                for (int i = 0; i < 5; i++) {
                    cout << "Mahasiswa: " << mhs[i].nama
                        << " | Jurusan: " << mhs[i].jurusan
                        << " | Nilai: " << mhs[i].nilai
                        << " | Grade: " << mhs[i].grade << endl;
                }
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