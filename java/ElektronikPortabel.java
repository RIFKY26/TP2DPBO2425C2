// ElektronikPortabel.java
public class ElektronikPortabel extends Elektronik {
    int durasiBaterai;
    float berat;
    String tipeKonektivitas;

    // Constructor
    public ElektronikPortabel(int id, String namaProduk, String merk, float harga, int stok, String gambarPath, String deskripsi, String kategori, int durasiBaterai, float berat, String tipeKonektivitas) {
        super(id, namaProduk, merk, harga, stok, gambarPath, deskripsi, kategori);
        this.durasiBaterai = durasiBaterai;
        this.berat = berat;
        this.tipeKonektivitas = tipeKonektivitas;
    }

    // Override method display() untuk menampilkan informasi portabel
    @Override
    public void display() {
        super.display(); // Menampilkan data dari Elektronik
        System.out.printf("Durasi Baterai: %-3d jam Berat: %-5.2f kg Konektivitas: %-10s\n", durasiBaterai, berat, tipeKonektivitas);
    }
}
