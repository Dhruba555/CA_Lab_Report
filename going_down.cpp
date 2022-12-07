#include<iostream>
using namespace std;
int GD(int m,int n)
{
    if(m==n)
    {
        return n*n;
    }
    else{
        return GD(m,n-1)+n*n;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<GD(m,n)<<endl;
}

