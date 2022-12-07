#include<iostream>
using namespace std;
int SH(int m,int n)
{
    int d=(m+n)/2;
    if(m==n)
    {
        return m*m;
    }
    else{
        return SH(m,d)+SH(d+1,n);
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<SH(m,n)<<endl;
}

