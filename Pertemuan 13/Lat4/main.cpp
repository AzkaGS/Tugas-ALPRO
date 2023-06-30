#include <iostream>

using namespace std;

typedef struct mahasiswa {
    char nim[15],nama[10],jurusan[25];
    int lulus;
} mhs;


int main()
{
    //Array Statis
    cout << "----------------------Array Statis----------------------" << endl;
    for(int a=0; a<4; a++){
        cout << "Masukkan data baris ke-" << a+1 << endl;
        cin >> data[a].nim >> data[a].nama >> data[a].jurusan >> data[a].lulus;
    }
    return 0;
}
