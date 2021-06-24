//PRINTING THE INPUT "N"number of times
//INPUT -3
//OUTPUT- I Love VVCE I Love VVCE I Love VVCE

#include <stdio.h>
int main() {
	int i = 1, n;
	printf("Enter an integer");
	scanf("%d",&n);
	do {
		printf("I Love VVCE ");
		i++;
	} while(i<=n);
	return(0);
}
