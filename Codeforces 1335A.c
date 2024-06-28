#include<stdio.h>
int main(){
	int t,n,a,b,i=0;
	scanf("%d",&t);
	while(i<t){
		scanf("%d",&n);
		if(n==0||n==1||n==2){
			printf("0");
		}
		else{
			if(n%2==0){
				n=(n/2)-1;
				printf("%d",n);
			}
			else{
				n=n/2;
				printf("%d",n);
			}
			
		}
	}
}