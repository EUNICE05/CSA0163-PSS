#include <stdio.h>
int main() {
	int n, sum =0, remainder;
	printf("enter an integer:");
	scanf("%d, &n");
	while (n!=0) {
remainder = n%10;
sum =sum + remainder;
n/=10;
}
printf("sum =%d", sum);
return 0;
}