#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int table[11][11];
	
	cout << "=x=x= MULTIPLICATION TO PRINT FROM 1 - 10 =x=x=" << endl << endl;
	
	for(int x = 0; x < 11; x++)
	{
		for(int y = 0; y < 11; y++)
		{
			if(x == 0)
			{
				table[0][y] = y;
			}
			else if(y == 0)
			{
				table[x][0] = x;
			}
			else{
			table[x][y] = x * y;
			}
			
			cout << setw(4) << table[x][y];
			
		}
			cout << endl;
	}
	return 0;
}

