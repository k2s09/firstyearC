#include <stdio.h>
int main() {
	printf("Enter array size\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the array\n");
	int posSum = 0, negSum = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
		if(arr[i] > 0)
			posSum += arr[i];
		else
			negSum += arr[i];
	}
	int magnitude = -1 * negSum;
	int diff = 0;
	if (posSum > magnitude) {
		diff = posSum - magnitude;
		printf("The positive sum (%d) is greater.\n",posSum);
	}
	else if (magnitude > posSum) {
		printf("The negative sum (%d) is greater.\n",magnitude);
		diff = magnitude - posSum;
	}
	else {
		printf("Both the positive and negative sums are equal\n");
	}
	printf("The difference is %d\n",diff);
}
