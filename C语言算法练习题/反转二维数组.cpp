#include<stdio.h>
int main(){
	int a[3][3]={0};
	int temp;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		scanf("%d",&a[i][j]);
	}
}
	for(int k=0;k<3;k++){
		for(int j=0+k;j<3;j++){
			temp=a[k][j];
			a[k][j]=a[j][k];
			a[j][k]=temp;
		}
	}
	for(int f=0;f<3;f++){
		for(int u=0;u<3;u++){
			printf("%d",a[f][u]);
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
} 
