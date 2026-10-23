#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n < 2) {
		printf("%d KHONG la so nguyen to!", n);
	}
	else {
		int count = 0;
		for(int i = 2; i*i<=n; i++) {
			if(n % i == 0) {
				count = 1;
				break;
			}	
		}
		if(count == 0) 
			printf("%d la so nguyen to!", n);
		else
			printf("%d KHONG la so nguyen to!", n);
	}	
	return 0;	
}
