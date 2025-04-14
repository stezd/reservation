//
// Created by Aldi Pramudya on 14/04/2025.
//

#include "jadwal.h"
#include <algorithm>
#include <iostream>

void jadwalRuang::tambahReservasi(const Reservasi &r) {
    daftar.push_back(r);
}

void jadwalRuang::urutkanReservasi() {
    std::sort(daftar.begin(), daftar.end(), [](const Reservasi &r1, const Reservasi &r2) {
        if (r1.getTanggal() != r2.getTanggal()) {
            return r1.getTanggal() < r2.getTanggal();
        }
        return r1.getTanggal() < r2.getTanggal();
    });
}

void jadwalRuang::tampilkanReservasi() const{
    for (const auto &r : daftar) {
        r.tampilkan();
        std::cout << "------------------------\n";
    }
}