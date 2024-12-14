#include<stdio.h>
void sapxep (int length , int  *arr ){
	for(int i = 0 ;i < length ;i++){
	     for ( int j = i+1; j < length ; j++){
	     	if(*(arr+i) > *(arr+j)){
	     		int temp = *(arr+i);
	     		*(arr+i) = *(arr+j);
	     		*(arr+j) = temp;
			 }
		 }	
	}
	printf("\n da sap : ");
	for(int i = 0;i < length;i++){
			printf("%d",*(arr +i));
		}
	 
}

int main(){
	int arr[]= {1,3,2,4,6,5,7,9,8};
	int length = sizeof(arr)/sizeof(int);
		printf(" \n chua sap : ");
		for(int i = 0;i < length;i++){
			printf("%d",*(arr +i));
		}
	    sapxep (length ,arr );
	 	return 0;
}
