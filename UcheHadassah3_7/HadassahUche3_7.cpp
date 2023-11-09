/*Sieve of Eratosthenes: Write a program that finds and prints all the prime numbers 
between 1 and 500. A prime integer is an integer greater than 1 that is divisible only 
by 1 and itself (e.g. 2, 3, 5, 7, 11, 13 etc). The Sieve of Eratosthenes is a method of 
finding prime numbers. It operates as follows: 
a) Create an array with all elements initialized to 1 (true). Array elements with prime 
subscripts will remain 1 and all other (non-prime) elements will be eventually set 
to 0 (false).
b) Starting with array subscript 2, every time an array element is found whose value 
is 1, loop through the remainder of the array and set to zero every element whose 
subscript is a multiple of the subscript for the element with value 1. For example, 
for array subscript 2, all elements beyond 2 in the array that are multiples of 2 will 
be set to 0 (subscripts 4, 6, 8, 10, etc.); for array subscript 3, all elements beyond 3 
in the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12, 15, etc); 
and so on.
When this process is complete, the array elements that are still set to 1 indicate that the
subscript is a prime number. These subscripts can then be printed out.
Output (all prime numbers between 1 and 500):
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 
107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 
317 331 337 347 349 353 359 367 373 379 383 389 397 401 409 419 421 431 433 
439 443 449 457 461 463 467 479 487 491 499*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 500;
	bool array[MAX];
	for (int i = 0; i < MAX; i++)
	{
		array[i] = true;
	}
	for (int j = 2; j < MAX; j++)
	{
		if ((j + 1) % j == 0)
		{
			array[j] = false;
		}
		else if ((j + 1) % j != 0 && array[j] != false)
		{
			array[j] = true;
			break;
		}
		cout << array[j] << " ";
	}
	
}