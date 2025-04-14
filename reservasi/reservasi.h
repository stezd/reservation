//
// Created by Aldi Pramudya on 14/04/2025.
//

#ifndef RESERVASI_H
#define RESERVASI_H

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Reservasi {
    std::string nama;
    std::string id;
    std::string ruangan;
    std::string tanggal;
    std::string jamMulai;
    std::string jamSelesai;
public:
    // Constructor
    Reservasi(std::string  n, std::string  i, std::string  r,
              std::string  t, std::string  jm, std::string  js)
        : nama(std::move(n)), id(std::move(i)), ruangan(std::move(r)), tanggal(std::move(t)), jamMulai(std::move(jm)), jamSelesai(std::move(js)) {}

    // Menampilkan informasi reservasi
    void tampilkan() const {
        std::cout << "Nama: " << nama << "\n"
                  << "ID: " << id << "\n"
                  << "Ruangan: " << ruangan << "\n"
                  << "Tanggal: " << tanggal << "\n"
                  << "Jam: " << jamMulai << " - " << jamSelesai << "\n";
    }

    // Getter untuk ID
    [[nodiscard]] std::string getId() const {
        return id;
    }
    [[nodiscard]] std::string getTanggal() const {
        return tanggal;
    }
    [[nodiscard]] std::string getJamMulai() const {
        return jamMulai;
    }
};

#endif //RESERVASI_H
