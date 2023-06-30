#include <iostream>
using namespace std;

struct Sepeda {
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";
};

int main() {

    Sepeda sepeda;
    cout << "Merk: " << sepeda.Merk << endl;
    cout << "Tipe: " << sepeda.Type << endl;
    cout << "Tahun: " << sepeda.Tahun << endl;
    cout << "Harga: " << sepeda.Harga << endl;

    return 0;
}
