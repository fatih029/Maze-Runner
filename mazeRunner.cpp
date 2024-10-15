#include<iostream>
using namespace std;
void isMaze(int a[][5], int i, int j)
{
	i = 0;
	j = 0;
	int temp = a[i][j];
	int temp1 = 0;
	while (temp1 != temp)
	{
		temp = a[i][j];
		temp1 = (1 + i) * 10 + (j + 1);
		i = ((temp) / 10) - 1;
		j = ((temp) % 10) - 1;


		cout << i + 1 << "," << j + 1 << endl;
	}

	cout << "treasure found in :" << i + 1 << "," << j + 1;

}
int main()
{
	int a[5][5] = { 34,21,32,41,25,
					14,42,43,14,25,
					54,45,52,42,23,
					33,15,51,31,35
				   ,21,55,33,13,23 };
	int i = 0;
	int j = 0;
	isMaze(a, i, j);
}