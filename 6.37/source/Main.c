#include <stdio.h>
#include <stdlib.h>

int recursiveMaximun(int a, int str[], int max);

int main() {
	int str[50], i = 0;
	printf("Enter number(enter double -1 to end):");
	do {
		scanf_s("%d ", &str[i]);
		i++;
	} while (str[i - 1] != -1);

	printf("Biggest number:%d\n", recursiveMaximun(i - 1, str, 0));
	system("pause");
}

int recursiveMaximun(int a, int str[], int max) {
	if (str[a] >= max)
		max = str[a];
	if (a == -1)
		return max;
	return recursiveMaximun(a - 1, str, max);
}