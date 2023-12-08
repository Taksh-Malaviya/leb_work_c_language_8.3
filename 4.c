#include<stdio.h>

void main(){
	
	int a[100][100];
	int i,j,sum,n;
	
	printf("Enter size of n = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter any value [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
			if(i==0 || i==n-1 || j==0 || j==n-1){
				sum += a[i][j];
			}
			
		}
		printf("\n");
	}
	printf("border sum = %d",sum);
}

