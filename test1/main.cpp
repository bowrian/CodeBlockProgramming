
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	char i = 0,j = 0;
	char m = 5;    //��
	char n = 3;    //��
	char num = 'A';
	char **ptr = NULL;                            //����һ��˫ָ��
	ptr = (char **)malloc(sizeof(char *)*m);      //��̬����(sizeof(char *))���ֽڵĿռ���ָ�룬��Щָ��ָ���ά������ÿ�е��׵�ַ
	//ptr = (char *)calloc(m,sizeof(char *));     //����num*sizeof(char)�Ŀռ䲢�ҳ�ʼ��ָ������ΪNULL

	if(ptr == NULL)
		exit(1);                                    //��������

	for(i=0;i<m;i++)
	{
		*(ptr+i) = (char *)malloc(sizeof(char)*n);  //��̬����(sizeof(char)*n)���ֽڵĿռ��Ŷ�ά������ÿ�е�����
		//ptr = (char *)calloc(n,sizeof(char));     //����n*sizeof(char)�Ŀռ䲢�ҳ�ʼ���ڴ�ռ�Ϊ0
		if(*(ptr+i) == NULL)
			exit(1);                                  //��������
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			ptr[i][j] = num + j;
		}
		num += n;
		printf("%s\n",num);
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


