#include <iostream> 
 	//definisi library yg digunakan(preprocessor directive.)


using namespace std;
/*memberi tahu bahwa kita akan menggunakan fungsi fungsi/class/file yg ada di iostream*/
int main() {
	//badan program
	 int A[3][3]; 
	 //matrik A untuk data matriks 1
	 int B[3][3]; 
	 //matriks B untuk data matriks 2
	 int C[3][3];
	 //matriks C untuk hasil
 
	 int a,b;
	 //deklarasi variabel untuk looping
	
	 
 cout <<"======Program jumlah matriks======" <<endl;
//tampilkan output
cout<<"Nama:Stevanus" <<endl;
cout<<"Kelas:X-MM4" <<endl;
cout<<"========================="<<endl;

cout<<"Masukkan data matriks ke-1:"<<endl;
cout<<"Data matriks :[5 33 -5 6 4 7 41 71 15]"<<endl;

for(a=0; a<3; a++){
	//buat perulangan dgn looping dgn var a dsn b

 for(b=0; b<3; b++){

 cout <<"Indeks ke ["<<a<<"]["<<b<<"] : ";

 cin>>A[a][b];

 }

 }

cout <<endl;
cout<<"Masukkan data matriks 2:" <<endl;
cout<<"Data matriks:[7 33 12 5 4 5 14 28 18]"<<endl;

 for(a=0; a<3; a++){

 for(b=0; b<3; b++){

 cout <<"Indeks ke ["<<a<<"]["<<b<<"] : ";

 cin>>B[a][b];

 }

 }

 cout <<endl;
//Jumlahkan matriks
cout<<" Jumlahkan kedua data matriks:" <<endl;
cout<<"please wait....." <<endl;
for(a=0; a<3; a++){

 for(b=0; b<3; b++){

 C[a][b] = A[a][b] + B[a][b];

 }

 }

 //tampil hasil penjumlahan Matriks A dengan Matriks B

cout<<"Tampilkan hasil penjumlahan;"<<endl;
 for(a=0; a<3; a++){

 for(b=0; b<3; b++){

 cout <<"C ["<<a<<"]["<<b<<"] : " <<C[a][b]<<endl;

 }

 }

 cout <<endl;

 cout<<"pause......." <<endl;

cout<<"======Program selesai======"<<endl;

cout<<"Terimakasih...."<< endl;
cout<<"========================="<<endl;

 return 0;
//return 0 artinya program berjalan  dan berakhir dgn normal
 




 }