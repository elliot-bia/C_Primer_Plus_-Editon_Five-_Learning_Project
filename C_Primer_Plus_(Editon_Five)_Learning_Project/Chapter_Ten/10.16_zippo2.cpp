#include<stdio.h>	//注意最后一组*(*(pz+2)+1)即可，思考可以用二维，但是存储为一维
int main(void)
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
	int(*pz)[2];
	pz = zippo;
	printf(" pz = %p,  pz + 1 = %p\n", pz, pz + 1);
	printf(" pz[0] = %p,  pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf(" *pz = %p,  *pz + 1 = %p\n", *pz, *pz + 1);
	printf(" pz[0][0] = %d\n", pz[0][0]);
	printf(" *pz[0] = %d\n", *pz[0]);
	printf(" **pz = %d\n", **pz);
	printf(" pz[2][1] = %d\n", pz[2][1]);
	printf(" *(*(pz+2)+1) = %d\n", *(*(pz + 2) + 1));
	return 0;

 }