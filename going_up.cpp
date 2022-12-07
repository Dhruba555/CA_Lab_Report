#include<iostream>
using namespace std;
int GU(int m,int n)
{
    if(m==n)
    {
        return m*m;
    }
    else{
        return m*m+GU(m+1,n);
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<GU(m,n)<<endl;
}
