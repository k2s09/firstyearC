#include <stdio.h>
int main() {
    int oddCount = 1; int evenCount = 2;
    for (int i = 1; i <=5 ; i++) {
    	for (int j = 1; j <= i; j++) {
    		if (i % 2 == 0) {
    			printf("%d\t",evenCount);
    			evenCount+=2;
    		} else {
    			printf("%d\t",oddCount);
    			oddCount+=2;
    		}
    	}
    	printf("\n");
    }
}