#include <stdio.h>

int main(){
	// membuat array
	int nilai[5] = {33, 22, 11, 44, 21};
	
	// mengambil bayaknya isi array
	int legth = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", legth);
}
