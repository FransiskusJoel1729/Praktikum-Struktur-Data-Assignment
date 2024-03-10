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