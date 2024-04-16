#include <stdio.h>
int main() {
	printf("Enter 16 elements\n");
	int arr[4][4];
	int sum = 0, prod = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			scanf("%d",&arr[i][j])
			sum += arr[i][j];
			prod *= arr[i][j];
		}
	}
	printf("For the given numbers, the sum is %d and the product is %d\n",sum,prod);
}
