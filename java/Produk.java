// Produk.java
public class Produk {
    int id;
    String namaProduk;
    String merk;
    float harga;
    int stok;
    String gambarPath;

    // Constructor
    public Produk(int id, String namaProduk, String merk, float harga, int stok, String gambarPath) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.merk = merk;
        this.harga = harga;
        this.stok = stok;
        this.gambarPath = gambarPath;
    }

    // Method untuk menampilkan data produk (hanya data dasar)
    public void display() {
        System.out.printf("%-10d %-20s %-15s Rp. %-10.2f %-5d %-20s\n", id, namaProduk, merk, harga, stok, gambarPath);
    }
}
