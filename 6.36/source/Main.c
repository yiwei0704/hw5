#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

void stringReverse(int a, char str[]);

int main() {
	char str[50];
	printf("Enter a string:");
	scanf("%s", str);
	stringReverse(strlen(str), str);
	printf("\n");
	system("pause");
}

void stringReverse(int a, char str[]) {
	if (0 <= a) {
		printf("%c", str[a]);
		stringReverse(a - 1, str);
	}
}