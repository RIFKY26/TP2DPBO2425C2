#include "Elektronik.h"
#include <iomanip>

Elektronik::Elektronik(int id, std::string Nama_produk, float Harga, int Stok, std::string GambarPath, std::string Kategori_produk, std::string Deskripsi_produk)
    : Produk(id, Nama_produk, Harga, Stok, GambarPath), Kategori_produk(Kategori_produk), Deskripsi_produk(Deskripsi_produk) {}

void Elektronik::display() const {
    Produk::display();
    std::cout << std::left
              << std::setw(20) << Kategori_produk
              << std::setw(50) << Deskripsi_produk;
}
