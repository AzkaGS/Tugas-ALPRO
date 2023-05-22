/*
     -------------- TUGAS 3 --------------

     Nama      : Azka Mayla Fayza
     NIM       : A11.2022.14298
     Kelompok  : A11.4207
     Tgl       : 20 Mei 2023

 */

#include <iostream>

using namespace std;

bool isGanjil(int a){
    return a % 2 == 1;
}

void genapTerkecil (int arr[], int n){
    int min = arr[0];
    int index;
    for(int i=0; i<n; i++ ){
        if(!isGanjil(arr[i])){
            if(arr[i] < min){
                min = arr[i];
                index = i;
            }
        }
    }
    cout << "----------Hasil-----------" << endl;
    cout << "Bilangan Genap Terkecil : " << min << endl;
    cout << "Index : " << index << endl;
}

int main(){
    int arr[5] = {6,7,4,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    genapTerkecil (arr, n);
    return 0;
}
