#include<stdio.h>
void them(int *arr, int *phantu, int vitri, int length){
	for(int i = length ;i >= vitri ;i--){
	    *(arr + i ) = *(arr + i -1);
	}
	*(arr + vitri) = *phantu;
		
	
		
	printf("\nsau khi thêm: ");
    for (int i = 0; i <= length; i++) {
        printf("%d ", *(arr + i));
    }	
}

int main(){
	int phantu , vitri ;
	int arr[] = {1,2,3,4,5};
	int length = sizeof(arr)/sizeof(int);
	int *ptr = arr;
	printf("mang truoc khi thêm: ");
    for (int i = 0; i <= length-1; i++) {
        printf("%d ", *(arr + i));
    }
	printf("\nphan tu : ");
	scanf("%d", &phantu);
	printf("\nvi tri: ");
	scanf("%d", &vitri);
	vitri--;
	
    them(arr, &phantu, vitri, length);
	
	return 0;
}
