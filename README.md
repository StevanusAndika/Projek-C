# Projek-C
Latihan projek dengan c++/c

C++ adalah sebuah bahasa pemrograman yang memiliki beberapa komponen penting, antara lain:

1. Identifiers: Identifiers merupakan nama yang digunakan untuk merepresentasikan variabel, fungsi, dan objek pada program. Nama tersebut harus unik dan tidak mengandung karakter khusus seperti spasi atau simbol. Contoh: `nama`, `umur`, `nilai`, dan sebagainya.

2. Variables: Variables adalah tempat penyimpanan sementara yang digunakan untuk menyimpan nilai atau data pada program. Variabel dalam C++ harus dideklarasikan terlebih dahulu dengan menentukan tipe data dan nama variabel. Contoh: `int angka = 10`, `double harga = 100.5`, dan sebagainya.

3. Operators: Operators digunakan untuk melakukan operasi matematika atau logika pada data atau variabel. Contoh: `+` untuk penjumlahan, `-` untuk pengurangan, `*` untuk perkalian, dan sebagainya.

4. Functions: Functions adalah sebuah blok kode yang dibuat untuk melakukan tugas tertentu pada program. Functions dapat menerima argumen dan mengembalikan nilai sebagai hasil dari tugas yang dilakukan. Contoh: `int jumlah(int a, int b) { return a + b; }`.

5. Control structures: Control structures digunakan untuk mengatur alur program. Ada tiga jenis control structures dalam C++, yaitu conditional statements (if-else), loops (for, while, do-while), dan switch-case statements.

6. Arrays: Arrays adalah kumpulan dari beberapa variabel dengan tipe data yang sama. Variabel pada array diakses melalui indeks atau nomor urutan. Contoh: `int nilai[5] = {1, 2, 3, 4, 5};`.

7. Pointers: Pointers adalah variabel yang menyimpan alamat memori dari variabel lain. Dengan menggunakan pointers, kita dapat mengakses nilai dari variabel yang disimpan pada alamat memori yang sama. Contoh: `int* ptr = &nilai;`.

8. Classes: Classes adalah sebuah blueprint atau cetak biru yang digunakan untuk membuat objek pada program. Classes terdiri dari atribut dan method yang dapat digunakan untuk memanipulasi data pada objek. Contoh: 

```cpp
class Mahasiswa {
   private:
      string nama;
      int umur;
   public:
      void setNama(string nama) {
         this->nama = nama;
      }
      void setUmur(int umur) {
         this->umur = umur;
      }
      string getNama() {
         return nama;
      }
      int getUmur() {
         return umur;
      }
};
``` 

9. Inheritance: Inheritance adalah sebuah konsep dalam pemrograman yang memungkinkan kita untuk membuat kelas baru yang merupakan turunan dari kelas yang sudah ada. Dengan inheritance, kita dapat menggunakan kembali kode yang sudah ada dan menambahkan fungsionalitas baru pada kelas turunan. Contoh:

```cpp
class Kendaraan {
   private:
      int kecepatan;
   public:
      void setKecepatan(int kecepatan) {
         this->kecepatan = kecepatan;
      }
      int getKecepatan() {
         return kecepatan;
      }
};

class Mobil : public Kendaraan {
   private:
      string merek;
   public:
      void setMerek(string mere
