#include<stdio.h>
void xoa(int vitri ,int *ptr, int *length){
	for(int i = vitri ;i < *length -1 ;i++){
		*(ptr + i) = *(ptr + i+1);
	}
	(*length)--;
	printf("\n sau: ");
    for (int i = 0; i < *length; i++) {
        printf("%d ", *(ptr + i));
    }
}

int main (){
	int vitri;
	int arr[] = {1,2,3,4,5};
	int length = sizeof(arr)/sizeof(int);
	int *ptr = arr;
	printf("\n truoc: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", *(arr + i));
    }
	printf("\n hay nhap vi tri can xoa: ");
	scanf("%d",&vitri);
	vitri--;
	xoa(vitri ,ptr, &length );
		
	
	
	
	
	
	
	return 0;
}
