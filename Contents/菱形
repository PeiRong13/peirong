#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{ 
		for (int i = 0; i < n; i++) //上半部         
		{
			for (int j = 0; j<(n - 1 - i); j++)          
			{
				cout << " "; 
			}                                  
	
			for (int j = 0; j < 2 * i + 1; j++)            
			{
				if (j == 0 || j == 2 * i)
					cout << "*"; 
				else
					cout << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < n - 1; i++)//下半部 
		{
			for (int j = 0; j < i + 1; j++)           
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * (n - 1) - (1 + 2 * i); j++)      
			{
				if (j == 0 || j == 2 * (n -  i - 2))
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	} 
	return 0;
}