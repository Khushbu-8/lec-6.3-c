#include<stdio.h>
#include<conio.h>

void main(){
int num,i;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&num);
	for(i=1; i<=10; i++){
	printf("%dX%d=%d\n",num,i,num*i);
	}

getch();
}