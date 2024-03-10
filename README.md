# <h1 align="center">Laporan Praktikum Algoritma & Struktur Data</h1>
# <h1 align="center">Modul 1 : Tipe Data</h1>
<p align="center">Joel Fransiskus Parulian Sitorus</p>
<p align="center">2311110011</p>
<p align="center">S1SD-04-A</p>

## I. Dasar Teori

<p align="justify">Tipe data adalah suatu keyboard yang secara otomatis datang dari bahasa pemrograman. Dimana tipe data biasanya digunakan ketika kita menentukan suatu jenis nilai yang dapat ditampung oleh suatu variabel. Tipe data memiliki beberapa kegunaan dalam jenis nilainya sesuai apa nama tipe data tersebut.[1]</p> 

<p align="justify">Tipe data mengelompokkan nilai variabel untuk mengenali data tanpa error. Ini memudahkan program dalam mendeteksi informasi dan mengurangi kesalahan. Komputer hanya memahami 1 dan 0, sehingga tipe data diperlukan untuk operasi kompleks. Pemrograman mengklasifikasikan data agar bisa digunakan dalam software. Berikut penjelasan tentang 3 jenis tipe data: primitif, abstrak, dan kolektif.</p> 

### A. Tipe Data Primitif 
<p align="justify">Tipe data primitif adalah tipe data dasar yang tidak dapat dipecah menjadi bagian yang lebih kecil. Contoh tipe data primitif termasuk bilangan bulat, bilangan desimal, karakter, dan boolean.</p>

### B. Tipe Data Abstrak
<p align="justify">Tipe data abstrak diciptakan oleh programmer dan tidak disediakan langsung oleh bahasa pemrograman, dapat dibagi menjadi bagian yang lebih kecil. Contoh tipe data abstrak termasuk Struktur, Union, dan Enum.</p>

### C. Tipe Data Kolektif
<p align="justify">Tipe data kolektif adalah tipe data yang digunakan untuk menyimpan data dengan jenis yang sama, seperti array, list, set, dan dictionary. Misalnya, array dalam C++, list dalam Python.</p>

## II. Laporan Praktikum 

### 1. Tipe Data Primitif

#### Kode Program :

```C++
// Tipe Data Primitif
#include <iostream>
using namespace std;

// Main Program
int main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    // It allow user to enter the operands
    cin >> num1 >> num2;
    // Switch statement begins
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! operator is not correct";
    }
    return 0;
}
```

#### Output :
![Screenshot 2024-03-10 142907](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/9ba54710-6b4d-4dae-b8b3-e49911ccbf3f)

<p align="justify">Program ini menulis dalam bahasa C++ dan berfungsi sebagai kalkulator sederhana. Berisi #include untuk library input/output standar, menggunakan variabel op untuk menyimpan operator, dan variabel num1 dan num2 tipe float untuk angka decimal. User diminta input operator dan dua angka, kemudian switch digunakan untuk menjalankan operasi sesuai operator. Jika operator tidak sesuai, program akan menampilkan pesan error. Output program akan menunjukkan 0 untuk menandakan berjalan dengan sukses.</p>

### 2. Tipe Data Abstrak

#### Kode Program :

```C++
// Tipe Data Abstrak 
#include <stdio.h>
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // Mendeklarasikan Struct
    Mahasiswa mhs1, mhs2;

    // Mengisi Nilai Struct
    mhs1.name = "Samuel";
    mhs1.address = "Bandung";
    mhs1.age = 21;

    mhs2.name = "Joshua";
    mhs2.address = "Samarinda";
    mhs2.age = 19;

    // Mencetak Isi Struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama   : %s\n", mhs1.name);
    printf("Alamat : %s\n", mhs1.address);
    printf("Umur   : %d\n", mhs1.age);

    printf("## Mahasiswa 2 ##\n");
    printf("Nama   : %s\n", mhs2.name);
    printf("Alamat : %s\n", mhs2.address);
    printf("Umur   : %d\n", mhs2.age);
    return 0;
}
```

#### Output :
![Screenshot 2024-03-10 143422](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/17a3af94-1f6d-41f7-8d14-7ac290772cc3)

<p align="justify">Kode ini menunjukkan bagaimana penggunaan "Struct" untuk menciptakan tipe data abstrak yang menyimpan data terkait (nama, alamat, dan usia) dalam satu kelompok. Contoh ini memperlihatkan langkah-langkah mendeklarasikan, menginisialisasi, dan mengakses nilai anggota "Struct" dalam program.</p>

