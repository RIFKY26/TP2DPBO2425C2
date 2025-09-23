import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<ElektronikPortable> produkList = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        // Menambahkan 5 produk awal (data pre-filled)
        produkList.add(new ElektronikPortable(1, "Smartphone", 5000000, 10, "path1.jpg", "Handphone", "Smartphone dengan kamera 108MP", "24 jam", 200, "USB-C"));
        produkList.add(new ElektronikPortable(2, "Laptop", 8000000, 5, "path2.jpg", "Elektronik", "Laptop dengan prosesor Intel i7", "12 jam", 1500, "Thunderbolt"));
        produkList.add(new ElektronikPortable(3, "Speaker Bluetooth", 1500000, 20, "path3.jpg", "Audio", "Speaker portable dengan suara bass yang dalam", "10 jam", 500, "Bluetooth"));
        produkList.add(new ElektronikPortable(4, "Headphone", 1200000, 15, "path4.jpg", "Audio", "Headphone noise-cancelling", "8 jam", 300, "Wireless"));
        produkList.add(new ElektronikPortable(5, "Power Bank", 300000, 30, "path5.jpg", "Aksesoris", "Power bank kapasitas 10.000 mAh", "24 jam", 200, "USB"));

        // Menampilkan daftar produk awal
        displayTable();
        for (ElektronikPortable produk : produkList) {
            produk.display();
        }

        // Menu untuk menambahkan produk
        while (true) {
            System.out.println("\n=== MENU UTAMA ===");
            System.out.println("1. Tambah Produk Baru");
            System.out.println("2. Tampilkan Semua Produk");
            System.out.println("3. Keluar");
            System.out.print("Pilih menu (1/2/3): ");
            String pilihan = scanner.nextLine();

            if (pilihan.equals("1")) {
                // Menambah produk baru
                System.out.println("\n=== TAMBAH PRODUK BARU ===");
                System.out.print("Masukkan ID: ");
                int id = Integer.parseInt(scanner.nextLine());

                // Memeriksa apakah ID sudah ada
                if (isIdExist(produkList, id)) {
                    System.out.println("ID sudah ada! Gagal menambahkan produk baru.");
                } else {
                    System.out.print("Masukkan Nama Produk: ");
                    String Nama_produk = scanner.nextLine();
                    System.out.print("Masukkan Harga: ");
                    float Harga = Float.parseFloat(scanner.nextLine());
                    System.out.print("Masukkan Stok: ");
                    int Stok = Integer.parseInt(scanner.nextLine());
                    System.out.print("Masukkan Gambar Path: ");
                    String GambarPath = scanner.nextLine();
                    System.out.print("Masukkan Kategori Produk: ");
                    String Kategori_produk = scanner.nextLine();
                    System.out.print("Masukkan Deskripsi Produk: ");
                    String Deskripsi_produk = scanner.nextLine();
                    System.out.print("Masukkan Durasi Baterai: ");
                    String Durasi_baterai = scanner.nextLine();
                    System.out.print("Masukkan Berat: ");
                    float Berat = Float.parseFloat(scanner.nextLine());
                    System.out.print("Masukkan Tipe Koneksi: ");
                    String Tipe_koneksi = scanner.nextLine();

                    // Menambahkan produk baru ke dalam daftar
                    produkList.add(new ElektronikPortable(id, Nama_produk, Harga, Stok, GambarPath, Kategori_produk, Deskripsi_produk, Durasi_baterai, Berat, Tipe_koneksi));
                    System.out.println("\nProduk berhasil ditambahkan!");
                }

            } else if (pilihan.equals("2")) {
                // Menampilkan semua produk
                System.out.println("\n=== DAFTAR SEMUA PRODUK ===");
                displayTable();
                for (ElektronikPortable produk : produkList) {
                    produk.display();
                }

            } else if (pilihan.equals("3")) {
                System.out.println("Terima kasih! Program selesai.");
                break;
            } else {
                System.out.println("Pilihan tidak valid! Silakan pilih 1, 2, atau 3.");
            }
        }

        scanner.close();
    }

    // Fungsi untuk menampilkan header tabel
    private static void displayTable() {
        System.out.printf("%-5s %-20s %-10s %-5s %-15s %-20s %-50s %-15s %-10s %-15s%n",
                          "ID", "Nama Produk", "Harga", "Stok", "GambarPath", "Kategori Produk", "Deskripsi Produk", "Durasi Baterai", "Berat", "Tipe Koneksi");
    }

    // Fungsi untuk memeriksa apakah ID sudah ada
    private static boolean isIdExist(ArrayList<ElektronikPortable> produkList, int id) {
        for (ElektronikPortable produk : produkList) {
            if (produk.getid() == id) {
                return true;
            }
        }
        return false;
    }
}
