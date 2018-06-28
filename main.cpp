#include <iostream>

using namespace std;
void array_reverse(int*,int);
int main()
{
   int arr[]={1,2,3,4};
   int j;
    array_reverse(arr,4);
    for(j=0;j<4;j++)
        cout<<arr[j]<<" ";

    return 0;
}

void array_reverse(int a[],int s)
{
    int i,t;
    for(i=0;i<(s/2);i++)
    {
        t=a[i];
        a[i]=a[s-i-1];
        a[s-i-1]=t;
    }
}
