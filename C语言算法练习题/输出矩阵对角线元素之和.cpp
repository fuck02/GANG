#include<stdio.h>
int main (){
	int a[3][3],num=0,sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("%d %d",a[0][0]+a[1][1]+a[2][2],a[0][2]+a[1][1]+a[2][0]);
}

 
