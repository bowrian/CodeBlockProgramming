
#include <iostream>
using namespace std;

void trans(int m,int n,bool b)
{
    int arr[m][n];

    //通过键盘输入给数组进行赋值
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
    //如果b为1表示上下翻转，b为0表示左右翻转
    if(b == 0)
    {
        for(int j=0;j<m;j++)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<arr[j][n-i]<<" ";
                //if((i)%n==0)
                //cout<<endl;
            }
            cout<<endl;

        }

    }else if(b == 1)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[m-i][j]<<" ";
            }
            cout<<endl;

        }
    }

}

int main()
{
    int M,N;
    bool T=1;
    cin>>M>>N>>T;
    trans(M,N,T);
    return 0;
}
