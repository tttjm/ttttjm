#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int c,n,p;
	char E='A';
	printf("-----��ӭ����������Ϸ-------\n");
	printf("-----����������Ϊ������(��1-100�У�-----\n");
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
		printf("---����������������⣬����������---\n");
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
	printf("����˴���Ϊ��%d",n);
	printf("���Ƿ�Ҫ��������Ҫ�����밴'A'����'a',���Ҫ�����밴������");
    scanf("%ls",&E);
	if((E!='a')&&(E!='A')) break;
}
   printf("��Ϸ����!");
  	return 0;
	}