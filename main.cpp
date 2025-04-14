// main.cpp
#include <iostream>
#include "jadwal/jadwal.h"
#include "reservasi/queueReservasi.h"

int main() {
    // Membuat objek jadwalRuang dan queueReservasi
    jadwalRuang jadwal;
    queueReservasi queue;

    // Membuat beberapa reservasi
    Reservasi r1("John Doe", "12345", "Ruang A", "2025-04-20", "09:00", "11:00");
    Reservasi r2("Jane Doe", "67890", "Ruang B", "2025-04-21", "10:00", "12:00");
    Reservasi r3("Alice", "54321", "Ruang C", "2025-04-20", "13:00", "15:00");

    // Menambahkan reservasi ke jadwal
    jadwal.tambahReservasi(r1);
    jadwal.tambahReservasi(r2);
    jadwal.tambahReservasi(r3);

    // Menampilkan jadwal sebelum diurutkan
    std::cout << "Jadwal sebelum diurutkan:\n";
    jadwal.tampilkanReservasi();

    // Mengurutkan jadwal
    jadwal.urutkanReservasi();

    // Menampilkan jadwal setelah diurutkan
    std::cout << "\nJadwal setelah diurutkan:\n";
    jadwal.tampilkanReservasi();

    // Menambahkan reservasi ke antrian
    queue.tambahReservasi(r1);
    queue.tambahReservasi(r2);

    // Memproses reservasi dari antrian
    std::cout << "\nMemproses reservasi dari antrian:\n";
    queue.prosesReservasi(); // Memproses John Doe
    queue.prosesReservasi(); // Memproses Jane Doe

    // Cek apakah antrian kosong
    if (queue.antrianKosong()) {
        std::cout << "\nTidak ada reservasi yang perlu diproses.\n";
    }

    return 0;
}
