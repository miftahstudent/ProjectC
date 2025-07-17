#include<iostream>
#include<conio.h>
using namespace std;
int main(){

	int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
	int i, jumlah = 0;
	float Rata_Rata;
	
	//menghitung jumlah
	for (int i = 0; i < 10; i++)
	jumlah += Nilai[i];
Rata_Rata = (float)jumlah/10;

//mencetak Elemen array 
cout<<"\n\nDeretan Bilangan  =";
for (i = 0; i < 10; i++)
cout << Nilai[i] << " ";

//mencetak harga jumlah 

cout << "\nJumlah bilangan = "<<jumlah;
cout<< "\nRata-Rata Bilangan   = "<<Rata_Rata;
getch();
}
