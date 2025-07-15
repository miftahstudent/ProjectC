#include<iostream>
using namespace std;

int main(){
	
int c;

cout<<" ketik apa saja : \n";
cin>>c;
	
	for (int i = 0 ; i < 100 ; i++){
		if (i == 50){
	continue;
	}
	cout<< i << "\n";
}
	return 0;
}
