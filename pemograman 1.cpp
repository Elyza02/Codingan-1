#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
	srand(time(0));
	int number = rand () % 100 + 1;
	int guess;
	
	std::cout <<"tebak antara angka 1 dan 100: ";
	
	while(true){
		std::cin >> guess;
	    if (guess > number ){
	    	std::cout << "Terlalu rendah ! coba lagi:";
	   } else if (guess > number ){
		    std::cout << "Terlalu tinggi ! coba lagi:";
	   } else {
	   	   std::cout <<"Selamat ! anda benar." << std::endl;
	   	   break;
	   }
	}
	

}
