#include "ElektronikPortable.h"
#include <iomanip>

ElektronikPortable::ElektronikPortable(int id, std::string Nama_produk, float Harga, int Stok, std::string GambarPath, std::string Kategori_produk, std::string Deskripsi_produk, std::string Durasi_baterai, float Berat, std::string Tipe_koneksi)
    : Elektronik(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk), Durasi_baterai(Durasi_baterai), Berat(Berat), Tipe_koneksi(Tipe_koneksi) {}

void ElektronikPortable::display() const {
    Elektronik::display();
    std::cout << std::left
              << std::setw(15) << Durasi_baterai
              << std::setw(10) << Berat
              << std::setw(10) << Tipe_koneksi
              << std::endl;
}
