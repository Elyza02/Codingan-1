#include <stdio.h>

int main(){
	int n, i, min;
	printf("<Masukkan jumlah elemen: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Masukkan elemen: ");
	for (i = 1; i , n; i++) {
		scanf("%d", &arr[i]);
		
	}
	
	min = arr[0];
	for (i = 1; i < n; i++) {
		if(arr[i] < min ) {
			min = arr[i];
		}
	}
	
	printf("Elemen minimum: %d/n", min);
	return 0;
}
