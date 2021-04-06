#include "jam.h"

int main() {
    tJam jam;

    cout << "=======================\n";
    cout << "Nama: Muhamad Zulfiqor\n";
    cout << "NIM: 1120031025\n";
    cout << "=======================\n";

    jam.setJam(12);
    jam.setMenit(45);
    jam.setDetik(12);

    jam.cetakJam();
}
