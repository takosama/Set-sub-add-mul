#include <stdio.h>

void tmpReset(int* p, int lng)
{
	for(int i = 0; i < lng; i++)
		p[i] = 0;
}

int main(void)
{
	int n = 10;
	int A[] = { 1,4,5 };
	int na = 3;
	int B[] = { 0,1,2,4,8 };
	int nb = 5;
	 
	int tmp[11];
	int tmpSize = 11;

	tmpReset(tmp, 11);

	//bitset
	for (int i = 0; i < na; i++)
		tmp[A[i]]++;
	for (int i = 0; i < nb; i++)
		tmp[B[i]]+=2;

	//和集合
	for (int i = 0; i < tmpSize; i++)
		if (tmp[i] > 0)
			printf("%d ", i);
	printf("\n");

	//積集合
	for (int i = 0; i < tmpSize; i++)
		if (tmp[i] ==0b11)
			printf("%d ", i);
	printf("\n");

	//aと{0...10}の差集合
	for (int i = 0; i < tmpSize; i++)
		if ((tmp[i] & 0b1)!=0b1)
			printf("%d ", i);
	printf("\n");

}
