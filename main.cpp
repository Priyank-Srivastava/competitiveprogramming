#include <iostream>
#include<algorithm>
using namespace std;
int fx(int num)
{
    int arr[100],i=0,r=num,sum=0;
    while(r>=16)
    {
        arr[i] = r/16;
        r = r%16;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        sum+=arr[j];
    }
    return r+sum;
}
int main()
{
    int t,l,r,counter;
    cin>>t;
    while(t--)
    {
        counter=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(__gcd(i,fx(i))>1)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
