#include <iostream>
#define key 45

using namespace std;

int A[10]={5,9,17,23,25,45,59,63,71,89};

void binarySearch()
{
    int mid=0,l=0,r=9,c=0;;
    while (l<=r)
    {
        mid=(l+r)/2;
        if (key==A[mid])
        {
            cout<<"Element found at index = "<<mid;
            c=1;
            break;
        }
        else if (key>A[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if (c==0)
    {
        cout<<"Element not found";
    }
}

int main()
{
    binarySearch();
    return 0;
}
