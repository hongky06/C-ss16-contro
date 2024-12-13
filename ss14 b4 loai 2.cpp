#include<stdio.h>
#include<string.h>
int main(){
	char arr[] ="hello";
	char *ha = arr;
	int length = strlen(arr);
	for(int i = 0 ;i < length ;i++){
		printf("\n phan tu thu %d = %c ",i,*(ha+i));
	}
	
	return 0;
}
