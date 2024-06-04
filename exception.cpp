#include <iostream>
#include <exception> //utk object exception yg akan digunakan
#include <array> //utk o array yg akan digunakan
using namespace std;

int main() 
{
    cout << "Awal program" <<endl; //penanda 1...
    try {
        array<int, 3> data = {3, 5, 7};
        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }

    catch (exception& e) {
        //penangkkap menggunakan object exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/

    }
    cout << "Baris Program yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}