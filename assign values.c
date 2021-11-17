#include<stdio.h>
void main()
{
	int a, b, c;
	a= 12;
	b= 2;
    c= 3;
    a += b;
    b -= c;
    c *= a;
    a /= b;
    b *= c;
    a += b;
    printf("the values of a and b and c are %d %d %d", a, b, c);
}
