//#include<stdio.h>
#include<cstring>
#include<iostream>
//#include<algorithm>

using namespace std;

int main()
{
    char a[1000];
    int b[1000];
    while(cin>>a)
    {

        int len=strlen(a);  //�����ַ�����ĳ�������strlen()ʱ��Ҫ����ͷ�ļ�<cstring>
        int i,j;
        int max=1;
        for(i=0;i<len;i++)
        {
            int z=0;
            memset(b,0,sizeof(b));
            for(j=i;j<=len;j++)
            {
                int x=a[j];
                b[x]++;
                if(max<z) max=z;
                if(b[x]>1) { break;}
                z++;

            }
        }
        cout<<max<<endl;
    }
}
