#include <stdio.h>
#include <math.h>
int main()
{
 	double a,b,c,res;
	printf("계수 a를 입력");
	scanf("%lf",&a);
	printf("계수 b를 입력");
	scanf("%lf",&b);
	printf("계수 c를 입력");
	scanf("%lf",&c);
	if(a==0) //일차방정식때
		printf("방정식의 근은 %f입니다.",-c/b);
	else
	{
		res = (b*b-4.0*a*c);
		if(res>=0)
		{
			printf("방정식의 근은 %f입니다. \n",(-b+sqrt(res))/(2.0*a));
			printf("방정식의 근은 %f입니다. \n",(-b-sqrt(res))/(2.0*a));
		}
		else
			printf("실근이 존재하지 않습니다.");
	 } 
	 return 0;
}