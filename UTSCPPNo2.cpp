#include <iostream>
using namespace std;

int main()
{
    char repeat;
    int number;

    do{
        cout << "Silahkan pilih (1-3) jumlah uang yang akan Anda ambil: ";
        cout << "\n1. 100.000";
        cout << "\n2. 250.000";
        cout << "\n3. 500.000\n";
        cin >> number;
        switch (number) {
        case 1:
            cout << "Silahkan ambil uang 100.000 Anda";
            break;
        case 2:
            cout << "Silahkan ambil uang 250.000 Anda";
            break;
        case 3:
            cout << "Silahkan ambil uang 500.000 Anda";
            break;
        default:
        cout << "Masukan angka 1-3";
        }
        cout << "\nApakah ingin mengulang lagi? (Y/N)\n";
        cin >> repeat;
        }
        while (repeat == 'Y');
            if (repeat == 'N') {
                cout << "Terima kasih telah menggunakan ATM ini.";
    }
    return 0;
}