#include<iostream>
#include<memory.h>
using namespace std;
#define SIZE 4
int *multi(int *num1, int size1, int *num2, int size2) {
	int size = size1 + size2;
	int *ret = new int[size];
	int i = 0;
	memset(ret, 0, sizeof(int)*size);
	for (i = 0; i < size2; i++)
	{
		int k = i;
		for (int j = 0; j < size1; j++)
		{
			ret[k++] += num2[i] * num1[j];
		}
	}
	for (i = 0; i < size; ++i)
	{
		if (ret[i]>=10)
		{
			ret[i + 1] += ret[i] / 10;
			ret[i] %=10;
		}
	}
	return ret;
}
int main(int argc,char **argv) {

	int num1[SIZE] = {3,2,1,1};
	int num2[SIZE] = {2,1,1,2};
	int a = 1123 * 2112;
	cout << a << endl;
	int *ret = multi(num1,SIZE,num2,SIZE);
	for (int i = SIZE*2-1; i >=0; --i)
	{
		cout << ret[i];
	}
	delete [] ret;
	system("pause");
	return 0;
}