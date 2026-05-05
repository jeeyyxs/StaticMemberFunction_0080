#include <iostream>
#include <string> //menhyertakan library string
using namespace std;

class Mahasiswa {

private:
    static int nim;
public:
    int id;
    string nama;

    void setIDC();
    void printALL();

    //pembuatan static function
    static void setNim(int pnim) {
        nim = pnim;
    };

    static int getNimC(){
        return nim;
    }

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    };
};
            