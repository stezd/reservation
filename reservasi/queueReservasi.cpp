//
// Created by LENOVO on 14/04/2025.
//

#include "queueReservasi.h"
#include <iostream>

void queueReservasi::tambahReservasi(const Reservasi &r) {
    antrian.push(r);
    std::cout << "Reservasi untuk " << r.getId() << " telah ditambahkan ke antrian.\n";
}


Reservasi queueReservasi::prosesReservasi() {
    if (!antrianKosong()) {
        Reservasi r = antrian.front();
        antrian.pop();
        std::cout << "Reservasi untuk " << r.getId() << " sedang diproses.\n";
        return r;
    } else {
        std::cout << "Antrean kosong!\n";
        return {"", "", "", "", "", ""};
    }
}

bool queueReservasi::antrianKosong() const {
    return antrian.empty();
}