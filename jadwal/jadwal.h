//
// Created by Aldi Pramudya on 14/04/2025.
//

#ifndef JADWAL_H
#define JADWAL_H

#include "../reservasi/reservasi.h"
#include <vector>

void tambahKeJadwal(const Reservasi &r);
void urutkanJadwal();
void tampilkanJadwal();

class jadwalRuang {
    std::vector<Reservasi> daftar;
public:
    void tambahReservasi(const Reservasi &r);
    void urutkanReservasi();
    void tampilkanReservasi() const;
};

#endif //JADWAL_H
