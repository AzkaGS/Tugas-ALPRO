#include <iostream>

using namespace std;

enum Cuaca{Cerah,Mendung,Hujan,Badai};

int main()
{
    int cuaca = 0;//Dimulai dari 0 bukan 1
    if(cuaca == Cuaca::Cerah)
        cout << "Cuaca hari ini Cerah";
    else if(cuaca== Cuaca::Mendung)
        cout << "Cuaca hari ini Mendung";
    else if(cuaca == Cuaca::Hujan)
        cout << "Cuaca hari ini Hujan";
    else if (cuaca == Cuaca::Badai)
        cout << "Cuaca hari ini Badai";
    return 0;
}
