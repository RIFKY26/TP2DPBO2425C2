from Produk import Produk

class Elektronik(Produk):
    def __init__(self, id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk):
        super().__init__(id, Nama_produk, Harga, Stok, GambarPath)
        self.Kategori_produk = Kategori_produk
        self.Deskripsi_produk = Deskripsi_produk

    def display(self):
        super().display()
        print(f"{self.Kategori_produk:<20} {self.Deskripsi_produk:<50}", end=" ")
