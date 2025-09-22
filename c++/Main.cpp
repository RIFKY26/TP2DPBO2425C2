#include <iostream>
#include <vector>
#include <iomanip>  // Untuk setw, left, right, dan setprecision
#include <limits>
#include "ElektronikPortable.h"

// Fungsi untuk menampilkan header tabel
void displayTable() {
    std::cout << std::left
              << std::setw(5)  << "ID"
              << std::setw(20) << "Nama Produk"
              << std::setw(10) << "Harga"
              << std::setw(5)  << "Stok"
              << std::setw(15) << "GambarPath"
              << std::setw(20) << "Kategori Produk"
              << std::setw(50) << "Deskripsi Produk"
              << std::setw(15) << "Durasi Baterai"
              << std::setw(10) << "Berat"
              << std::setw(10) << "Tipe Koneksi"
              << std::endl;
}

// Fungsi untuk memeriksa apakah ID sudah ada
bool is_id_exist(const std::vector<ElektronikPortable>& produk_list, int id) {
    for (const auto& produk : produk_list) {
        if (produk.getid() == id) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<ElektronikPortable> produk_list;

    // Menambahkan 5 produk awal (data pre-filled)
    produk_list.push_back(ElektronikPortable(1, "Smartphone", 5000000, 10, "path1.jpg", "Handphone", "Smartphone dengan kamera 108MP", "24 jam", 200, "USB-C"));
    produk_list.push_back(ElektronikPortable(2, "Laptop", 8000000, 5, "path2.jpg", "Elektronik", "Laptop dengan prosesor Intel i7", "12 jam", 1500, "Thunderbolt"));
    produk_list.push_back(ElektronikPortable(3, "Speaker Bluetooth", 1500000, 20, "path3.jpg", "Audio", "Speaker portable dengan suara bass yang dalam", "10 jam", 500, "Bluetooth"));
    produk_list.push_back(ElektronikPortable(4, "Headphone", 1200000, 15, "path4.jpg", "Audio", "Headphone noise-cancelling", "8 jam", 300, "Wireless"));
    produk_list.push_back(ElektronikPortable(5, "Power Bank", 300000, 30, "path5.jpg", "Aksesoris", "Power bank kapasitas 10.000 mAh", "24 jam", 200, "USB"));

    // Menampilkan tabel produk awal dengan format yang lebih rapi
    std::cout << "\n=== DAFTAR PRODUK ELEKTRONIK PORTABLE ===" << std::endl;
    displayTable();  // Memanggil displayTable untuk menampilkan header
    for (const auto& produk : produk_list) {
        produk.display();
    }

    // Menu loop untuk menambahkan produk
    char pilihan;
    do {
        std::cout << "\n=== MENU UTAMA ===" << std::endl;
        std::cout << "1. Tambah Produk Baru" << std::endl;
        std::cout << "2. Tampilkan Semua Produk" << std::endl;
        std::cout << "3. Keluar" << std::endl;
        std::cout << "Pilih menu (1/2/3): ";
        std::cin >> pilihan;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch(pilihan) {
            case '1': {
                // Input produk baru dari pengguna
                int id;
                std::cout << "\n=== TAMBAH PRODUK BARU ===" << std::endl;
                std::cout << "Masukkan ID: ";
                std::cin >> id;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                // Memeriksa apakah ID sudah ada
                if (is_id_exist(produk_list, id)) {
                    std::cout << "ID sudah ada! Gagal menambahkan produk baru." << std::endl;
                } else {
                    std::string Nama_produk, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Tipe_koneksi;
                    float Harga, Berat;
                    int Stok;

                    std::cout << "Masukkan Nama Produk: ";
                    std::getline(std::cin, Nama_produk);

                    std::cout << "Masukkan Harga: ";
                    std::cin >> Harga;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << "Masukkan Stok: ";
                    std::cin >> Stok;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << "Masukkan Gambar Path: ";
                    std::getline(std::cin, GambarPath);

                    std::cout << "Masukkan Kategori Produk: ";
                    std::getline(std::cin, Kategori_produk);

                    std::cout << "Masukkan Deskripsi Produk: ";
                    std::getline(std::cin, Deskripsi_produk);

                    std::cout << "Masukkan Durasi Baterai: ";
                    std::getline(std::cin, Durasi_baterai);

                    std::cout << "Masukkan Berat: ";
                    std::cin >> Berat;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << "Masukkan Tipe Koneksi: ";
                    std::getline(std::cin, Tipe_koneksi);

                    // Menambahkan produk baru ke dalam daftar
                    produk_list.push_back(ElektronikPortable(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Berat, Tipe_koneksi));

                    std::cout << "\nProduk berhasil ditambahkan!" << std::endl;
                }
                break;
            }
            case '2': {
                std::cout << "\n=== DAFTAR SEMUA PRODUK ===" << std::endl;
                displayTable();
                for (const auto& produk : produk_list) {
                    produk.display();
                }
                break;
            }
            case '3': {
                std::cout << "Terima kasih! Program selesai." << std::endl;
                break;
            }
            default: {
                std::cout << "Pilihan tidak valid! Silakan pilih 1, 2, atau 3." << std::endl;
                break;
            }
        }
    } while (pilihan != '3');

    return 0;
}
