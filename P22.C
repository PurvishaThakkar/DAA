// A Program to check whether a number is divisible by 7 
#include <stdio.h> 
#include<conio.h>
int isDivisibleBy17( int num )
{ 
	// If number is negative, make it positive 
	if( num < 0 ) 
		return isDivisibleBy17( -num );

	// Base cases 
	if( num == 0 || num == 17 )
		return 1;
	if( num < 10 )
		return 0;

	// Recur for ( num / 10 - 2 * num % 10 )
	return isDivisibleBy17( num / 10 - 2 * ( num - num / 10 * 10 ) );
}

// Driver program to test above function
int main()
{
	int num = 616;
	clrscr();
	if( isDivisibleBy17(num ) )
		printf( "Divisible" );
	else
		printf( "Not Divisible" );
	getch();
	return 0;
}
