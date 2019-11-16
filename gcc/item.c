#include <stdio.h>

typedef struct StuInfor
{
	char name[2];
	
	unsigned char addr;
	
	unsigned int  num;
	
	unsigned char arry;
	
	unsigned char partner1;
	
	unsigned char partner2;
	
	unsigned char partner3;
	
}stuInfor;

stuInfor stuInfo;

int main(void)
{
	int len;
	
	len = sizeof(stuInfo.name);
	printf("len:%d\r\n",len);
	
	len = sizeof(stuInfo);
	printf("len:%d\r\n",len);	//
	
	stuInfo.num = 1;
	
	return 0;	
	
}
