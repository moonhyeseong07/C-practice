#include <stdio.h>
int main() {
	int n,k,min=100,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&k);
		if(max<k)
			max=k;
		if(min>k)
			min=k;
	}
		printf("%d",max-min);
	return 0;
}
