#include<stdio.h>
void main()
{
	//variable declaration//
   int phy;
	int che;
	int math;
	int eng;
	int total;
	//initialisation//
	phy = 80;
	che = 70;
	math = 70;
	eng = 65;
	total = phy + che + math + eng;
	//output//
	printf("marks in phy : %d\n",phy);
	printf("marks in che : %d\n",che);
	printf("marks in math : %d\n",math);
	printf("marks in eng : %d\n",eng);
	printf("total : %d\n",total);
}
