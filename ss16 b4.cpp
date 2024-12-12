#include<stdio.h>
int main(){
	int arr[5] = {1,2,3,4,5};
	int *ha = arr;
	int length = sizeof(arr)/sizeof(*ha);
	for(int i = 0 ;i < length ;i++){
		printf("\n phan tu thu %d = %lu ",i,*ha+i);
	}
	
	
	
	
	
	return 0;
}
