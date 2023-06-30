#include <iostream>
using namespace std;

const float phi = 3.14159;

typedef struct PersegiPanjang {
    float P;
    float L;
};

typedef struct Lingkaran {
    float R;
};

typedef struct Kerucut {
    float R;
    float T;
};

typedef struct Bola {
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
    pp.P = 9;
    pp.L = 5;
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(pp) << endl;

    Lingkaran l;
    l.R = 4;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(l) << endl;

    Kerucut k;
    k.R = 10;
    k.T = 16;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(k) << endl;

    Bola b;
    b.R = 5;
    cout << "Volume Bola: " << hitungVolumeBola(b) << endl;

    return 0;
}
