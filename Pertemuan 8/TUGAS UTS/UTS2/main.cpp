/*
    -------------- TUGAS 3 --------------

     Nama      : Azka Mayla Fayza
     NIM       : A11.2022.14298
     Kelompok  : A11.4207
     Tgl       : 20 Mei 2023
*/

#include <iostream>

using namespace std;

void insertionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void tampilArray(int arr[], int n);

int main()
{
    int X[] = {1,4,5,2,1,3,2};
    int a = sizeof(X)/sizeof(X[0]);
    bubbleSort(X,a);
    insertionSort(X,a);
    return 0;
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for(int i=1; i<n ;i++){
        key = arr[i];
        j = i - 1;
        while (j>=0 &&  key > arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    cout << "Insertion sort : " << endl;
    tampilArray(arr,n);
}


void bubbleSort(int arr[], int n){
    for(int i=0; i<n ;i++){
        for(int j=0; j<n-1 ;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Bubble Sort : " << endl;
    tampilArray(arr,n);
}

void tampilArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
