#include<iostream>
using namespace std;
int pizzaCut(int n)
{
    if(n==1)
    {
        return 2;
    }
    return n+pizzaCut(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;
    cout<<pizzaCut(n)<<endl;
}
