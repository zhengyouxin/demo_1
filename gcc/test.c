#include <stdio.h>
#include <string.h>

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;

uint8 su[10]={0};
int sz[10]={11,23,45,3,35,46,111,3,2,34};

void bubbleSort(int arr[],int len)
{
	int temp;
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}	
		}	
	}
}

int main(void)
{
	uint8 i;
	uint8 len = 10;
	
	bubbleSort(sz,len);
	
	
	for(i=0;i<10;i++)
	{
		printf("sz[%d]:%d\r\n",i,sz[i]);	
	}
	
	return 0;
}
