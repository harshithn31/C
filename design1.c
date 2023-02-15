#include<stdio.h>
int main(){
	int i=0,j;
	int n;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=n-i;j++){
			printf("*");
		}
		printf("\n");

	}

}
