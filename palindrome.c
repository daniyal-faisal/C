#include<stdio.h>
#include<ctype.h>
int main() {
	int x = 0,a = 0,ary[100],nary[100];
	char cary[100];
	
	printf("Enter a string: ");
	scanf("%s",cary);
	
	for(int i = 0; cary[i] != '\0'; i++) {
        cary[i] = tolower(cary[i]);}	
		
	while(cary[x] != '\0'){
	ary[x] = (int)cary[x];	
	x++;}
	
	for(int j = 0; j < x; j++){
		nary[j] = ary[x - j - 1];}
		
	while(cary[a] != '\0'){
		if(ary[a] != nary[a]){
		break;
	}
		else{
			a++;
		}
		}
	
	if(a == x){
		printf("Its a palindrome");}
		
	else{
		printf("Its not a palindrome");}
	
	return 0;
}
