#include <stdio.h>
#include <stdlib.h>
void init();
int main()
{
	init();
	init();
	init();
	return 0;
}
void init()
{
	static int inited =0;
	if(inited ==0){
		printf("init(): 네트워크 장치를 초기화합니다 \n");
		inited =1;
	}
	else {
		printf("init() : 이미 초기화 되었으믈 초기화 하지 않습니다 \n");
	}
}