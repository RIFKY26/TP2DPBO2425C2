public class ElektronikPortable extends Elektronik {
    private String Durasi_baterai;
    private float Berat;
    private String Tipe_koneksi;

    public ElektronikPortable(int id, String Nama_produk, float Harga, int Stok, String GambarPath, String Kategori_produk, String Deskripsi_produk, String Durasi_baterai, float Berat, String Tipe_koneksi) {
        super(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk);
        this.Durasi_baterai = Durasi_baterai;
        this.Berat = Berat;
        this.Tipe_koneksi = Tipe_koneksi;
    }

    @Override
    public void display() {
        super.display();
        System.out.printf(" %-15s %-10.2f %-10s%n", Durasi_baterai, Berat, Tipe_koneksi);
    }
}