### 3. Tipe Data Kolektif

#### Kode Program :

```C++
// Tipe Data Kolektif
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi Dan Inisialisasi Array
    int nilai[5];
    nilai[0] = 65;
    nilai[1] = 54;
    nilai[2] = 72;
    nilai[3] = 93;
    nilai[4] = 87;

    // Mencetak Array
    cout << "Isi array pertama : " << nilai[0] << endl;
    cout << "Isi array kedua   : " << nilai[1] << endl;
    cout << "Isi array ketiga  : " << nilai[2] << endl;
    cout << "Isi array keempat : " << nilai[3] << endl;
    cout << "Isi array kelima  : " << nilai[4] << endl;
    return 0;
}
```

#### Output :
![Screenshot 2024-03-10 143624](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/41ef2126-5c92-4e66-bf33-2ba4b10eea07)

<p align="justify">Kode ini menunjukkan langkah-langkah dalam mendeklarasikan, menginisialisasi, dan mengakses elemen array dalam bahasa pemrograman C++. Meskipun contoh ini sederhana dengan hanya menampilkan nilai individual, array tersebut dapat dimanfaatkan untuk operasi lebih lanjut seperti penjumlahan, pencarian, dan pengurutan data.</p>

## III. Tugas Praktikum

### <p align="justify">1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!</p>

#### Kode Program :

```C++
#include <iostream>
#include <cmath>

using namespace std;

// Fungsi Untuk Menghitung Keliling Persegi Panjang
int hitungKelilingPersegiPanjang(int panjang, int lebar)
{
  return 2 * (panjang + lebar);
}

// Fungsi Untuk Menghitung Luas Lingkaran
float hitungLuasLingkaran(float jarijari)
{
  return M_PI * pow(jarijari, 2);
}

int main()
{
  // Mendeklarasikan Variabel Yang Ada 
  int panjangPersegiPanjang, lebarPersegiPanjang;
  float jarijariLingkaran;

  // Input Nilai/Data Dari Bangun Datar  
  cout << "===Persegi Panjang===" << endl;
  cout << "Masukkan Panjang   : ";
  cin >> panjangPersegiPanjang;
  cout << "Masukkan Lebar     : ";
  cin >> lebarPersegiPanjang;

  cout << endl << "===Lingkaran===" << endl;
  cout << "Masukkan Jari-Jari : ";
  cin >> jarijariLingkaran;

  // Menghitung Luas Dan Keliling 
  int kelilingPersegiPanjang = hitungKelilingPersegiPanjang(panjangPersegiPanjang, lebarPersegiPanjang);
  float luasLingkaran = hitungLuasLingkaran(jarijariLingkaran);

  // Menampilkan Hasil Perhitungan 
  cout << endl << "===Hasil Perhitungan===" << endl;

  cout << "===Persegi Panjang===" << endl;
  cout << "Keliling : " << kelilingPersegiPanjang << " cm" << endl;

  cout << endl << "===Lingkaran===" << endl;
  cout << "Luas     : " << luasLingkaran << " cm^2" << endl;
  
  return 0;
}
```

#### Output :

![Screenshot 2024-03-10 170800](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/f61d64d2-1dd4-4615-9453-6d735697a296)

#### Full Code Screenshot :

![Screenshot 2024-03-10 171004](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/10fd001b-7beb-4807-b733-7b8f1e881acb)

<p align="justify">Program ini menghitung keliling persegi panjang dan luas lingkaran. Bagian kode termasuk : Penggunaan #include dan #include untuk operasi input/output dan matematika seperti pow. Namespace std digunakan untuk memudahkan penggunaan fungsi standar C++. Deklarasi fungsi mencakup hitungKelilingPersegiPanjang(int panjang, int lebar) dan hitungLuasLingkaran(float jarijari). Fungsi main() untuk mendeklarasikan variabel dan meminta input pengguna. Hasil perhitungan ditampilkan.</p>

<p align="justify">Kesimpulannya, memahami tipe data primitif merupakan dasar dari pemrograman C++. Mengetahui jenis, sifat, dan penggunaannya merupakan hal yang penting dalam menulis program yang tepat dan efisien.</p>

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!

#### Fungsi Class :

1.Mengelola struktur data : class memuat data (atribut) beserta operasi (metode) yang terkait.
2.Abstraksi : Kelas menyembunyikan detail implementasi data dan hanya mengungkapkan antarmuka publik.
3.Pewarisan : Kelas bisa mewarisi sifat dan operasi dari kelas lain (kelas induk).
4.Polimorfisme : Kelas dapat mendefinisikan fungsi dengan nama yang sama tapi perilaku yang berbeda.

