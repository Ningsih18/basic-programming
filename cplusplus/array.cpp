#include <iostream>
using namespace std;

int main() {
    double arr[5];
    double total = 0.0;
    double rata2;

    cout << "Masukkan 5 angka untuk dihitung rata-ratanya:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> arr[i];
        total += arr[i];
    }
    rata2 = total / 5.0;
    cout << "Rata-rata: " << rata2 << endl;
    
    return 0;

}
