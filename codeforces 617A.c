#include<stdio.h>
int main(){
	int dis,steps=0;
	scanf("%d",&dis);
		if(dis%5!=0){
		
			steps=(dis/5)+1;
			printf("%d",steps);
		}
		else{
			printf("%d",dis/5);
		}
	
}