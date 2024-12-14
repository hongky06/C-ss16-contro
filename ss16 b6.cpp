#include<stdio.h>
void timkiem (int *ptr , int so ,int length){
		for(int i = 0 ;i < length;i++){
			if(*(ptr+i) == so ){
				printf(" vi tri : %d",i);
				break;
			}
		}	
}

int main(){
   int a; 
   int arr[] = {1,2,4,5,6,7};
   int length = sizeof(arr)/sizeof(int);
   int *ptr = arr;
	printf("hay nhap so : ");
	scanf("%d",&a);
 timkiem (arr , a ,length);
	return 0;
}
