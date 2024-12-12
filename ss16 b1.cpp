#include<stdio.h>
int main(){
	int a=2006;
		int *ptr = &a;
	printf("cach 1 : truy cap qua gian tiep");	
	printf("\ndia chi cua bien: %lu",&ptr);
	printf("\ngia tri cua bien: %d",*ptr);
	
	printf("\ncach 1 : truy cap qua truc tiep");	
	printf("\ndia chi cua bien: %lu",&a);
	printf("\ngia tri cua bien: %d",a);
 return 0;
}
