#include <stdio.h>
#include <stdlib.h>
//함수 원형 정의 
/*
volatile : p가 가리키는 내용이 수시로 변경되니 
사용할 때마다 다시 로드하라는 의미 
qsort() : 데이터가 저장된 배열을 정렬하는데 사용되는 라이브러리 함수 
*/
int values[] = {98,23,99,37,16};
int compare(const void *a, const void *b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	int n;
	qsort(values,5,sizeof(int),compare);
	printf("정렬한 후 배열: ");
	for(n=0; n<5; n++)
		printf("%d",values[n]);
	printf("\n");
	return (0);
}