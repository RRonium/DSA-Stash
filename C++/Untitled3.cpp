#include<stdio.h>
#includ>
main()
{
	int no;
	int rem,rev=0;
	printf("Please enter a no.:");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10;
		rev=rev+rem;
	printf("Rev:%d\n",rev);
	}
	printf("Reverse is:%d",rev);
}

