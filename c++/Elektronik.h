#ifndef ELEKTRONIK_H
#define ELEKTRONIK_H

#include "Produk.h"

class Elektronik : public Produk {
protected:
    string Kategori_produk;  // Kategori produk (misalnya: handphone, laptop, dll)
    string Deskripsi_produk;  // Deskripsi singkat produk

public:
    // Konstruktor untuk menginisialisasi atribut Elektronik dan memanggil konstruktor Produk
    Elektronik(int id, string Nama_produk, double Harga, int Stok, string GambarPath,
               string Kategori_produk, string Deskripsi_produk)
        : Produk(id, Nama_produk, Harga, Stok, GambarPath),
          Kategori_produk(Kategori_produk), Deskripsi_produk(Deskripsi_produk) {}

    // Override fungsi display() untuk menambahkan informasi kategori dan deskripsi
    void display() const override {
        Produk::display();  // Memanggil display() dari kelas Produk
        cout << "\t" << Kategori_produk << "\t" << Deskripsi_produk << endl;
    }

    virtual ~Elektronik() {}  // Destructor virtual untuk kelas turunan
};

#endif
