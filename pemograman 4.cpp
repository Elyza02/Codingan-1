#include<iostream>
using namespace std;

 int faktorial(int n){
 	if (n < 0)return -1; // Tidak ada fatorial untuk angka negatif
 	return (n == 0) ? 1 : n* faktorial(n - 1);
 	
 }
 int main(){
 	 int num;
 	 cout<<"masukan angka:";
 	 cin>> num;
 	 int fact = faktorial(num);
 	 if (fact == -1)
 	     cout<<"tidak ada faktorial untuk angka negati.";
 	else
 	   cout << "faktorial dari" << num << "adalah" << fact;
 	   return 0;
 }
