#include<stdio.h>

void swap (int *aptr , int *bptr, int *tong  ){
  	*tong = *aptr + *bptr;
}

int main(){
	int a = 20;
	int b = 50;
	int tong= 0;
	swap ( &a, &b,&tong );
	printf (" %d",tong);	
	return 0;
}

