#include <stdio.h>
int main(){
	int a,i=0,j=0,b[10];
	scanf("%d",&a);
	while(a>0){
		b[j++]=a%10;
		a=a/10;
		i++;
	}
	printf("%d\n",i);
	j=j-1;
	for(j;j>-1;j--){
	printf("%d",b[j]);
	printf(" ");
}
printf("\n");
for(int j=0;j<i;j++){//for�ģ�С���ţ����治��д����sum=sum+1���ֵ�ʽ 
	printf("%d",b[j]);
}

	return 0;
} 
