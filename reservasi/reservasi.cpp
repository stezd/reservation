//
// Created by Aldi Pramudya on 14/04/2025.
//

#include "reservasi.h"
#include <iostream>
#include <queue>.


using namespace std;

//implementation disini ngabs
void Reservasi::tampilkan() const {
    cout << "Nama : " << nama << endl;
    cout << "ID : " << id << endl;
    cout << "Ruangan : " << ruangan << endl;
    cout << "Tanggal : " << tanggal << endl;
    cout << "JamMulai : " << jamMulai << endl;
    cout << "JamSelesai : " << jamSelesai << endl;
}

// getter untuk id
string Reservasi::getId const() {
    return id;
}

