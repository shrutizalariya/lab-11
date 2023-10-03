#include<stdio.h>
    void main(){
    	int i,n,sum=1;
    	printf("Enter n:");
    	scanf("%d",&n);
    	for(i=1;n>0;i++){
    		sum=sum*i;
		}
		printf("factorial of %d = %d",n,sum);
	}
