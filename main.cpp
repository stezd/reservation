// main.cpp
#include <iostream>
#include "reservasi/queueReservasi.h"

int main() {
    queueReservasi queue;

    // Membuat beberapa reservasi
    Reservasi r1("John Doe", "12345", "Ruang A", "2025-04-20", "09:00", "11:00");
    Reservasi r2("Jane Doe", "67890", "Ruang B", "2025-04-21", "10:00", "12:00");

    // Menambahkan reservasi ke antrian
    queue.tambahReservasi(r1);
    queue.tambahReservasi(r2);

    // Memproses reservasi
    queue.prosesReservasi();  // John Doe akan diproses
    queue.prosesReservasi();  // Jane Doe akan diproses

    // Cek apakah antrian kosong
    if (queue.antrianKosong()) {
        std::cout << "Tidak ada reservasi yang perlu diproses.\n";
    }

    return 0;
}
