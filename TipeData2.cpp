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