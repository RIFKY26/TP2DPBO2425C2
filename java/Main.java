public class Main {
    public static void main(String[] args) {
        // Header tabel
        System.out.println(String.format("%-15s %-20s %-15s %-15s %-10s %-20s", 
                "ID Produk", "Nama Produk", "Merk", "Harga", "Stok", "Gambar Path"));
        System.out.println("-----------------------------------------------------------------------------------------");

        // Data produk
        System.out.println(String.format("%-15d %-20s %-15s %-15.2f %-10d %-20s", 
                1, "Smartphone A", "Samsung", 5000000.00, 10, "path/to/image1.jpg"));
        System.out.println(String.format("%-15d %-20s %-15s %-15.2f %-10d %-20s", 
                2, "Laptop B", "Lenovo", 10000000.00, 5, "path/to/image2.jpg"));
        System.out.println(String.format("%-15d %-20s %-15s %-15.2f %-10d %-20s", 
                3, "Kamera C", "Canon", 7000000.00, 15, "path/to/image3.jpg"));
        System.out.println(String.format("%-15d %-20s %-15s %-15.2f %-10d %-20s", 
                4, "Smartwatch D", "Garmin", 3500000.00, 20, "path/to/image4.jpg"));
        System.out.println(String.format("%-15d %-20s %-15s %-15.2f %-10d %-20s", 
                5, "Earphone E", "Sony", 1000000.00, 30, "path/to/image5.jpg"));

        // Menampilkan deskripsi dan kategori produk
        System.out.println("\nDeskripsi Produk:");
        System.out.println("1. Smartphone A: Smartphone dengan layar AMOLED");
        System.out.println("   Kategori: Gadget");
        System.out.println("   Durasi Baterai: 12 jam, Berat: 0,20 kg, Konektivitas: Wi-Fi, Bluetooth");

        System.out.println("2. Laptop B: Laptop dengan prosesor Intel Core i7 dan RAM 16GB");
        System.out.println("   Kategori: Komputer");
        System.out.println("   Durasi Baterai: 8 jam, Berat: 1,50 kg, Konektivitas: Wi-Fi, Bluetooth");

        System.out.println("3. Kamera C: Kamera DSLR untuk pemula dengan lensa 18-55mm");
        System.out.println("   Kategori: Gadget");
        System.out.println("   Durasi Baterai: 10 jam, Berat: 1,20 kg, Konektivitas: Wi-Fi, Bluetooth");

        System.out.println("4. Smartwatch D: Smartwatch dengan GPS dan pemantauan kesehatan");
        System.out.println("   Kategori: Gadget");
        System.out.println("   Durasi Baterai: 24 jam, Berat: 0,40 kg, Konektivitas: Bluetooth");

        System.out.println("5. Earphone E: Earphone dengan noise cancelling dan suara berkualitas tinggi");
        System.out.println("   Kategori: Audio");
        System.out.println("   Durasi Baterai: 8 jam, Berat: 0,05 kg, Konektivitas: Bluetooth");
    }
}
