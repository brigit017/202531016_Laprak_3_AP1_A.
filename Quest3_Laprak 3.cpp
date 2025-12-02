#include <iostream>
using namespace std;

int main() {

    int pilihan, durasi, tarif15 = 0;
    int total = 0;

    cout << "Pilih Alat (1-4): ";
    cin >> pilihan;

    cout << "Masukkan Durasi Pemakaian (menit): ";
    cin >> durasi;

    // Menentukan tarif per 15 menit
    switch (pilihan) {
        case 1: tarif15 = 5000; break;
        case 2: tarif15 = 10000; break;
        case 3: tarif15 = 8000; break;
        case 4: tarif15 = 7000; break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 0;
    }

    // Hitung interval 15 menit
    int interval = durasi / 15;

    // Looping untuk menghitung total tarif
    for (int i = 0; i < interval; i++) {
        total += tarif15;
    }

    cout << "Total Biaya Sewa: Rp " << total << endl;

    return 0;
}
