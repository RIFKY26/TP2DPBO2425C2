<?php
require_once 'Elektronik.php';

class ElektronikPortable extends Elektronik {
    public $Durasi_baterai;
    public $Berat;
    public $Tipe_koneksi;

    public function __construct($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk, $Durasi_baterai, $Berat, $Tipe_koneksi) {
        parent::__construct($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk);
        $this->Durasi_baterai = $Durasi_baterai;
        $this->Berat = $Berat;
        $this->Tipe_koneksi = $Tipe_koneksi;
    }

    public function display() {
        parent::display();
        printf(" %-15s %-10.1f %-10s" . PHP_EOL, // PHP_EOL untuk newline
            $this->Durasi_baterai, 
            $this->Berat, 
            $this->Tipe_koneksi
        );
    }
}
?>