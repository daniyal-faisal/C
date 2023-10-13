#include<stdio.h>

int factorial(int x){
	int i,sum = 1;
	for(i = 1; i < x+1 ;i++){
	
	sum = sum * i;
}
	return sum;
		
}
int combination(int n,int r){
	int a;
	a = (factorial(n))/((factorial(n-r))*factorial(r));
	return a;
}

int main()
{
	int lines;
	printf("Enter number of lines:");
	scanf("%d",&lines);
	int i,j;
	for(i = 0;i < lines+1 ; i++){
		for(j = 0; j < i; j++ ){
			int x = 0;
		x = combination(i,j);
		printf("%d ",x);
			
		}
		printf("%d",1);
		printf("\n");
	}
	
}
