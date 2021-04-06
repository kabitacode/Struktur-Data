#include "jam.h"

int main() {
    tJam jam;

    cout << "=======================\n";
    cout << "Nama: Muhamad Zulfiqor\n";
    cout << "NIM: 1120031025\n";
    cout << "=======================\n";
    
    //Input Jam, Menit, Detik
    jam.setJam(12);
    jam.setMenit(45);
    jam.setDetik(12);

    //Menampilkan Jam yang diinputkan
    jam.cetakJam();
    
    return 0;
}
