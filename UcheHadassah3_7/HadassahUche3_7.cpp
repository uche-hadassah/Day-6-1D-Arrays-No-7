/*Name:Uche Hadassah
This program makes use of the sieve of eratosthenes to find all prime numbers from 1 to 500*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 500;
	int array[MAX];
	for (int a = 0; a < MAX; a++)
	{
		array[a] = 1;
	}
	for (int i = 2; i <= MAX; i++)
	{
		int j = i;
		while(j <= MAX)
		{
			if (array[i] == 1)
			{
				if (j + 1 % i == 0)
				{
					array[j + 1] = 0;
				}
				else
				{
					array[j + 1] == 1;
				}
				j++;
			}
			else
			{
				break;
			}
		}
	}
	cout << "Output all prime numbers between 1 and 500:" << endl;
	for (int k = 2; k <= MAX; k++)
	{
		if (array[k] == 1)
		{
			cout << array[k]<< " ";
		}
	}

	return 0;
}