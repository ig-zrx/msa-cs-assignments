#include<iostream> 
using namespace std;
void main()
{
	int pos;
	int x[50]; 
	for (int i = 0; i < 50; i++)
	{
		cin >> x[i];		
	}
	for (int i = 0; i < 50; i++)
	{
		int min = 9999;

		for (int j = i; j < 50; j++)
		{
			if (x[j] < min)
			{
				min = x[j];
				pos = j;
			}

		}
		int Z = x[i];
		x[i] = x[pos];
		x[pos] = Z;


	}
}



