#include<stdio.h>

void swap (int *x , int *y ){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int a = 20;
	int b = 50;
	swap (&a ,&b );
	printf (" %d %d ",a ,b);	
	return 0;
}
