#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i+=2)
    {
        sum += pow(i,2);
    }
    cout<<"Total sum is: "<<sum<<endl;
    return 0;
}
