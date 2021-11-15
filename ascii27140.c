#include<stdio.h>
void main()
{
	int n,m,j;
	printf("enter The three ascii characters are");
	scanf("%d%d%d",&n,&m,&j);
	n = 95+n;
	m = 95+m;
	j = 95+j;
	printf("%c%c%c",n,m,j);
}
