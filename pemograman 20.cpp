#include <stdio.h>

int main() {
	float celcius, fahrenheit;
	printf("Masukkan suhu dalam celcius: ");
	scanf("%f",  &celcius);
	
	fahrenheit = (celcius * 9 / 5) + 32;
	printf("suhu dala,, fahrenheit: %.2f\n", fahrenheit);
	return 0;
}
