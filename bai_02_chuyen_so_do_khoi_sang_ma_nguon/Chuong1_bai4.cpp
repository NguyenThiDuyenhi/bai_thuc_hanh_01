#include<stdio.h>
#include<string.h>

int main () {
	int a, b, x, y;
	scanf("%d%d", &a, &b)                                                          ;
	x = a;
	y = b;
	int gcd, lcm;
	while(y!=0){
		int r = x % y;
		x = y;
		y = r;
	}
	lcm = (a*b)/x;
	printf("%d", lcm);
	return 0;
}
