<?php

require_once 'Produk.php';

class Elektronik extends Produk {
    protected $Kategori_produk;
    protected $Deskripsi_produk;

    public function __construct($id, $Nama_produk, $Harga, $Stok, $GambarPath, $Kategori_produk, $Deskripsi_produk) {
        parent::__construct($id, $Nama_produk, $Harga, $Stok, $GambarPath);
        $this->Kategori_produk = $Kategori_produk;
        $this->Deskripsi_produk = $Deskripsi_produk;
    }

    public function display() {
        parent::display();
        echo str_pad($this->Kategori_produk, 20) . str_pad($this->Deskripsi_produk, 50);
    }
}
?>
