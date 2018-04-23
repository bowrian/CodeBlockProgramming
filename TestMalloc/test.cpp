
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	char i = 0,j = 0;
	char m = 5;    //行
	char n = 3;    //列
	char num = 'A';
	char **ptr = NULL;                            //定义一个双指针
	ptr = (char **)malloc(sizeof(char *)*m);      //动态申请(sizeof(char *))个字节的空间存放指针，这些指针指向二维数组中每行的首地址
	//ptr = (char *)calloc(m,sizeof(char *));     //申请num*sizeof(char)的空间并且初始化指针类型为NULL

	if(ptr == NULL)
		exit(1);                                    //结束进程

	for(i=0;i<m;i++)
	{
		*(ptr+i) = (char *)malloc(sizeof(char)*n);  //动态申请(sizeof(char)*n)个字节的空间存放二维数组中每行的数据
		//ptr = (char *)calloc(n,sizeof(char));     //申请n*sizeof(char)的空间并且初始化内存空间为0
		if(*(ptr+i) == NULL)
			exit(1);                                  //结束进程
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			ptr[i][j] = num + j;
		}
		num += n;
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",ptr[i][j]);
		}
		printf("\r\n");
	}
	free(ptr);
	ptr = NULL;
	return 0;
}


