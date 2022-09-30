#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
	string str1;
	string str2 = "";
	while(getline(cin, str1))
	{
		for(int i = 0; i < str1.length(); i++)
		{
			 str1[i] = toupper(str1[i]);
		}
	    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
	    str1.erase(remove(str1.begin(), str1.end(), ','), str1.end());
	    str1.erase(remove(str1.begin(), str1.end(), '.'), str1.end());
	    str1.erase(remove(str1.begin(), str1.end(), '?'), str1.end());
	    str1.erase(remove(str1.begin(), str1.end(), '!'), str1.end());
		//不要印空白、標點符號
		str2 += str1;
		reverse(str1.begin(),str1.end());
		if(str1 == str2)
			printf("You won't be eaten.\n");
		else
			printf("Oh uh..\n");
	}
}
