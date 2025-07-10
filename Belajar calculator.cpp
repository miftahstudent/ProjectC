#include<iostream>
using namespace std;

int main(){
	float a, b, hasil;
	char aritmatika;
	
	
	cout<< "Masukkan Nilai Pertama :" ;
	cin>>a;
	cout<< "Masukkan +, -, /, * :" ;
	cin>>aritmatika;
	cout<< "Masukkan Nilai Kedua :" ;
	cin>>b;
	
	cout<< "\nHasil Perhitungan :  ";
	cout<< a << aritmatika << b; 
	
	if(aritmatika == '+'){
		hasil = a + b ;
	}else if (aritmatika == '-'){
		hasil = a - b ;
	}else if (aritmatika == '/'){
		hasil = a / b ;
	}else if (aritmatika == '*'){
		hasil = a * b ;
	}else{
		cout<<"hasil tidak ditemukan ";
	} 
	
	cout<<" = " << hasil << endl;
	
		return 0;
	
}
