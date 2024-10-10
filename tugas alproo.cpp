#include <iostream>
#include <string>
using namespace std;

double pokok(int jam);
double lembur(int jam);
double makan(int jam);
double transport(int jam);

int main() {
    string NIP, Nama;
    int jamKerja;
    double gajiPokok, gajiLembur, uangMakan, uangTransport, totalGaji;

    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin >> Nama;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    gajiPokok = pokok(jamKerja);
    gajiLembur = lembur(jamKerja);
    uangMakan = makan(jamKerja);
    uangTransport = transport(jamKerja);
    totalGaji = gajiPokok + gajiLembur + uangMakan + uangTransport;

    cout << "\nNIP: " << NIP;
    cout << "\nNama: " << Nama;
    cout << "\nGaji Pokok: Rp " << gajiPokok;
    cout << "\nLembur: Rp " << gajiLembur;
    cout << "\nUang Makan: Rp " << uangMakan;
    cout << "\nUang Transport: Rp " << uangTransport;
    cout << "\nTotal Gaji: Rp " << totalGaji << endl;

    return 0;
}

double pokok(int jam) {
    return jam * 7500;
}

double lembur(int jam) {
    if (jam > 8) {
        return (jam - 8) * 1.5 * 7500;
    }
    return 0;
}

double makan(int jam) {
    if (jam >= 9) {
        return 10000;
    }
    return 0;
}

double transport(int jam) {
    if (jam >= 10) {
        return 13000;
    }
    return 0;
}
