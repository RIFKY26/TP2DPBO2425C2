public class Produk {
    protected int id;
    protected String Nama_produk;
    protected float Harga;
    protected int Stok;
    protected String GambarPath;

    public Produk(int id, String Nama_produk, float Harga, int Stok, String GambarPath) {
        this.id = id;
        this.Nama_produk = Nama_produk;
        this.Harga = Harga;
        this.Stok = Stok;
        this.GambarPath = GambarPath;
    }

    public void display() {
        System.out.printf("%-5d %-20s %-10.2f %-5d %-15s", id, Nama_produk, Harga, Stok, GambarPath);
    }

    public int getid() {
        return id;
    }
}
