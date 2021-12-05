#include <iostream>
using namespace std;

int main()
{
    char ulang;
    do{
    int number, i;
    bool prime = true;
    cout<<"Masukan angka: ";
    cin>>number;
    if (number % 2 == 0){
        cout<<"Angka genap";
    } else{
        cout<<"Angka ganjil";
    }
    if (number > 0){
        cout<<"\nAngka positif";
    } else {
        cout<<"\nAngka negatif";
    }
    if (number == 0 || number == 1 || number < 0) {
        prime = false;
    }
    else {
        for (i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    }
    if (prime)
    cout<<"\n"<<number<<" adalah angka prima";
    else
    cout<<"\n"<<number<<" bukan angka prima";
    cout << "\nApakah ingin mengulang lagi? (y/n)\n";
        cin >> ulang;
    }
        while (ulang == 'y');
            if (ulang == 'n') {
                cout << "Terima kasih. Semoga harimu menyenangkan ^^";
    }
    return 0;
}