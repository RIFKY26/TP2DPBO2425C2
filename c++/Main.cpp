#include <iostream>
#include <vector>
#include <string>
#include "ElektronikPortable.h"
using namespace std;

// Fungsi untuk memeriksa apakah ID sudah ada
bool isIdExist(const vector<Produk*>& produkList, int id) {
    for (const auto& produk : produkList) {
        if (produk->getid() == id) {
            return true;  // ID sudah ada
        }
    }
    return false;  // ID belum ada
}

int main() {
    vector<Produk*> produkList;

    // Menambahkan 5 produk awal (data pre-filled)
    produkList.push_back(new ElektronikPortable(1, "Smartphone", 5000000, 10, "path1.jpg", "Handphone", "Smartphone dengan kamera 108MP", "24 jam", 200, "USB-C"));
    produkList.push_back(new ElektronikPortable(2, "Laptop", 8000000, 5, "path2.jpg", "Elektronik", "Laptop dengan prosesor Intel i7", "12 jam", 1500, "Thunderbolt"));
    produkList.push_back(new ElektronikPortable(3, "Speaker Bluetooth", 1500000, 20, "path3.jpg", "Audio", "Speaker portable dengan suara bass yang dalam", "10 jam", 500, "Bluetooth"));
    produkList.push_back(new ElektronikPortable(4, "Headphone", 1200000, 15, "path4.jpg", "Audio", "Headphone noise-cancelling", "8 jam", 300, "Wireless"));
    produkList.push_back(new ElektronikPortable(5, "Power Bank", 300000, 30, "path5.jpg", "Aksesoris", "Power bank kapasitas 10.000 mAh", "24 jam", 200, "USB"));

    // Menampilkan tabel produk awal
    cout << "ID\tNama Produk\tHarga\tStok\tGambarPath\tKategori Produk\tDeskripsi Produk\tDurasi Baterai\tBerat\tTipe Koneksi" << endl;
    for (const auto& produk : produkList) {
        produk->display();
    }

    // Input produk baru dari pengguna
    int id;
    string Nama_produk, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Tipe_koneksi;
    double Harga, Berat;
    int Stok;

    cout << "\nTambah Produk Baru:\n";
    cout << "Masukkan ID: ";
    cin >> id;

    // Memeriksa apakah ID sudah ada
    if (isIdExist(produkList, id)) {
        cout << "ID sudah ada! Gagal menambahkan produk baru." << endl;
    } else {
        cout << "Masukkan Nama Produk: ";
        cin.ignore();
        getline(cin, Nama_produk);
        cout << "Masukkan Harga: ";
        cin >> Harga;
        cout << "Masukkan Stok: ";
        cin >> Stok;
        cout << "Masukkan Gambar Path: ";
        cin.ignore();
        getline(cin, GambarPath);
        cout << "Masukkan Kategori Produk: ";
        getline(cin, Kategori_produk);
        cout << "Masukkan Deskripsi Produk: ";
        getline(cin, Deskripsi_produk);
        cout << "Masukkan Durasi Baterai: ";
        getline(cin, Durasi_baterai);
        cout << "Masukkan Berat: ";
        cin >> Berat;
        cout << "Masukkan Tipe Koneksi: ";
        cin.ignore();
        getline(cin, Tipe_koneksi);

        // Menambahkan produk baru ke dalam daftar
        produkList.push_back(new ElektronikPortable(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Berat, Tipe_koneksi));

        // Menampilkan tabel produk setelah ditambah
        cout << "\nDaftar Produk Terbaru:\n";
        cout << "ID\tNama Produk\tHarga\tStok\tGambarPath\tKategori Produk\tDeskripsi Produk\tDurasi Baterai\tBerat\tTipe Koneksi" << endl;
        for (const auto& produk : produkList) {
            produk->display();
        }
    }

    // Menghapus produk dari memori
    for (auto& produk : produkList) {
        delete produk;
    }

    return 0;
}
