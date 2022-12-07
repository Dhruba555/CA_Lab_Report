#include<iostream>
using namespace std;

int divide(int arr[],int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;

    return i;
}
void quickSort(int arr[],int low,int high)
{
    if(low < high)
    {
        int pindx= divide(arr,low,high);

        quickSort(arr,low,pindx-1);
        quickSort(arr,pindx+1,high);
    }
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
