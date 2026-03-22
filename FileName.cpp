#include<iostream>
using namespace std;
void main()
{
	char x[100];
	gets_s(x);
	int selection;
	cin >> selection;
	int ct = 0;
	float ct2 = 1;
	int max = -999;
	float avg;
	int min = 999;
	if (selection == 1)
	{
		for (int i = 0; x[i] != '\0'; i++)
		{
			if (x[i] != ' ')
			{
				ct++;
				if (ct > max)
				{
					max = ct;


				}
			}
			else
			{
				ct = 0;
			}



		}
		cout << max;
	}
	if (selection == 2)
	{
		for (int i = 0; x[i] != '\0'; i++)
		{
			if (x[i] != ' ')
			{
				ct++;

			}
			else
			{
				if (ct < min)
				{
					min = ct;


				}
			
				ct = 0;
			}



		}
		if (ct < min)
		{
			min = ct;

		}
		cout << min;








	}


	if (selection == 3)
	{
		for (int i = 0; x[i] != '\0'; i++)
		{
			if (x[i] != ' ')
			{
				ct++;

			}
			if (x[i] == ' ')
			{
				ct2++;


			}
		}
	
		avg = ct / ct2;
		cout << avg;
	}
}