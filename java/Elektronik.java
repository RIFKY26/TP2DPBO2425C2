// Elektronik.java
public class Elektronik extends Produk {
    String deskripsi;
    String kategori;

    // Constructor
    public Elektronik(int id, String namaProduk, String merk, float harga, int stok, String gambarPath, String deskripsi, String kategori) {
        super(id, namaProduk, merk, harga, stok, gambarPath);
        this.deskripsi = deskripsi;
        this.kategori = kategori;
    }

    // Override method display() untuk menampilkan lebih banyak informasi
    @Override
    public void display() {
        super.display(); // Menampilkan data dari Produk
        System.out.printf("Deskripsi: %-50s Kategori: %-20s\n", deskripsi, kategori);
    }
}
