
#include <stdio.h>
int idata[5] = { 1, 5, 2, 8, 4 };
double average(int data[], int size)
{
 int i, sum = 0;
 for (i = 0; i < 5; i++)
 {
  sum += idata[i];
 }
 size = ((double)sum / 5);
 return size;
}
int findMax(int data[], int size)
{
 size = idata[0];
 for (int j = 0; j < 5; j++)
 {
  if (size < idata[j])
  {
   size = idata[j];
  }
 }
 return size;
}
int findMin(int data[], int size)
{
 size = idata[0];
 for (int z = 0; z < 5; z++)
 {
  if (size > idata[z])
  {
   size = idata[z];
  }
 }
 return size;
}
int main()
{
 double d = average(idata, sizeof(idata));
 int imax = findMax(idata, sizeof(idata));
 int imin = findMin(idata, sizeof(idata));
 printf("배열 중 가장 큰 것:  %d \n 가장 작은 것 : %d \n 평균은 %.lf 입니다.\n", imax, imin, d);

}
