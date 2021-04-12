#include<stdio.h>
main()
{
	int x=10, y=5;
	printf("Before swapping: x=%d , y=%d", x , y);
	// Code to swap 'x' and 'y'
	x=x+y; // x now becomes 15
	y=x-y; // y now becomes 10
	x=x-y; // x now becomes 5
	printf("After swapping: x=%d , y=%d", x,y);
	return 0;
	
}
