#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
	scanf("%d",&a[i]);
} 
for(int j=9;j>-1;j--){
	printf("%d",a[j]);
	printf(" ");
}
return 0;
}
