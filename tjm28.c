#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int c,n,p;
	char E='A';
	printf("-----欢迎来到猜数游戏-------\n");
	printf("-----请输入你认为的数字(在1-100中）-----\n");
	srand(time(NULL));
	while((E=='a')||(E=='A'))
	{
	c=rand()%101;
	printf("c=%d",c);
	scanf("%d",&p);
	n=1;
	while(p!=c)
	{
	  if(p<0||p>100)
		printf("---您输入的数字有问题，请重新输入---\n");
	    else
	{
			if(p>c)
			{
				printf("Wrong!\n");	
			printf("Too high\n");
			}
			if(p<c) 
			{
				printf("Wrong!\n");
			   printf("Too low\n");
			}
		}
	       scanf("%d",&p);
		   if(p==c)
			 printf("Right!\n");
		    n=n+1;
			if(n>9)  break;
		 }
	printf("你猜了次数为：%d",n);
	printf("您是否还要继续，如要继续请按'A'或者'a',如果要结束请按其它键");
    scanf("%ls",&E);
	if((E!='a')&&(E!='A')) break;
}
   printf("游戏结束!");
  	return 0;
	}