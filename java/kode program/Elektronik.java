public class Elektronik extends Produk {
    protected String Kategori_produk;
    protected String Deskripsi_produk;

    public Elektronik(int id, String Nama_produk, float Harga, int Stok, String GambarPath, String Kategori_produk, String Deskripsi_produk) {
        super(id, Nama_produk, Harga, Stok, GambarPath);
        this.Kategori_produk = Kategori_produk;
        this.Deskripsi_produk = Deskripsi_produk;
    }

    @Override
    public void display() {
        super.display();
        System.out.printf(" %-20s %-50s", Kategori_produk, Deskripsi_produk);
    }
}
