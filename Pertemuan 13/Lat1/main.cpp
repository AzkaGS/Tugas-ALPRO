#include <iostream>
using namespace std;

const float phi = 3.14159;

struct PersegiPanjang {
    float P;
    float L;
};

struct Lingkaran {
    float R;
};

struct Kerucut {
    float R;
    float T;
};

struct Bola {
    float R;
};

float hitungLuasPersegiPanjang(PersegiPanjang p) {
    return p.P * p.L;
}

float hitungLuasLingkaran(Lingkaran l) {
    return phi * l.R * l.R;
}

float hitungVolumeKerucut(Kerucut k) {
    return (1.0 / 3.0) * phi * k.R * k.R * k.T;
}

float hitungVolumeBola(Bola b) {
    return (4.0 / 3.0) * phi * b.R * b.R * b.R;
}

int main() {
    PersegiPanjang pp;
    pp.P = 10;
    pp.L = 16;
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(pp) << endl;

    Lingkaran l;
    l.R = 5;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(l) << endl;

    Kerucut k;
    k.R = 9;
    k.T = 5;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(k) << endl;

    Bola b;
    b.R = 4;
    cout << "Volume Bola: " << hitungVolumeBola(b) << endl;

    return 0;
}
