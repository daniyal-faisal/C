#include<stdio.h>
#include<math.h>

int main(){
	int x = 0, ary[100],y = 0;
	while(1){
		
		printf("Enter the values of series: ");
		scanf("%d",&ary[x]);
		if(ary[x] == -9999){
			break;
		}
		x++;
	}
	if(ary[y+1] - ary[y] == ary[y+2] - ary[y+1] && ary[y+2] - ary[y+1] == ary[y+3] - ary[y+2]){
		printf("The series is arithmetic.");
	}
	else if(ary[y+1] / ary[y] == ary[y+2] / ary[y+1] && ary[y+2] / ary[y+1] == ary[y+3] / ary[y+2]){
		printf("The series is geometric.");
	}
	else if(ary[y+1] + ary[y] == ary[y+2] && ary[y+2] + ary[y+1] == ary[y+3]){
		printf("The series is Fibonacci.");
		}
	else{
		printf("This not a series.");
	}
		
	
	return 0;
}
