#include<stdio.h>

void main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(k=5;k>i;k--){
            printf(" ");
        }
        for(j=i;j>=1;j--){
        	if(j%2==0){
        		printf("0",j);
			}
            else{
            	printf("1",j);
			}
        }
        printf("\n");
    }
}

