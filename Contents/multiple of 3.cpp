#include<iostream>
using namespace std;
int main()
{
	string str1;
	while(cin >> str1)
	{
		string str2 = str1;
		int count;
		for(int i = 0; i < str1.length(); i++)
		{
			str2[i] = str2[i] - '0';
			count = count + str2[i];
		}
		cout << count<< endl;
		if(count % 3 == 0)
			cout << str1 << " is a multiple of 3." << endl;
		else
			cout << str1 << " is not a multiple of 3." << endl;
	}
}
