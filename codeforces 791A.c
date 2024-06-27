#include<stdio.h>
int main(){
	int l,b,count=0;
	scanf("%d %d",&l,&b);
	while(l<=b){
		l=3*l;
		b=2*b;
		count=count+1;
	}
	printf("%d",count);

	
}