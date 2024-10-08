#include <stdio.h>

int main(){
	int n, i;
	float num, sum = 0.0, average;
	
	printf("Masukkan jumlah bilangan: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i) {
		printf("Masukkan bilangan %d: ",  i);
		scanf("%f", &num);
		sum += num;
	}
	
	average = sum / n;
	printf("Rata-rata = %.2f\n", average);
	return 0;
}
