// CPP program to check if a number is 
// divisible by 17 or not using bitwise 
// operator. 
#include<stdio.h>
#include<conio.h>
#include <bits/stdc++.h> 
using namespace std; 

// function to check recursively if the 
// number is divisible by 17 or not 
bool isDivisibleby17(int n) 
{ 
	// if n=0 or n=17 then yes 
	if (n == 0 || n == 17) 
		return true; 

	// if n is less then 17, not 
	// divisible by 17 
	if (n < 17) 
		return false; 

	// reducing the number by floor(n/16) 
	// - n%16 
	return isDivisibleby17((int)(n >> 4) - (int)(n & 15)); 
} 

// driver code to check the above function 
int main() 
{ 
	int n = 35; 
	if (isDivisibleby17(n)) 
		printf("%d",n,"is divisible by 17"); 
	else
		printf("%d",n,"is  not divisible by 17"); 
	
	return 0; 
} 
