# Sistem Reservasi Ruang Rapat di Kampus

Sistem Reservasi Ruang Rapat ini dirancang untuk memudahkan mahasiswa dan dosen dalam memesan ruang rapat di kampus. Sistem ini mencakup fitur-fitur seperti pemesanan ruang, antrian konfirmasi, penjadwalan terurut, dan pengelolaan kode booking unik. 

## Fitur Utama

- **Reservasi Ruang**: Mahasiswa atau dosen dapat memesan ruang rapat.
- **Antrian Pemesanan**: Setiap pemesanan akan berada dalam antrian untuk konfirmasi.
- **Penjadwalan Ruang**: Ruang rapat dapat ditampilkan dengan urutan yang terorganisir berdasarkan waktu.
- **Kode Booking Unik**: Setiap pemesanan yang berhasil dikonfirmasi akan diberikan kode booking unik.
- **Undo Perubahan Jadwal**: Pengguna dapat membatalkan perubahan pada jadwal pemesanan ruang.

## Struktur Data yang Digunakan

- **Queue**: Digunakan untuk antrian pemesanan ruang.
- **Sorting**: Digunakan untuk mengurutkan jadwal pemakaian ruang berdasarkan waktu.
- **Hashing**: Digunakan untuk menghasilkan kode booking yang unik.
- **Stack**: Digunakan untuk menyimpan perubahan jadwal, memungkinkan fitur undo.

## Instalasi

### Prasyarat

Pastikan kamu telah menginstal **C++ Compiler** yang mendukung standar C++17 atau lebih tinggi.

Untuk penginstalan di **Linux (Ubuntu)**, kamu bisa menggunakan:
```bash
sudo apt update
sudo apt install g++
```

Untuk **Windows**, kamu bisa menginstal **MinGW** atau **Visual Studio**.

### Langkah-langkah Instalasi

1. Clone repositori ini:
   ```bash
   git clone https://github.com/username/repository-name.git
   ```

2. Masuk ke folder proyek:
   ```bash
   cd repository-name
   ```

3. Kompilasi program:
   ```bash
   g++ src/main.cpp src/reservasi/reservasi.cpp src/jadwal/jadwal.cpp -o reservasi
   ```

4. Jalankan program:
   ```bash
   ./reservasi
   ```

## Penggunaan

1. Saat program dijalankan, pengguna akan diminta untuk mengisi data pemesanan ruang rapat.
2. Pemesanan akan dimasukkan ke dalam antrian untuk konfirmasi oleh admin.
3. Setelah dikonfirmasi, pemesanan akan masuk ke dalam jadwal yang terurut.
4. Kode booking unik akan diberikan untuk setiap pemesanan yang berhasil.

## Contoh

Berikut adalah contoh input dan output saat menjalankan program:

**Input**:
```
Nama        : John Doe
ID (NIM/NIP): 12345678
Ruangan     : Rapat A
Tanggal     : 2025-04-20
Jam Mulai   : 09:00
Jam Selesai : 11:00
```

**Output**:
```
Reservasi berhasil disimpan.

Nama    : John Doe
ID      : 12345678
Ruangan : Rapat A
Tanggal : 2025-04-20
Jam     : 09:00 - 11:00
```

## Struktur Proyek

```
/src/
├── main.cpp                # File utama untuk alur program
├── reservasi/              # Modul untuk mengelola reservasi
│   ├── reservasi.h         # Deklarasi struktur data dan fungsi reservasi
│   └── reservasi.cpp       # Implementasi fungsi reservasi
└── jadwal/                 # Modul untuk mengelola jadwal
    ├── jadwal.h            # Deklarasi struktur data dan fungsi jadwal
    └── jadwal.cpp          # Implementasi fungsi jadwal
```

## Cara Berkontribusi

Jika kamu ingin berkontribusi pada proyek ini, ikuti langkah-langkah berikut:

1. Fork repositori ini.
2. Buat cabang baru (`git checkout -b fitur-xyz`).
3. Lakukan perubahan dan commit (`git commit -am 'Menambahkan fitur xyz'`).
4. Push ke cabang baru (`git push origin fitur-xyz`).
5. Buat pull request untuk review.

## Lisensi

Proyek ini dilisensikan di bawah **MIT License** - lihat [LICENSE](LICENSE) untuk detail lebih lanjut.
