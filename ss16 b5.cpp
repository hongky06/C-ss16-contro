#include<stdio.h>
void suaham(int *arr, int x, int y, int length ){
	for(int i = 0 ;i < length ;i++){
		if(arr[i]== arr[y]){
			arr[i] = x;
			break;	
		}
	}
}

int main(){
int a,b;	
	int arr[]= {1,2,3,4,5};
	int length = sizeof(arr)/sizeof(int);
	int *ptr = arr;
	printf("so can sua: ");
	scanf("%d",&a);
	printf("vi tri can sua: ");
	scanf("%d",&b);
	printf("\n truoc khi sua: ");
		for (int i = 0 ;i < length ;i++){
			printf("%d",arr[i]);
		} 
	 suaham(arr , a ,b , length );
	
	printf("\n sau khi sua: ");
		for (int i = 0 ;i < length ;i++){
			printf("%d",arr[i]);
		} 
	return 0; 
} 