#### Fungsi Struct :

1.Mengatur struktur data : Struct serupa dengan class, namun dengan beberapa perbedaan.
2.Modifikasi akses default : Struct memiliki modifikasi akses publik, sementara class memiliki privasi.
3.Warisan : Struct tidak mendukung warisan.

#### Kode Program :

```C++
#include <iostream>
using namespace std;

// Struct
struct PersonStruct
{
    string name;
    string gender;
    int age;
};

// Class
class PersonClass
{
public:
    string name;
    string gender;
    int age;

    void display()
    {
        cout << " Name   : " << name << endl;
        cout << " Gender : " << gender << endl;
        cout << " Age    : " << age << endl;
    }
};

int main()
{
    // Struct
    PersonStruct personStruct;
    personStruct.name = "Jennifer";
    personStruct.gender = "Female";
    personStruct.age = 27;
    cout << " Struct - Name   : " << personStruct.name << endl;
    cout << " Struct - Gender : " << personStruct.gender << endl;
    cout << " Struct - Age    : " << personStruct.age << endl;

    // Class
    PersonClass personClass;
    personClass.name = "George";
    personClass.gender = "Male";
    personClass.age = 29;
    personClass.display();

    return 0;
}
```

#### Output : 

![Screenshot 2024-03-10 171123](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/7e4bf05f-1e69-4c3e-af0d-941a799e3faf)

#### Full Code Screenshot :

![Screenshot 2024-03-10 171207](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/ec925ee3-e80b-4df6-a45b-c06f90091ef9)

<p align="justify">Kode program ini menunjukkan penggunaan Class dan Struct dalam menyimpan data orang. Struct memiliki anggota untuk menyimpan data tanpa method, sementara Class memiliki method display() untuk menampilkan informasi. Main function membuat dan mencetak informasi dari personStruct dan personClass. Perbedaan utama antara Struct dan Class adalah keberadaan method dan kemampuan enkapsulasi pada Class. Kesimpulannya, Class memberikan fleksibilitas lebih besar dengan method dan pengaturan akses data.</p>

### <p align="justify">3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.</p>

#### Kode Program :

```C++
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  string str;
  cout << " Masukkan String : ";
  cin >> str;

  map<char, char> hurufKapital;
  for (char c = 'A'; c <= 'Z'; c++)
  {
    hurufKapital[c] = c + 32;
  }

  for (int i = 0; i < str.length(); i++)
  {
    str[i] = hurufKapital[str[i]];
  }

  cout << "Notasi String Setelah Diperbaharui : " << str << endl;

  return 0;
}
```

#### Output : 

![Screenshot 2024-03-10 171354](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/857f1300-b7ff-464c-bb87-492ed02cebeb)

#### Full Code Screenshot :

![Screenshot 2024-03-10 171414](https://github.com/FransiskusJoel1729/Praktikum-Struktur-Data-Assignment/assets/161488500/be9d0123-67b5-4953-98f5-05c23911fc46)

<p align="justify">Program kode ini berfungsi untuk mengubah semua huruf besar menjadi huruf kecil dalam string dengan menggunakan pustaka input/output, map, dan string. Namespace mempermudah penggunaan fungsi pustaka standar C++ tanpa std::, sedangkan fungsi main() membaca input, membuat map untuk konversi huruf, dan menampilkan hasilnya kepada pengguna setelah modifikasi.</p>

<p align="justify">Dalam bidang pemrograman, array dan map digunakan untuk menyimpan koleksi elemen dengan perbedaan dalam pengorganisasian dan akses data. Array urut dengan indeks numerik, sementara map menggunakan pasangan key-value. Array tidak butuhkan elemen unik, sementara map memerlukan key yang unik. Array untuk operasi berurutan, map untuk pencarian berdasarkan key.</p>

## IV. Kesimpulan

<p align="justify">Pentingnya memahami jenis-jenis tipe data seperti primitif, abstrak, dan kolektif dalam pemrograman untuk memilih tipe data yang sesuai dengan kebutuhan program. Tipe data yang tepat akan membantu dalam efisiensi penyimpanan data, manajemen data, dan keterbacaan kode program.</p>

## V. Referensi
[1] Cormen, Thomas H., Charles E. Leiserson, Ronald L. Rivest, dan Clifford Stein. Introduction to Algorithms. MIT Press, 2009.
