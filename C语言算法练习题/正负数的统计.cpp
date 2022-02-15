#include<stdio.h>
int main(){
	int a[20],j=0,s=0;
	float sum=0;
		for(int i=0;i<20;i++){
		scanf("%d",&a[i]);
		if(a[i]<0)
		j++;
		 if(a[i]>0)
{
		sum+=a[i];
		s++;
	}
}
sum=sum/s;
printf("%d\n",j);
printf("%.2f\n",sum);
return 0;
	
} 
