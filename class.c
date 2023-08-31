#include <stdio.h>
int main() {
	int n=0,i,a[9]={},m=0,t;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
		if(m<a[i]){
			m=a[i];
			t=i+1;
		}
	}
	printf("%d\n%d",m,t);
	return 0;
}