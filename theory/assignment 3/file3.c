#include <stdio.h>
int main() {
	char college1[100], college2[100];
	college1 = {"manipal university jaipur"};
	college2 = {"manipal university bengalore"};
	int len1 = 0, len2 = 0, c1 = 0, c2 = 0;
	for(int i = 0; i < 100; i++) {
		if(college1[i] != ' ')
			++len1;
		if(college2[i] != ' ')
			++len2;
		if(college1[i] == 'a')
			++c1;
		if(college2[i] == 'a')
			++c2;
	}
	printf("length of college1=%d\nlength of college2=%d\n",len1,len2);
	// Comparing the strings lexicographically
	int flag = 0;
	for(int i = 0; i < 100; i++) {
		// To compare the strings, find the first point of difference and print it.
		if (college1[i] != college2[i]) {
			int diff = college1[i]- college2[i];
			printf("Strings are different at index %s.\n Value of difference is %s.\n",i,diff);
		}
	}
	if (flag == 0) {
		printf("Strings are equal.\n");
	}
	printf("Count of a in college1 = %s\nCount of a in college2 = %s",c1,c2);
}
