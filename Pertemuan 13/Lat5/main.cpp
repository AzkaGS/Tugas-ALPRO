#include <iostream>

using namespace std;

typedef struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main()
{
    Sepeda sepeda;
    Sepeda* psepeda = &sepeda;

    psepeda->merk = "Polygon";
    psepeda->type = "Sepeda Gunung";
    psepeda->tahun = 2013;
    psepeda->harga = "2.000.000";

    cout << "Merk = " << psepeda->merk << endl;
    cout << "Type = " << psepeda->type << endl;
    cout << "Tahun = " << psepeda->tahun << endl;
    cout << "Harga = " << psepeda->harga << endl;

    return 0;
}
