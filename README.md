# Toko Elektronik - Program OOP Multilevel Inheritance

## janji
Saya nama Rifky Fadhillah Akbar dengan Nim 2401248 mengerjakan tugas praktikum 1
dalam mata kuliah DPBO untuk keberkahan-Nya maka saya
tidak akan melakukan kecurangan seperti yang telah di spesifikasikan Aamiin.


Program ini menggunakan **3 kelas utama**:
- **Produk** sebagai kelas dasar (base class)
- **Elektronik** sebagai kelas perantara (intermediate class)
- **ElektronikPortabel** sebagai kelas turunan (derived class)

## Penjelasan Atribut dan Methods

### Kelas **Produk**
Kelas **Produk** menyimpan atribut umum yang dimiliki oleh semua produk elektronik yang ada di toko. Atribut-atribut ini diwariskan ke kelas-kelas turunan seperti **Elektronik** dan **ElektronikPortabel**.

#### Atribut:
- **id**: ID unik untuk setiap produk.
- **namaProduk**: Nama produk elektronik.
- **merk**: Merek atau brand dari produk.
- **harga**: Harga produk dalam satuan mata uang.
- **stok**: Jumlah stok produk yang tersedia di toko.
- **gambarPath**: Path atau lokasi gambar produk.

#### Methods:
- **display()**: Menampilkan informasi lengkap produk, termasuk id, nama, merk, harga, stok, dan gambarPath.

### Kelas **Elektronik**
Kelas **Elektronik** mewarisi atribut dari **Produk** dan menambahkan atribut umum yang lebih spesifik untuk kategori produk elektronik secara umum.

#### Atribut yang diwarisi:
- **id** (int)
- **namaProduk** (string)
- **merk** (string)
- **harga** (float)
- **stok** (int)
- **gambarPath** (string)

#### Atribut tambahan:
- **deskripsi**: Deskripsi singkat tentang produk elektronik (misalnya, "Smartphone canggih dengan layar OLED dan kamera 108 MP").
- **kategori**: Kategori produk (misalnya, "Gadget", "Peralatan Rumah Tangga", dll.).

#### Methods:
- **display()**: Menampilkan informasi produk elektronik secara umum.

### Kelas **ElektronikPortabel**
Kelas **ElektronikPortabel** adalah kelas turunan dari **Elektronik** dan menambahkan atribut khusus untuk produk yang bersifat **portabel** seperti ponsel, laptop, dan kamera.

#### Atribut yang diwarisi:
- **id**, **namaProduk**, **merk**, **harga**, **stok**, **gambarPath**, **deskripsi**, **kategori**

#### Atribut tambahan:
- **durasiBaterai**: Durasi penggunaan baterai perangkat dalam satuan jam.
- **berat**: Berat perangkat dalam kilogram.
- **tipeKonektivitas**: Jenis konektivitas yang didukung perangkat (misalnya **Wi-Fi**, **Bluetooth**, **NFC**).

#### Methods:
- **display()**: Menampilkan informasi lengkap produk portabel, termasuk durasi baterai, berat, dan tipe konektivitas.

## Penjelasan Alur Program
1. **Input Data**: Program dimulai dengan menyimpan **5 objek awal** produk secara **hardcoded** dalam sistem. Kemudian, pengguna dapat menambahkan data produk lain menggunakan input yang diterima dari pengguna.
2. **Penyimpanan Data**: Data produk yang dimasukkan akan disimpan dalam objek sesuai kelasnya (misalnya objek produk portabel disimpan dalam objek **ElektronikPortabel**).
3. **Output Data**: Semua data produk, baik yang dimasukkan melalui input maupun yang sudah ada di awal, akan ditampilkan dalam **tabel dinamis** yang mencakup seluruh atribut dari setiap kelas.
