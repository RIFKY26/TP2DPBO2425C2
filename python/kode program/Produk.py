class Produk:
    def __init__(self, id, Nama_produk, Harga, Stok, GambarPath):
        self.id = id
        self.Nama_produk = Nama_produk
        self.Harga = Harga
        self.Stok = Stok
        self.GambarPath = GambarPath

    def display(self):
        print(f"{self.id:<5} {self.Nama_produk:<20} {self.Harga:<10} {self.Stok:<5} {self.GambarPath:<15}", end=" ")

    def getid(self):
        return self.id
