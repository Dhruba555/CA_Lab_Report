#include<iostream>
using namespace std;
void tower(int disk,char sou,char mid,char des)
{
    if (disk == 1)
    {
        cout<<sou<<" to "<<des<<endl;
    }
    else{
        tower(disk-1,sou,des,mid);
        cout<<sou<<" to "<<des<<endl;
        tower(disk-1,mid,sou,des);
    }
}
int main()
{
    int n;
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}
