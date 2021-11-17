#include<stdio.h>
void main()
{
	int a, b, c;
	a= 12;
	b= 4;
    c= 3;
    a += b; //14 4 3
    b -= c; //14 1 3
    c *= a; //14 1 42
    a /= b; //14 1 42
    b *= c; //14 42 42
    a += b; //56 42 42
    printf("the values of a and b and c are %d %d %d", a, b, c);
}
