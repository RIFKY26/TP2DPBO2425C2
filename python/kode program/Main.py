from ElektronikPortable import ElektronikPortable

# Fungsi untuk memeriksa apakah ID sudah ada
def is_id_exist(produk_list, id):
    for produk in produk_list:
        if produk.getid() == id:
            return True
    return False

def display_table():
    """Fungsi untuk menampilkan header tabel"""
    print(f"{'ID':<5} {'Nama Produk':<20} {'Harga':<10} {'Stok':<5} {'GambarPath':<15} {'Kategori Produk':<20} {'Deskripsi Produk':<50} {'Durasi Baterai':<15} {'Berat':<10} {'Tipe Koneksi':<10}")

def main():
    produk_list = []

    # Menambahkan 5 produk awal (data pre-filled)
    produk_list.append(ElektronikPortable(1, "Smartphone", 5000000, 10, "path1.jpg", "Handphone", "Smartphone dengan kamera 108MP", "24 jam", 200, "USB-C"))
    produk_list.append(ElektronikPortable(2, "Laptop", 8000000, 5, "path2.jpg", "Elektronik", "Laptop dengan prosesor Intel i7", "12 jam", 1500, "Thunderbolt"))
    produk_list.append(ElektronikPortable(3, "Speaker Bluetooth", 1500000, 20, "path3.jpg", "Audio", "Speaker portable dengan suara bass yang dalam", "10 jam", 500, "Bluetooth"))
    produk_list.append(ElektronikPortable(4, "Headphone", 1200000, 15, "path4.jpg", "Audio", "Headphone noise-cancelling", "8 jam", 300, "Wireless"))
    produk_list.append(ElektronikPortable(5, "Power Bank", 300000, 30, "path5.jpg", "Aksesoris", "Power bank kapasitas 10.000 mAh", "24 jam", 200, "USB"))

    # Menampilkan tabel produk awal dengan format yang lebih rapi
    print("\n=== DAFTAR PRODUK ELEKTRONIK PORTABLE ===")
    display_table()
    for produk in produk_list:
        produk.display()

    # Menu loop untuk menambahkan produk
    while True:
        print("\n=== MENU UTAMA ===")
        print("1. Tambah Produk Baru")
        print("2. Tampilkan Semua Produk")
        print("3. Keluar")
        pilihan = input("Pilih menu (1/2/3): ")

        if pilihan == '1':
            print("\n=== TAMBAH PRODUK BARU ===")
            # Input produk baru dari pengguna
            id = int(input("Masukkan ID: "))

            # Memeriksa apakah ID sudah ada
            if is_id_exist(produk_list, id):
                print("ID sudah ada! Gagal menambahkan produk baru.")
            else:
                Nama_produk = input("Masukkan Nama Produk: ")
                Harga = float(input("Masukkan Harga: "))
                Stok = int(input("Masukkan Stok: "))
                GambarPath = input("Masukkan Gambar Path: ")
                Kategori_produk = input("Masukkan Kategori Produk: ")
                Deskripsi_produk = input("Masukkan Deskripsi Produk: ")
                Durasi_baterai = input("Masukkan Durasi Baterai: ")
                Berat = float(input("Masukkan Berat: "))
                Tipe_koneksi = input("Masukkan Tipe Koneksi: ")

                # Menambahkan produk baru ke dalam daftar
                produk_list.append(ElektronikPortable(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Berat, Tipe_koneksi))

                print("\nProduk berhasil ditambahkan!")

        elif pilihan == '2':
            print("\n=== DAFTAR SEMUA PRODUK ===")
            display_table()
            for produk in produk_list:
                produk.display()

        elif pilihan == '3':
            print("Terima kasih! Program selesai.")
            break

        else:
            print("Pilihan tidak valid! Silakan pilih 1, 2, atau 3.")

if __name__ == "__main__":
    main()