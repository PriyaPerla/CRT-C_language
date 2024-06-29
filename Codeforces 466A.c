#include<stdio.h>
int main(){
	int n,m,a,b,t,i=0,res=0,rem=0;
	scanf("%d",&t);
	while(i<t){
		scanf("%d %d %d %d",&n,&m,&a,&b);
		if(a>(b/m)){
			res=n/m;
			res=res*b;
			rem=n%m;
			if(b<rem*a){
				res=res+b;
				printf("The cost is %d",res);
			}
			else{
				res=res+rem*a;
				printf("The cost is %d",res);
			}
			
		}
		else{
			printf("The cost is %d",n*a);			
		}				
		
	}
}