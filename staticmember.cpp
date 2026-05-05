#include <iostream>
using namespace std;

class Mahasiswa{//membuat class mahasiswa
   
public:
        static int nim; //deklarasi variabel static yaitu variabel nim
        //deklarasi variabel member
        int id;
        string nama;

        //deklarasi prosedur setID() dan printALLO)
        void setID();
        void printALL();

        //pembuatan constructor Mahasiswa dengan parameter pnama
        //Member initialize list
        Mahasiswa(string pnama) :nama(pnama) {
            setID();
        }
};

//memberi value ke variabel nim dari class mahasiswa
int Mahasiswa :: nim = 10;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa :: setIDC) {
    id = ++nim;
}

void Mahasiswa :: printALL() {

    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};



    
    