#include<stdio.h>
#include<string.h>
 
int main()
{
    int i,j=0,a_length;
    char a[100],b[100];
    gets(a);
    a_length=strlen(a);
    for(i=0;i<=a_length-1;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'
           ||a[i]=='o'||a[i]=='u')
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]=0;
    puts(b);
    return 0;
}
