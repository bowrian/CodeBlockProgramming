#include <iostream>
#include <malloc.h>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int sum[32],n,a;
    //��ʼ�������б�ʹ��������ÿ��Ԫ�ض��ȷ���һ���̶���ֵ��
    for(int i=0;i<32;i++)
    {
        sum[i] = 0;
    }
    cin>>n;
    for(int i= 0;i<n;i++)//n��ʾ���潫Ҫѭ���͵����Ĵ���
    {
        cin>>a;
        for(int j=0;j<32;j++)
        {
            sum[j] += ((a >> j) & 1);
            sum[j] %= 3;
        }
    }
    int ans = 0;
    for(int i=0;i<32;i++)
    {
        ans += sum[i]<<i;
        cout<<ans<<endl;
    }
    printf("%d\n",ans);
    return 0;
}
