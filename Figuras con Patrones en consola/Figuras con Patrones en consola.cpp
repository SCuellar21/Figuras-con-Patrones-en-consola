// http://www.techcrashcourse.com/2016/02/c-program-to-print-triangle-pyramid-star-pattern.html

#include<stdio.h> 
#include<math.h>
#include<Windows.h>

int main() {
	int size_h;
	/*
	Aumento exponencial
	*/
	printf("Escribe el tamaño en filas:  ");
	scanf_s("%d", &size_h);
	for (int i = 0; i < size_h; i++) {
		for (int j = 0; j < pow(2, i); j++)
			printf("*");
		printf("\n");
	}

	/*
	Corazón      hay que ajustarlo un poco(en tamaño y en forma)
	*/
	printf("Escribe el tamaño en filas:  ");
	scanf_s("%d", &size_h);
	/* printing top semi circular shapes of heart */
	for (int i = size_h / 2; i <= size_h; i += 2) {
		/* Printing Spaces */
		for (int j = 1; j < size_h - i; j += 2)
			printf(" ");
		/* printing stars for left semi circle */
		for (int j = 1; j <= i; j++)
			printf("*");
		/* Printing Spaces */
		for (int j = 1; j <= size_h - i; j++)
			printf(" ");
		/* printing stars for right semi circle */
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	/* printing inverted start pyramid */
	for (int i = size_h; i >= 1; i--) {
		for (int j = i; j < size_h; j++)
			printf(" ");
		for (int j = 1; j <= (i * 2) - 1; j++)
			printf("*");
		printf("\n");
	}

	/*
	Casa
	*/
	printf("Escribe el tamaño en filas:  ");
	scanf_s("%d", &size_h);
	for (int i = 0; i <= size_h / 2; i++) {
		for (int x = 0; x < size_h / 2 - i; x++)
			printf(" ");
		for (int x = 0; x < 2 * i + 1; x++)
			printf("*");
		printf("\n");
	}
	for (int i = size_h / 2 + 1; i < size_h; i++) {
		for (int j = 0; j <= size_h; j++) {
			if (size_h / 3 < j && j <= 2 * size_h / 3)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}

	/*
	Piramide
	*/
	printf("Escribe el tamaño en filas:  ");
	scanf_s("%d", &size_h);
	for (int i = 0; i < size_h; i++) {
		for (int x = 0; x < size_h - 1 - i; x++)
			printf(" ");
		for (int x = 0; x < 2 * i + 1; x++)
			printf("*");
		printf("\n");
	}

	Sleep(5000);
	return 0;
}
