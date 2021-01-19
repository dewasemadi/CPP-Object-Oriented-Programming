#include <iostream>
#include <string>
using namespace std;

/*Dalam object oriented programming, 
class diibaratkan seperti loyang makanan yang dapat
menampung kue2 atau object*/
class Mahasiswa
{
    /* ada 3 tipe akses modifier
     public -> bisa diakses diluar kelas
     private -> hanya bisa diakses di dalam kelas
     protected -> bisa diakses oleh kelas yang meng inherit (pewarisan sifat)
    */
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data;
    // Object terdiri dari:
    // 1. Data -> atribut/data-member
    // 2. Function  -> method/member-function
    data.nama = "Dewa Semadi";
    data.NIM = "G64190021";
    data.jurusan = "ILKOM";
    data.IPK = 4.01;

    cout << data.nama << endl;
    cout << data.NIM << endl;
    cout << data.jurusan << endl;
    cout << data.IPK << endl;

    return 0;
}
