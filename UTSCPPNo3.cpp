#include <iostream>
using namespace std;

int main()
{
    int number, i;
    bool prime = true;
    cout<<"Masukan angka:\n";
    cin>>number;
    if (number % 2 == 0){
        cout<<"angka genap";
    } else{
        cout<<"angka ganjil";
    }
    if (number > 0){
        cout<<"\nangka positif";
    } else {
        cout<<"\nangka negatif";
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

    return 0;
}