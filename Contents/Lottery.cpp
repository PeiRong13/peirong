#include<iostream>
using namespace std;
int main()
{
	int a[5];//���� 
	int r[5];//�I��
	int count = 0;
	for(int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	while(cin >> r[0])
	{
		count = 0;
		cin >> r[1] >> r[2] >> r[3] >> r[4]; 
		for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 5; j++)
			{
				if(a[i] == r[j])
					count++;		
			}

		}
		if(count == 5)
			cout << "1000" << endl;
		else if(count == 4)
			cout << "500" << endl;
		else if(count == 3)
			cout << "100" << endl;
		else
			cout << "0" << endl;
		}
	 
}
