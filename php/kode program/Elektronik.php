<?php
require_once 'Produk.php';

class Elektronik extends Produk {
    public $Kategori_produk;
    public $Deskripsi_produk;

    public function __construct($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk) {
        parent::__construct($id, $Nama_produk, $Harga, $Stok, $GambarPath);
        $this->Kategori_produk = $Kategori_produk;
        $this->Deskripsi_produk = $Deskripsi_produk;
    }

    public function display() {
        parent::display();
        printf(" %-20s %-50s", 
            $this->Kategori_produk, 
            $this->Deskripsi_produk
        );
    }
}
?>