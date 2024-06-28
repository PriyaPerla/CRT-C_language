#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int count=0;
		int i=1;
		scanf("%d",&n);
		while(1){
			if(i%3!=0 && i%10!=3){
				count++;
				if(count==n){
					printf("%d\n",i);
					break;
				}
		    }
		    i++;
		}
	}
	return 0;
}