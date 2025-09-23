#include "Produk.h"
#include <iomanip>

Produk::Produk(int id, std::string Nama_produk, float Harga, int Stok, std::string GambarPath)
    : id(id), Nama_produk(Nama_produk), Harga(Harga), Stok(Stok), GambarPath(GambarPath) {}

void Produk::display() const {
    std::cout << std::left
              << std::setw(5) << id
              << std::setw(20) << Nama_produk
              << std::setw(10) << static_cast<int>(Harga)
              << std::setw(5) << Stok
              << std::setw(15) << GambarPath;
}

int Produk::getid() const {
    return id;
}
