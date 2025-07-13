#include<iostream>
#include<string>
using namespace std;

int main(){

int m;

cout<<" Ketikkan Angka 1 - 4 : \n";
cin>>m;

	string cars[4] = {"BMW", "Lamborghini", "Ferrari", "Ford"};
	cars[1] = "Opel";
	cout<< cars[1] ;
	
	return 0;
}
