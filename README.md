# Toko Elektronik - Program OOP Multilevel Inheritance

## Janji
Saya nama Rifky Fadhillah Akbar dengan Nim 2401248 mengerjakan tugas praktikum 2
dalam mata kuliah DPBO untuk keberkahan-Nya maka saya
tidak akan melakukan kecurangan seperti yang telah di spesifikasikan Aamiin.

## Diagram
<img width="198" height="527" alt="Screenshot 2025-09-23 231904" src="https://github.com/user-attachments/assets/bc1ae055-a6b8-47ce-9c8a-9748a80d90c9" />

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
- **harga**: Harga produk dalam satuan mata uang.
- **stok**: Jumlah stok produk yang tersedia di toko.
- **gambarPath**: Path atau lokasi gambar produk.

#### Methods:
- **Prosedur Tampilan Data**: prosedur yang bertanggung jawab untuk menampilkan atribut-atribut dasar yang dimiliki kelas Produk, yaitu id, namaProduk, harga, stok, dan gambarPath. Prosedur ini dirancang untuk dipanggil oleh kelas turunannya.

### Kelas **Elektronik**
Kelas **Elektronik** mewarisi atribut dari **Produk** dan menambahkan atribut umum yang lebih spesifik untuk kategori produk elektronik secara umum.

#### Atribut yang diwarisi:
- **id** (int)
- **namaProduk** (string)
- **harga** (float)
- **stok** (int)
- **gambarPath** (string)

#### Atribut tambahan:
- **deskripsi**: Deskripsi singkat tentang produk elektronik (misalnya, "Smartphone canggih dengan layar OLED dan kamera 108 MP").
- **kategori**: Kategori produk (misalnya, "Gadget", "Peralatan Rumah Tangga", dll.).

#### Methods:
- **Prosedur Tampilan Data**: Melakukan penimpaan terhadap prosedur milik kelas Produk. Prosedur ini pertama-tama menjalankan prosedur tampilan data dari kelas Produk untuk menampilkan informasi dasar, kemudian melanjutkannya dengan menampilkan atribut spesifik miliknya sendiri, yaitu deskripsi dan kategori.
  
### Kelas **ElektronikPortabel**
Kelas **ElektronikPortabel** adalah kelas turunan dari **Elektronik** dan menambahkan atribut khusus untuk produk yang bersifat **portabel** seperti ponsel, laptop, dan kamera.

#### Atribut yang diwarisi:
- **id**, **namaProduk**, **harga**, **stok**, **gambarPath**, **deskripsi**, **kategori**

#### Atribut tambahan:
- **durasiBaterai**: Durasi penggunaan baterai perangkat dalam satuan jam.
- **berat**: Berat perangkat dalam kilogram.
- **tipeKonektivitas**: Jenis konektivitas yang didukung perangkat (misalnya **Wi-Fi**, **Bluetooth**, **NFC**).

#### Methods:
- **Prosedur Tampilan Data**: Merupakan prosedur akhir dalam rantai pewarisan yang juga melakukan penimpaan. Prosedur ini memanggil prosedur dari kelas Elektronik untuk menampilkan seluruh datanya, lalu menyempurnakannya dengan menampilkan atribut-atribut khusus kelas ElektronikPortabel: durasiBaterai, berat, dan tipeKonektivitas.

## Penjelasan Alur Program
1. **Input Data**: Program dimulai dengan menyimpan **5 objek awal** produk secara **hardcoded** dalam sistem. Kemudian, pengguna dapat menambahkan data produk lain menggunakan input yang diterima dari pengguna.
2. **Penyimpanan Data**: Data produk yang dimasukkan akan disimpan dalam objek sesuai kelasnya (misalnya objek produk portabel disimpan dalam objek **ElektronikPortabel**).
3. **Output Data**: Semua data produk, baik yang dimasukkan melalui input maupun yang sudah ada di awal, akan ditampilkan dalam **tabel dinamis** yang mencakup seluruh atribut dari setiap kelas.

## Dokumentasi
### Python
<img width="1570" height="670" alt="image" src="https://github.com/user-attachments/assets/0e5645a8-cb75-4d35-ab91-d92439395943" />

### Java
<img width="1836" height="839" alt="image" src="https://github.com/user-attachments/assets/c25e7d35-7cd9-4474-97fc-a773c93b47cc" />

### C++
<img width="1515" height="909" alt="image" src="https://github.com/user-attachments/assets/612d651f-bfec-4bb7-86f0-0225c9d33b66" />

### PHP
<img width="1901" height="928" alt="image" src="https://github.com/user-attachments/assets/e4286ce1-07b4-4cee-9483-d1acd2073607" />





