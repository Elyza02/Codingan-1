#include <stdio.h>

 int main() {
 	int year;
 	printf("Masukkan tahun: ");
 	scanf("%d", &year);
 	
 	if(year % 4 == 0 && (year % 100 != 0 || year % 400 ==0))
       printf("%d adalah tahun kabisat.\n", year);
    else
       printf("%d bukan tahun kabasiat.\n", year);
       
       return 0;
 }
