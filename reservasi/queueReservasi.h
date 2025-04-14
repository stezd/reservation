//
// Created by Aldi Pramudya on 14/04/2025.
//

#ifndef QUEUERESERVASI_H
#define QUEUERESERVASI_H

#include "reservasi.h"
#include <queue>

class queueReservasi {
std::queue<Reservasi> antrian;

public:
    void tambahReservasi(const Reservasi &r);

    Reservasi prosesReservasi();

    [[nodiscard]] bool antrianKosong() const;
};



#endif //QUEUERESERVASI_H
