#include<iostream>
using namespace std;
void main()
{
	int x[100][200];
	int val;
	cin >> val;
	int startposr;
	int startposc;
	int endposc;
	int endposr;
	int check = 0;
	int summation = 0;
	for (int r = 0; r < 100; r++)
	{
		for (int c = 0; c < 200; c++)
		{
			if (x[r][c] == val)
			{
				check++;
				if (check == 1)
				{
					startposr = r;
					startposc = c;
				}
				else
				{
					endposr = r;
					endposc = c;
				}
			}
			

		}


	}
	if (check == 2)
	{
		for (int r = startposr; r < endposr+1 ; r++)
		{
			for (int c = startposc; c < endposc+1 ; c++)
			{
				summation += x[r][c];
			}
		}
	}
	cout << summation;



}
