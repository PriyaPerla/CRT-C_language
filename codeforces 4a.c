#include<stdio.h>
int main(){
	int n,s;
	scanf("%d",&n);
	if(n%2!=0 ||n==2){
		printf("NO");
	}
	else{
		s=n/2;
		if(s%2==0){
			printf("%d %d",s,s);
		}
		else{
			printf("%d %d",s-1,s+1);
		}
		
	}
	return 0;
}