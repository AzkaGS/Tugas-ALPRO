/*
    --------- TUGAS TEORI P.8 ---------

     Nama      : Azka Mayla Fayza
     NIM       : A11.2022.14298
     Kelompok  : A11.4207
     Tgl       : 24 Mei 2023
*/

#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    if (a > 0)
        return 1 + penjumlahan(a-1, b);
    else if (b > 0)
        return 1 + penjumlahan(a, b-1);
    else
        return 0;
}

int pengurangan(int a, int b){
    if (a > b)
        return 1 + pengurangan(a-1, b);
    else if (b > a)
        return pengurangan(a, b-1)-1;
    else
        return 0;
}

int perkalian (int a, int b){
    if (b > 0)
        return a + perkalian(a, b-1);
    else
        return 0;
}

int pembagian (int a, int b){
    if (a > b)
        return 1 + pembagian(a-b, b);
    else
        return 0;
}

int pangkat (int c, int d){
    if(d == 1)
        return c;
    else if (d > 1)
        return c * pangkat(c, d-1);
}

int fibonacci(int e){
    if (e > 1)
        return fibonacci(e-1) + fibonacci(e-2);
    else if (e == 1)
        return 1;
    else
        return 0;
}

int faktorial(int e){
    if (e > 1)
        return e * faktorial(e-1);
    else
        return 1;
}

int main()
{
    int n,m;
    cout << "----------------------------------------------------------" << endl;
    cout << "| \t\t Program Function Recursive \t\t |" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "Masukkan Bilangan ke-1 \t\t: ";cin >> n;
    cout << "Masukkan Bilangan ke-2 \t\t: ";cin >> m;
    cout << "\n" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "| \t\t\t HASIL PROGRAM \t\t\t |" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "Penjumlahan "<< n << " + " << m << " \t\t: " << penjumlahan(n, m) << endl;
    cout << "Pengurangan "<< n << " - " << m << " \t\t: " << pengurangan(n, m) << endl;
    cout << "Perkalian "  << n << " * " << m << " \t\t: " << perkalian(n,m) << endl;
    cout << "Pembagian "  << n << " / " << m << " \t\t: " << pembagian(n,m) << endl;
    cout << "Pangkat "    << n << " ^ " << m << " \t\t\t: " << pangkat(n,m) << endl;
    cout << "Fibonaci index ke-" << n << " \t\t: " << fibonacci(n) << endl;
    for(int i=0; i<=n; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    cout << "Faktorial !" << n << " \t\t\t: " << faktorial(n) << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}
