<?php
require_once 'ElektronikPortable.php';

// Fungsi untuk memeriksa apakah ID sudah ada
function is_id_exist($produk_list, $id) {
    foreach ($produk_list as $produk) {
        if ($produk->getId() == $id) {
            return true;
        }
    }
    return false;
}

// Fungsi untuk menampilkan header tabel
function display_table() {
    printf("%-5s %-20s %-10s %-5s %-15s %-20s %-50s %-15s %-10s %-10s" . PHP_EOL, 
        'ID', 'Nama Produk', 'Harga', 'Stok', 'GambarPath', 'Kategori Produk', 'Deskripsi Produk', 'Durasi Baterai', 'Berat', 'Tipe Koneksi'
    );
}

// === LOGIKA UTAMA ===

$produk_list = [];

// Menambahkan 5 produk awal (data pre-filled)
$produk_list[] = new ElektronikPortable(1, "Smartphone", 5000000, 10, "path1.jpg", "Handphone", "Smartphone dengan kamera 108MP", "24 jam", 200, "USB-C");
$produk_list[] = new ElektronikPortable(2, "Laptop", 8000000, 5, "path2.jpg", "Elektronik", "Laptop dengan prosesor Intel i7", "12 jam", 1500, "Thunderbolt");
$produk_list[] = new ElektronikPortable(3, "Speaker Bluetooth", 1500000, 20, "path3.jpg", "Audio", "Speaker portable dengan suara bass yang dalam", "10 jam", 500, "Bluetooth");
$produk_list[] = new ElektronikPortable(4, "Headphone", 1200000, 15, "path4.jpg", "Audio", "Headphone noise-cancelling", "8 jam", 300, "Wireless");
$produk_list[] = new ElektronikPortable(5, "Power Bank", 300000, 30, "path5.jpg", "Aksesoris", "Power bank kapasitas 10.000 mAh", "24 jam", 200, "USB");

// Menampilkan tabel produk awal
echo "\n=== DAFTAR PRODUK ELEKTRONIK PORTABLE ===" . PHP_EOL;
display_table();
foreach ($produk_list as $produk) {
    $produk->display();
}

// Menu loop untuk menambahkan produk
while (true) {
    echo "\n=== MENU UTAMA ===" . PHP_EOL;
    echo "1. Tambah Produk Baru" . PHP_EOL;
    echo "2. Tampilkan Semua Produk" . PHP_EOL;
    echo "3. Keluar" . PHP_EOL;
    $pilihan = trim(readline("Pilih menu (1/2/3): "));

    switch ($pilihan) {
        case '1':
            echo "\n=== TAMBAH PRODUK BARU ===" . PHP_EOL;
            $id = (int)readline("Masukkan ID: ");

            if (is_id_exist($produk_list, $id)) {
                echo "ID sudah ada! Gagal menambahkan produk baru." . PHP_EOL;
            } else {
                $Nama_produk = readline("Masukkan Nama Produk: ");
                $Harga = (float)readline("Masukkan Harga: ");
                $Stok = (int)readline("Masukkan Stok: ");
                $GambarPath = readline("Masukkan Gambar Path: ");
                $Kategori_produk = readline("Masukkan Kategori Produk: ");
                $Deskripsi_produk = readline("Masukkan Deskripsi Produk: ");
                $Durasi_baterai = readline("Masukkan Durasi Baterai: ");
                $Berat = (float)readline("Masukkan Berat: ");
                $Tipe_koneksi = readline("Masukkan Tipe Koneksi: ");

                $produk_list[] = new ElektronikPortable($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk, $Durasi_baterai, $Berat, $Tipe_koneksi);
                
                echo "\nProduk berhasil ditambahkan!" . PHP_EOL;
            }
            break;

        case '2':
            echo "\n=== DAFTAR SEMUA PRODUK ===" . PHP_EOL;
            display_table();
            foreach ($produk_list as $produk) {
                $produk->display();
            }
            break;

        case '3':
            echo "Terima kasih! Program selesai." . PHP_EOL;
            break 2; // Keluar dari switch dan while loop

        default:
            echo "Pilihan tidak valid! Silakan pilih 1, 2, atau 3." . PHP_EOL;
            break;
    }
}
?>
