// luas-keliling-persegi // implementasi pointer array dan fungsi

#include <iostream>
using namespace std;

int luas_persegi(int sisi){
 	int luas; 
	luas = 0; 
	luas = sisi * sisi; 
	return luas; }

int keliling_persegi(int sisi){ 
	int keliling ; 
	keliling = 0; 
	keliling = sisi * 4; 
	return keliling; }

void cetak_luas(int s){
  cout<<"Luas persegi adalah : "<<luas_persegi(s);
 	}

void cetak_keliling(int s){
  cout<<"Keliling persegi adalah : "<<keliling_persegi(s)<<endl;
	}

int main(){ int sisi[2]; 
	int *ss,n; 
	ss=sisi;
	
	cout<<"Masukkan Jumlah Persegi : ";cin>>n;

	for(int i=1 ; i<=n; i++){
		*(ss)=0;
		
		
  		cout<<"\nmasukkan sisi persegi ke "<<i<<" : ";
  		cin>>*(ss);
  	   	
  cout<<endl;
  
  
  for(int i=1 ; i<=1 ; i++){
  		cetak_luas(*(ss));
  		}
  		cout<<endl;
  
  for (int i=1 ; i<=1 ; i++){
		cetak_keliling(*(ss));
		}
	}
return 0;
}
