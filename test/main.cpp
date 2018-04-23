#include <iostream>
#include <malloc.h>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int sum[32],n,a;
    //初始化数组列表，使得数组中每个元素都先分配一个固定的值。
    for(int i=0;i<32;i++)
    {
        sum[i] = 0;
    }
    cin>>n;
    for(int i= 0;i<n;i++)//n表示后面将要循环和迭代的次数
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
