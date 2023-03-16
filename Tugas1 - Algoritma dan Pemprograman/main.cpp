/*
Program Penjumlahan, Pengurangan, Perkalian 2Bilangan
dan Total & Rata-Rata  Element Array.

Nama    : Azka Mayla Fayza
NIM     : A11.2022.14298
Kelas   : A11.4207

*/

#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    return a + b;
}

int pengurangan(int a, int b){
    return a - b;
}

int perkalian(int a, int b){
    return a * b;
}

int total(int arry[], int x){
    int jumlah = 0;
    for(int i=0; i<x; i++){
        jumlah+=arry[i];
    }
    return jumlah;
}

float rata(int arry[], int x){
    float jumlah = 0;
    for(int i=0; i<x; i++){
        jumlah += arry[i];
    }
    return jumlah /= x;
}


int main()
{

    cout << "---------------------------------------------------" <<endl;
    cout << "                    PROGRAM                        " <<endl;
    cout << " Penjumlahan, Pengurangan, dan Perkalian 2Bilangan " <<endl;
    cout << "---------------------------------------------------" <<endl;

    //Input bilangan
    int a, b, x;
    cout << " Masukkan bilangan 1 : ";
    cin >> a;
    cout << " Masukkan bilangan 2 : ";
    cin >> b;

    cout << "\t" << endl;
    cout << "                    | HASIL |                    " <<endl;
    cout << "\n Penjumlahan : " << a << " + " << b << " = " << penjumlahan(a,b) <<endl;
    cout << " Pengurangan : " << a << " - " << b << " = " << pengurangan(a,b) <<endl;
    cout << " Perkalian   : " << a << " * " << b << " = " << perkalian(a,b) <<endl;
    cout << "\t" << endl;
    cout << "---------------------------------------------------"<<endl;
    cout << "              Total dan Rata-Rata                  "<<endl;
    cout << "---------------------------------------------------"<<endl;
    cout << " Masukkan jumlah inputan array = ";
    cin >> x;
    cout << "\t" << endl;



    int arr[x];
    for(int i=0; i<x; i++){
        cout << " Masukkan bilangan indeks ke- [" << i+1 << "] = ";
        cin >> arr[i];
    }
    cout << " \t " << endl;
    cout << " Total  \t: " << total(arr,x) <<endl;
    cout << " Rata-Rata  \t: " << rata(arr,x) <<endl;
    cout << "---------------------------------------------------" <<endl;
    return 0;
}
