#ifndef PRODUK_H
#define PRODUK_H

#include <iostream>  // Tambahkan pustaka iostream untuk menggunakan cout dan endl
#include <string>
using namespace std;

class Produk {
protected:
    int id;  // ID produk
    string Nama_produk;  // Nama produk
    double Harga;  // Harga produk
    int Stok;  // Jumlah stok produk
    string GambarPath;  // Lokasi gambar produk

public:
    // Konstruktor untuk menginisialisasi atribut-atribut produk
    Produk(int id, string Nama_produk, double Harga, int Stok, string GambarPath)
        : id(id), Nama_produk(Nama_produk), Harga(Harga), Stok(Stok), GambarPath(GambarPath) {}

    // Fungsi untuk menampilkan informasi produk
    virtual void display() const {
        cout << id << "\t" << Nama_produk << "\t" << Harga << "\t" << Stok << "\t" << GambarPath << endl;
    }

    // Getter untuk mengambil nilai id
    int getid() const { return id; }

    virtual ~Produk() {}  // Destructor virtual untuk kelas dasar
};

#endif
