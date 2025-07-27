#include<iostream>
#include<iomanip>
using namespace std;

int main (){
	//deklarasi kalimat
	
	char kalimat[]="PSG kota Metropolitan XZY";
	char *p,kar;
	p=kalimat;
	cout<<"kalimat : "<<kalimat<<endl;
	kar=*p;
	if(kar>='a'&&kar<='z'){
		kar+=3;
		if(kar>'z')
		kar=kar-'z'+'a'-1;
	}
		if(kar>='A'&&kar<='Z'){
		kar+=3;
		if(kar>'Z')
		kar=kar-'Z'+'A'-1;
	}
	*p++=kar;
	cout<<"Enkripsi: "<<kalimat<<endl;
	} 
