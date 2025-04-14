//
// Created by Aldi Pramudya on 14/04/2025.
//

#ifndef RESERVASI_H
#define RESERVASI_H

#include <string>
using namespace std;

class Reservasi {
    string nama;
    string id;
    string ruangan;
    string tanggal;
    string jamMulai;
    string jamSelesai;
public:
    Reservasi(const std::string& n, const std::string& i, const std::string& r,
              const std::string& t, const std::string& jm, const std::string& js)
        : nama(n), id(i), ruangan(r), tanggal(t), jamMulai(jm), jamSelesai(js) {}
    void tampilkan() const;
    string getId() const;
};

#endif //RESERVASI_H
