#include<stdio.h>

void main(){
    int i;
    for(i=1;i<=6;i++){
    	if(i==1){
    		printf("     *\n");
		}else if(i==2){
			printf("    * *\n");
		}
		else if(i==3){
			printf("   *   *\n");
		}
		else if(i==4){
			printf("  * * * *\n");
		}
		else if(i==5){
			printf(" *       *\n");
		}
		else if(i==6){
			printf("*         *\n");
		}
        
    }
    
}

