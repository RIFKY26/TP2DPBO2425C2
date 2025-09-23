<?php

require_once 'ElektronikPortable.php';

// Fungsi untuk menampilkan header tabel
function displayTable() {
    echo str_pad("ID", 5) . str_pad("Nama Produk", 20) . str_pad("Harga", 10) . str_pad("Stok", 5) .
         str_pad("GambarPath", 15) . str_pad("Kategori Produk", 20) . str_pad("Deskripsi Produk", 50) .
         str_pad("Durasi Baterai", 15) . str_pad("Berat", 10) . str_pad("Tipe Koneksi", 10) . "\n";
}

// Fungsi untuk memeriksa apakah ID sudah ada
function isIdExist($produkList, $id) {
    foreach ($produkList as $produk) {
        if ($produk->getId() == $id) {
            return true;
        }
    }
    return false;
}

$produkList = [];

// Menambahkan produk awal (data pre-filled)
$produkList[] = new ElektronikPortable(1, "Smartphone", 5000000, 10, "path1.jpg", "Handphone", "Smartphone dengan kamera 108MP", "24 jam", 200, "USB-C");
$produkList[] = new ElektronikPortable(2, "Laptop", 8000000, 5, "path2.jpg", "Elektronik", "Laptop dengan prosesor Intel i7", "12 jam", 1500, "Thunderbolt");
$produkList[] = new ElektronikPortable(3, "Speaker Bluetooth", 1500000, 20, "path3.jpg", "Audio", "Speaker portable dengan suara bass yang dalam", "10 jam", 500, "Bluetooth");
$produkList[] = new ElektronikPortable(4, "Headphone", 1200000, 15, "path4.jpg", "Audio", "Headphone noise-cancelling", "8 jam", 300, "Wireless");
$produkList[] = new ElektronikPortable(5, "Power Bank", 300000, 30, "path5.jpg", "Aksesoris", "Power bank kapasitas 10.000 mAh", "24 jam", 200, "USB");

echo "\n=== DAFTAR PRODUK ELEKTRONIK PORTABLE ===\n";
displayTable();
foreach ($produkList as $produk) {
    $produk->display();
}

// Menu loop untuk menambahkan produk
while (true) {
    echo "\n=== MENU UTAMA ===\n";
    echo "1. Tambah Produk Baru\n";
    echo "2. Tampilkan Semua Produk\n";
    echo "3. Keluar\n";
    $pilihan = trim(fgets(STDIN));

    if ($pilihan == '1') {
        echo "\n=== TAMBAH PRODUK BARU ===\n";
        echo "Masukkan ID: ";
        $id = trim(fgets(STDIN));

        // Memeriksa apakah ID sudah ada
        if (isIdExist($produkList, $id)) {
            echo "ID sudah ada! Gagal menambahkan produk baru.\n";
        } else {
            echo "Masukkan Nama Produk: ";
            $Nama_produk = trim(fgets(STDIN));
            echo "Masukkan Harga: ";
            $Harga = trim(fgets(STDIN));
            echo "Masukkan Stok: ";
            $Stok = trim(fgets(STDIN));
            echo "Masukkan Gambar Path: ";
            $GambarPath = trim(fgets(STDIN));
            echo "Masukkan Kategori Produk: ";
            $Kategori_produk = trim(fgets(STDIN));
            echo "Masukkan Deskripsi Produk: ";
            $Deskripsi_produk = trim(fgets(STDIN));
            echo "Masukkan Durasi Baterai: ";
            $Durasi_baterai = trim(fgets(STDIN));
            echo "Masukkan Berat: ";
            $Berat = trim(fgets(STDIN));
            echo "Masukkan Tipe Koneksi: ";
            $Tipe_koneksi = trim(fgets(STDIN));

            // Menambahkan produk baru ke dalam daftar
            $produkList[] = new ElektronikPortable($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk, $Durasi_baterai, $Berat, $Tipe_koneksi);
            echo "\nProduk berhasil ditambahkan!\n";
        }

    } else if ($pilihan == '2') {
        echo "\n=== DAFTAR SEMUA PRODUK ===\n";
        displayTable();
        foreach ($produkList as $produk) {
            $produk->display();
        }

    } else if ($pilihan == '3') {
        echo "Terima kasih! Program selesai.\n";
        break;

    } else {
        echo "Pilihan tidak valid! Silakan pilih 1, 2, atau 3.\n";
    }
}
?>
