#include <iostream>
using namespace std;

int main(){
    char ulang;

    awal:
    cout << "Program perulangan menggunakan go to\n" << endl;

    cout << "Ingin mengulang perintah(y/n) ?";
    cin >> ulang;

    cout << endl;

    if (ulang=='y'||ulang=='y'){
        goto awal;
    }
    if(ulang=='n'||ulang=='n'){
        goto akhir;
    }
    akhir:

    return 0;
}