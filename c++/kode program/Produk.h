#ifndef PRODUK_H
#define PRODUK_H

#include <iostream>
#include <string>

class Produk {
protected:
    int id;
    std::string Nama_produk;
    float Harga;
    int Stok;
    std::string GambarPath;

public:
    Produk(int id, std::string Nama_produk, float Harga, int Stok, std::string GambarPath);
    virtual void display() const; // Marked as const
    int getid() const;
};

#endif // PRODUK_H
