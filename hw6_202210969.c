#include <stdio.h>

int main(void) {
	int arr[5];
	printf("Please input five integers: ");
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}

	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}

	return 0;
}
