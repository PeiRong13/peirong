#include<bits/stdc++.h>
using namespace std;
int main()
{
	char chess[8][8];
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			cin >> chess[i][j];
	
	int t = 0;
	for(int i = 0; i < 8; i++)
		for(int j  = 0; j < 8; j++)
		{
		int column = 0,row = 0, m[4] = {0};
			if(chess[i][j] == 'Q')
			{
				for(int k = 0; k < 8; k++)
					if(chess[i][k] == 'Q')
						column++;
						
				for(int k = 0; k < 8; k++)
					if(chess[k][j] == 'Q')
						row++;
							
				if(column > 1 || row > 1)
					t = 1;	
				int lu = 0;
				while(chess[i][j])
				{
					if(chess[i-lu][j-lu] == 'Q')
						m[0]++;
					if((i-lu) == 0 || (j-lu) == 0)
						break;
					lu++;
				}			
			}
			
			int ru = 0;
			while(chess[i][j])
			{
				if(chess[i-ru][j+ru] == 'Q')
					m[1]++;
				if((i-ru) == 0 || (j+ru) == 7)
					break;
				ru++;
			}
			
			int ld = 0;
			while(chess[i][j])
			{
				if(chess[i+ld][j-ld] == 'Q')
					m[2]++;
				if((i+ld) == 7 || (j-ld) == 0)
					break;
				ld++;
			}
			
			int rd = 0;
			while(chess[i][j])
			{
				if(chess[i+rd][j+rd] == 'Q')
					m[3]++;
				if((i+rd) == 7 || (j+rd) == 7)
					break;
				rd++;
			}
			
			for(int k = 0; k < 4; k++)
				if(m[k] > 1)
					t = 1;
			}
		
		
		if(t == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl; 
}