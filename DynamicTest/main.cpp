#include <iostream>
/*
*��̬�滮����
����һ������������, ��ʽ����:
1
2 3
4 5 6
7 8 9 10
�ҳ��ӵ�һ�㵽���һ���һ��·,ʹ����������Ȩֵ֮����С�������.
*/
using namespace std;

int f(int i,int j,int(*a)[4]);

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
int f(int i,int j,int (*a)[4])
{
    int f1,f2,tmp=0,k;

    if(i==0||j==0)
    {
        return a[0][0];
    }
    if(j==i)
    {
        for(k=0;k<=i;k++)
        {
            tmp += a[k][k];
            return tmp;
        }
    }
    f1 = f(i-1,j,a);
    f2 = f(i-1,j-1,a);

    if(f1<f2)
    {
        return f2 + a[i][j];
    }else
    {
        return f1 + a[i][j];
    }

}
