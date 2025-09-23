#ifndef ELEKTRONIK_H
#define ELEKTRONIK_H

#include "Produk.h"

class Elektronik : public Produk {
protected:
    std::string Kategori_produk;
    std::string Deskripsi_produk;

public:
    Elektronik(int id, std::string Nama_produk, float Harga, int Stok, std::string GambarPath, std::string Kategori_produk, std::string Deskripsi_produk);
    void display() const override; // Corrected override with const
};

#endif // ELEKTRONIK_H
