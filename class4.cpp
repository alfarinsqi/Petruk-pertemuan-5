#include <iostream> 
using namespacestd; 

class Mahasiswa{ 
public: 
string nama,npm; 

Mahasiswa(string nama, string b){ 
this->nama = nama; 
npm = b; 
} 

}; 
 int main(){ 
 Mahasiswa Mhs("Reza", "2117"); 

cout<<"Nama: " << Mhs.nama << endl; 
cout<<"Npm: " << Mhs.npm; 
}