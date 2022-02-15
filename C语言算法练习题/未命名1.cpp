#include<stdio.h>
#include<string.h>
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(a)/sizeof(a[0]);
	int head = 0;
	int rear = size - 1;
	while (head < rear) {
		if (a[head] % 2 == 0 && a[rear] % 2 != 0) {
			int temp = a[head];
			a[head] = a[rear];
			a[rear] = temp;
			rear--;
			head++;
		}
		else if (a[head] % 2 == 0 && a[rear] % 2 == 0) {
			rear--;
		}
		else if (a[head] % 2 != 0 && a[rear] % 2 != 0) {
			head++;
		}
		else {
			head++;
				rear--;
		}
	}
	for(int i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
