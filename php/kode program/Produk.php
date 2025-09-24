<?php

class Produk {
    public $id;
    public $Nama_produk;
    public $Harga;
    public $Stok;
    public $GambarPath;

    public function __construct($id, $Nama_produk, $Harga, $Stok, $GambarPath) {
        $this->id = $id;
        $this->Nama_produk = $Nama_produk;
        $this->Harga = $Harga;
        $this->Stok = $Stok;
        $this->GambarPath = $GambarPath;
    }

    public function display() {
        printf("%-5s %-20s %-10.2f %-5d %-15s", 
            $this->id, 
            $this->Nama_produk, 
            $this->Harga, 
            $this->Stok, 
            $this->GambarPath
        );
    }

    public function getId() {
        return $this->id;
    }
}
?>