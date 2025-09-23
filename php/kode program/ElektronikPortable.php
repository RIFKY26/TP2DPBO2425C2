<?php

require_once 'Elektronik.php';

class ElektronikPortable extends Elektronik {
    private $Durasi_baterai;
    private $Berat;
    private $Tipe_koneksi;

    public function __construct($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk, $Durasi_baterai, $Berat, $Tipe_koneksi) {
        parent::__construct($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk);
        $this->Durasi_baterai = $Durasi_baterai;
        $this->Berat = $Berat;
        $this->Tipe_koneksi = $Tipe_koneksi;
    }

    public function display() {
        parent::display();
        echo str_pad($this->Durasi_baterai, 15) . str_pad($this->Berat, 10) . str_pad($this->Tipe_koneksi, 10) . "\n";
    }
}
?>
