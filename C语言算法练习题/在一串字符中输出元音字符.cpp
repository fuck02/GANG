#include<stdio.h>
#include<string.h>
void copy_(char d[],char b[]);
int main(){
	char d [10];
	char b [10];
	scanf("%s",d);
	copy_(d,b);
	return 0;
} 
void copy_(char d[],char b[]){
	int c=0;
	for(int i=0;i<strlen(d);i++){
		if(d[i]=='a'||d[i]=='i'||d[i]=='e'||d[i]=='o'||d[i]=='u'){
			b[c]=d[i];
			c++;
			
		}
	}
	printf("%s",b);	
}
