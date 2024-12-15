#include<stdio.h>
#include<string.h>
void daonguoc (char *in1 , char *in2 , int length){
	for( int i = 0; i < length ; i++){
*(in2 + i) = *(in1 + length - 1 - i);// phan tu dau tien cua in2 = phan tu thu 0 + chieu dai - 1(tru \0) -i(phan tu thu chieu dai bat dau tru 2)
	}
	 *(in2 + length) = '\0';  
}

int main (){
	char inputStrin[100];    // goc
	char reverseString[100]; //doi
	char *in1 = inputStrin;
	char *in2 = reverseString;
	printf("hay nhap chuoi : ");
	fgets(inputStrin,sizeof(inputStrin ), stdin);    //sizeof(inputStrin ) la 100 : bo nho cua mang 
	inputStrin[strcspn(inputStrin, "\n")] = '\0';  // loai bo ki tu \n , k co thi in sau dao se k cung dong 
	int length = strlen(inputStrin);  // strlen la tinh so luong phan tu 
	printf("truoc khi dao: %s ",in1); // co the thay bang inputStrin
	daonguoc (in1 , in2 , length);
 	printf("\nsau khi dao: %s ",reverseString); // co th thay bang in2 
return 0;
}
