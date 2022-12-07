#include<iostream>
using namespace std;
int main()
{
    int i,n,t1=0,t2=1;
    int nxterm=t1+t2;
    cout<<"Enter the number of term: ";
    cin>>n;
    cout<<t1<<" "<<t2;
    for(i=3;i<=n;++i)
    {
        cout<<" "<<nxterm;
        t1=t2;
        t2=nxterm;
        nxterm= t1+t2;
    }
}
