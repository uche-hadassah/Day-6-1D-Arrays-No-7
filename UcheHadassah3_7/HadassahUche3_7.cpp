/*Name: Uche Hadassah
This program finds all prime numbers from 1 - 500 using the Sieve of Eratosthenes and ouputs them*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 500;
	bool array[MAX];//Made the array a bool
	for (int i = 0; i < MAX; i++)//Initializing all the numbers in the array to 1
	{
		array[i] = true;
	}
	for (int j = 2; j < MAX; j++)//Starts checking from index 2
	{
		int tmp = j;//created a temporary value for easy index manipulation later
		while ((tmp+j) % j == 0 && tmp+j < MAX)//While the number is divisible by j
		{
			array[tmp+j] = false;//Sets the value of the array to 0
			tmp += j;//Increases the temp index by j
		}
	}
	cout << "The prime numbers are:" << endl;
	for (int k = 2; k < MAX; k++)//Start with 2 since 0,1 and 500 are not included
	{
		if(array[k] == true)//If the value in the array is still 1
		{
			cout << k << " ";
		}
	}
	
}