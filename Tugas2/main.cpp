/*
    Program fungsi dan prosedur
    {untuk menentukan isEven, isOdd, isFactor, maxN, minN, maxArray, minArray, isFound, & swapN}
    NAMA        : Azka Mayla F
    NIM         : A11.2022.14298
    KELOMPOL    : A11.4207
    Tgl         : 21 Maret 2023 (TUGAS 2)
*/

#include <iostream>

using namespace std;

//DEKLARASI
bool isEven (int x);
bool isOdd (int x);
bool isFactor(int x, int y);
int maxN(int a,int b);
int minN(int a, int b);
int maxArray(int A[], int z);
int minArray(int A[], int z);
bool isFound(int x, int A[]);
void swapN(int a,int b);

int main()
{
    //KAMUS
    int x, y, z;

    //INPUTAN NILAI
    cout << "---------------------------------------------------" <<endl;
    cout << "                    PROGRAM                        " <<endl;
    cout << "---------------------------------------------------" <<endl;
    cout << "Masukkan nilai X : ";
    cin >> x;
    cout << "Masukkan nilai Y : ";
    cin >> y;
    cout << "\t" << endl;
    cout << "Apakah "<< x <<" genap ?\t: " << isEven(x) << endl;
    cout << "Apakah "<< y <<" genap ?\t: " << isEven(y) << endl;
    cout << "Apakah "<< x <<" ganjil ?\t: " << isOdd(x) << endl;
    cout << "Apakah "<< y <<" ganjil ?\t: " << isOdd(y) << endl;
    cout << "Apakah "<< y <<" adalah faktor dari " << x << " ?\t: " << isFactor(x,y) << endl;
    cout << "Apakah "<< x <<" adalah faktor dari " << y << " ?\t: " << isFactor(y,x) << endl;
    cout << "Yang lebih besar ?\t: " << maxN(x,y) <<endl;
    cout << "Yang lebih kecil ?\t: " << minN(x,y) <<endl;

    //ARRAY
    cout << "\t" << endl;
    cout << "#Array" << endl;
    cout << "Masukkan Jumlah Array: ";
    cin >> z;
    int A[z];
    for (int i=0; i<z; i++){
        cout << "Masukkan Nilai Array ke- " << i+1 << ": ";
        cin >> A[i];
    }
    cout << "Nilai terbesar dari Array tersebut adalah " << maxArray(A,z) << endl;
    cout << "Nilai terkecil dari Array tersebut adalah " << minArray(A,z) << endl;

    cout << "\t" << endl;
    cout << "#Found" << endl;
    int n;
    cout << "Masukkan angka yang ingin dicari dalam sebuah array: ";
    cin >> n;
    cout << "Apakah nilai " << n << " terdapat pada array di atas? => " << isFound(n,A) << endl;

    cout << "\t" << endl;
    cout << "#Swap" << endl;
    swapN(x,y);

    return 0;
}

bool isEven (int x) {
    return x % 2 == 0;
}

bool isOdd (int x){
    return x % 2 == 1;
}

bool isFactor(int x, int y){
    return x % y == 0;
}

int maxN(int a,int b){
    int m=0;
    if(a>b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int minN(int a, int b){
    int m;
    if(a<b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int maxArray(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] > temp){
            temp = A[i];
        }
    }
    return temp;
}

int minArray(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] < temp){
            temp = A[i];
        }
    }
    return temp;
}


bool isFound (int z, int A[]){
    int n;
    for (int i=0; i<n; i++){
        if (A[i] == z){
            return true;
        }
    }
    return false;

}

void swapN(int a,int b){
    cout << "Tukar nilai bilangan X = "<< a <<" dan Y = "<< b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Hasil Tukar X = " << a << " dan Y = "<< b;
}
