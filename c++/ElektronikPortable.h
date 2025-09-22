#ifndef ELEKTRONIKPORTABLE_H
#define ELEKTRONIKPORTABLE_H

#include "Elektronik.h"

class ElektronikPortable : public Elektronik {
private:
    string Durasi_baterai;  // Durasi baterai produk elektronik portable
    double Berat;  // Berat produk
    string Tipe_koneksi;  // Tipe koneksi produk (misalnya: USB-C, Bluetooth, dll)

public:
    // Konstruktor untuk menginisialisasi atribut ElektronikPortable dan memanggil konstruktor Elektronik
    ElektronikPortable(int id, string Nama_produk, double Harga, int Stok, string GambarPath,
                       string Kategori_produk, string Deskripsi_produk,
                       string Durasi_baterai, double Berat, string Tipe_koneksi)
        : Elektronik(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk),
          Durasi_baterai(Durasi_baterai), Berat(Berat), Tipe_koneksi(Tipe_koneksi) {}

    // Override fungsi display() untuk menambahkan informasi durasi baterai, berat, dan tipe koneksi
    void display() const override {
        Elektronik::display();  // Memanggil display() dari kelas Elektronik
        cout << "\t" << Durasi_baterai << "\t" << Berat << "\t" << Tipe_koneksi << endl;
    }

    virtual ~ElektronikPortable() {}  // Destructor virtual untuk kelas turunan
};

#endif
