#include<stdio.h>
int main()
{
   int swapl(int *x,int *y); 
int a,b,c,temp;
scanf("%d%d%d",&a,&b,&c);
swapl(&a,&b);
swapl(&a,&c);
swapl(&b,&c);
printf("%d %d %d",a,b,c);
}
int swapl(int *x,int *y){
    int temp;
    if(*x>*y){
        temp=*x;
        *x=*y;
        *y=temp;
    }
    return 0;
    
}
