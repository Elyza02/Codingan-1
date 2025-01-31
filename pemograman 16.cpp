#include <stdio.h>

int main(){
	int a, b, temp;
	printf("Masukkan dua angka: ");
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("Setelah ditukar: a = %d, b = %d\n", a, b);
	return 0;
}
