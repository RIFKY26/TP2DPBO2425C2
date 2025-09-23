<?php

class Produk {
    protected $id;
    protected $Nama_produk;
    protected $Harga;
    protected $Stok;
    protected $GambarPath;

    public function __construct($id, $Nama_produk, $Harga, $Stok, $GambarPath) {
        $this->id = $id;
        $this->Nama_produk = $Nama_produk;
        $this->Harga = $Harga;
        $this->Stok = $Stok;
        $this->GambarPath = $GambarPath;
    }

    public function display() {
        echo str_pad($this->id, 5) . str_pad($this->Nama_produk, 20) . str_pad($this->Harga, 10) .
            str_pad($this->Stok, 5) . str_pad($this->GambarPath, 15);
    }

    public function getId() {
        return $this->id;
    }
}
?>
