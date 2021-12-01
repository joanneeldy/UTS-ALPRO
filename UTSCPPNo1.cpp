#include <iostream>
using namespace std;

int main()
{
    int x, y, nomor;
    char repeat;

    do{
        cout<<"Jumlah baris? ";
        cin>>nomor;
        if (nomor % 2 == 1)
        {
            cout<<"Bintang("<<nomor<<"):\n";
            for (x=1; x<=nomor; x++)
            {
                for(y=1; y<=nomor; y++)
                {
                    if(x==(nomor/2)+1 || y==(nomor/2)+1){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
            } else {
                cout<<"Anda memasukkan jumlah Genap. Masukkan hanya jumlah Ganjil";
            }
            cout<<"\nApakah Anda ingin mengulang Program (Y/N): ";
            cin>>repeat;
            }
    while (repeat == 'Y');
        if (repeat == 'N') {
            cout<<"Terima kasih telah menggunakan Program ini.";
    }
    return 0;
}