#include <stdio.h>

//search number 1-9 from 2 digit number
int main(){
	int number[5],i,a,b,c;
	
	printf("Enter your number: ");
	for(i=0;i<5;i++){
		scanf("%d",&number[i]);	
	}
	printf("Enter number what your search: ");
	scanf("%d",&a);
	
	for(i=0;i<5;i++){
		b= number[i]-a;
		c = b%10;
		if(c==0){
			printf("%d ",number[i]);
		} else {
			continue;
		}
	}
	
}
