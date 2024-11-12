//3 , 6, 9 ,18 ,21 ,42 ……………20th term. 
#include <stdio.h>

void main()
{
	int i, num=0;
	for(i=1; i <= 20; i++)
	{
		if(num%2 == 0)
		{
			num = num + 3;
			printf("%d\t", num);
		}
		else
		{
			num = num * 2;
			printf("%d\t", num);
		}
	}
}
