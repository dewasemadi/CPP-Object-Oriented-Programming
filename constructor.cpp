#include <iostream>
#include <string>
using namespace std;

// class tanpa constructor
class Polos
{
public:
    string dataString;
    int dataInteger;
};

// class dengan constructor
// class mahasiswa
class Mahasiswa
{
public:
    string nama, NIM, jurusan;
    double IPK;

    // constructor dengan parameter
    // keluar pertama kali saat object dipanggil
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK)
    {
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::NIM << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::IPK << endl;
    }
};

int main(int argc, char const *argv[])
{
    // object nya data1, data2
    Mahasiswa data1 = Mahasiswa("Dewa", "G64190021", "Ilkom", 4.01);
    Mahasiswa data2 = Mahasiswa("Semadi", "G64190022", "Teknik Memasak", 4.02);
    return 0;
}
