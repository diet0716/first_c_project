#include <stdio.h>

int main()
{
	int a, b, op;

	scanf("%d %d %d", &a, &b, &op);

	if(op==1){
		printf("%d\n", a+b);
	}

	else if(op==2){
		printf("%d\n", a-b);
	}

	else if(op==3){
		printf("%d\n", a*b);
	}

	else if(op==4){
		printf("%f\n",(float)a/b);
	}

	else if(op<=0 || 5<=op){
		printf("Wrong\n");
	}

return 0;
}
