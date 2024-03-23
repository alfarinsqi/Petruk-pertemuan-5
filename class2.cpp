#include <iostream> 
usimg namespace std; 

struct Mahasiswa{ 
public:
 string nama,npm; 
 void Perkenalan(){ 
   cout<< "Nama: " << nama << endl; 
   cout<< "Npm: " << endl;  
} 

}; 

int main(){ 
Mahasiswa Mhs; 

cin>> Mhs.nama >> Mhs.npm;  
 
Mhs.Perkenalam(); 
}