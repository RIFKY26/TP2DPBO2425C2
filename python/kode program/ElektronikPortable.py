from Elektronik import Elektronik

class ElektronikPortable(Elektronik):
    def __init__(self, id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Berat, Tipe_koneksi):
        super().__init__(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk)
        self.Durasi_baterai = Durasi_baterai
        self.Berat = Berat
        self.Tipe_koneksi = Tipe_koneksi

    def display(self):
        super().display()
        print(f"{self.Durasi_baterai:<15} {self.Berat:<10} {self.Tipe_koneksi:<10}")
