#include <stdio.h>
#define PI 3.14159

int main() {
	float radius, area;
	printf("Masukkan jari-jari lingkaran: ");
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("Luas lingkaran: %.2f\n", area);
	return 0;
}
