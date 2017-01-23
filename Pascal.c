#include <stdio.h>

int triangle(int,int);

int main(){
	int i,a,b;
	printf("Please enter the number of rows you would like to be displayed\n");
	scanf ("%d",&i);
	printf ("[\n");
	for (a=1;a<=i;a++){
		printf("\t[");
		for (b=1;b<=a;b++){
			printf(" %d ",triangle(a,b));
		}
		printf("]\n");	
	}
	printf("]\n");
	return 0;
}

int triangle(int i,int j){
	if (j==1 || i==j){
		return 1;
	}
	else{
		return triangle(i-1,j-1)+triangle(i-1,j);
	}
}
