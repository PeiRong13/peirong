#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	while(cin >> n && n != 0)
	{
		vector<int> v;
		for(int i = 2; n != 1; i++)
		{
			while(n % i == 0)
			{
				n =	n / i;
				v.push_back(i);
			}
		}
		cout << v[0];
		for(int i = 1; i < v.size(); i++)
		{
			cout << "*" << v[i];
		}
		cout << endl;
	}
}