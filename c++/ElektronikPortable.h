#ifndef ELEKTRONIKPORTABLE_H
#define ELEKTRONIKPORTABLE_H

#include "Elektronik.h"

class ElektronikPortable : public Elektronik {
private:
    std::string Durasi_baterai;
    float Berat;
    std::string Tipe_koneksi;

public:
    ElektronikPortable(int id, std::string Nama_produk, float Harga, int Stok, std::string GambarPath, std::string Kategori_produk, std::string Deskripsi_produk, std::string Durasi_baterai, float Berat, std::string Tipe_koneksi);
    void display() const override; // Corrected override with const
};

#endif // ELEKTRONIKPORTABLE_H
