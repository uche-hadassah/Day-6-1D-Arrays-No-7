/*Name:Uche Hadassah
This program makes use of the sieve of eratosthenes to find all prime numbers from 1 to 500*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 500;
	int Array[MAX] = { 1 };//Initializing all the elements in the array to 1
	for (int i = 2; i <= MAX; i++)
	{
		int j = i;
		while (Array[i] == 1 && j <= MAX)
		{
			if (j +1 % i == 0)
			{
				Array[j + 1] = 0;
			}
			else
			{
				Array[j + 1] == 1;
			}
			j++;
		}
	}
	cout << "Output all prime numbers between 1 and 500:" << endl;
	for (int k = 2; k <= MAX; k++)
	{
		while (Array[k] == 1)
		{
			cout << k << " ";
		}
	}
	return 0;
}