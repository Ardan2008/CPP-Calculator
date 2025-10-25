#include <iostream>
using namespace std;

int main() {
    int opsi;
    float angka1, angka2;
    char ulang;

    cout << "===== SELAMAT DATANG DI KALKULATOR DANZZS =====" << endl;

    do {
        cout << "\nMasukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        cout << "\nPilih operasi yang ingin dilakukan:" << endl;
        cout << "1. Penjumlahan (+)" << endl;
        cout << "2. Pengurangan (-)" << endl;
        cout << "3. Perkalian (*)" << endl;
        cout << "4. Pembagian (/)" << endl;
        cout << "Masukkan pilihan (1/2/3/4): ";
        cin >> opsi;

        cout << endl;

        switch (opsi) {
            case 1:
                cout << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
                break;
            case 2:
                cout << angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
                break;
            case 3:
                cout << angka1 << " * " << angka2 << " = " << angka1 * angka2 << endl;
                break;
            case 4:
                if (angka2 != 0)
                    cout << angka1 << " / " << angka2 << " = " << angka1 / angka2 << endl;
                else
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }

        cout << "\nApakah Anda ingin melakukan perhitungan lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah menggunakan Kalkulator DANZZS!" << endl;

    return 0;
}
