#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	float delta, x1, x2;
	scanf("%d%d%d", &a, &b, &c);
	if(a==0){
		if(b==0)
			if(c==0)
				printf("VSN");
			else
				printf("VN");
		else
			printf("%.2f", (float)-c/b);
	}
	else{
		delta = b*b - 4*a*c;
		if(delta > 0){
			x1 = (-b - sqrt(delta)) / (2*a);
			x2 = (-b + sqrt(delta)) / (2*a);
			printf("%.2f %.2f", x1, x2);
		}
		else if(delta == 0 ){
			x1 = (-b / (2.0*a));
			printf("x1 = x2 = %.2f", x1);
		}
		else
			printf("VN");
	}
	return 0;
}
