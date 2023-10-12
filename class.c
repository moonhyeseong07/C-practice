#include <stdio.h>
int main() {
	int n,i,sum=1;
	scanf("%d",&n);
	printf("1");
	for(i=2;i<n;++i){
		if(n%i==0){
			sum+=i;
			printf(" + %d",i);
		}
	}
	//n%i==0
	printf(" = %d",sum);
	return 0;
}
