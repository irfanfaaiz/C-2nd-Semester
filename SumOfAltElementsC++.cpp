# include <iostream>
# include <string.h>
using namespace std;

int SumAlt(int a[],int n,int key)
{
 int i,j,sum =0;
 
 for (i=0;i<n;i++)
{
 if (i%key!=0)
 {
   sum = sum +a[i];
 }
}

return sum;
} //End of Sum

void AcceptArray(int n,int a[])
{
int i;
cout<<"Enter the "<<n<< " elements of the array:"<<endl;
for (i=0;i<n;i++)
{
    cin>>a[i];
}

} // End of Acceptance

void DisplayArray(int n,int a[])
{
int i;
cout<<"The "<< n << " elements of the array:"<<endl;
for (i=0;i<n;i++)
{
    cout<<" "<<a[i];
}

} // End of Display

int main()
{
int size,arr[1000],ans,diff;
cout<<"Enter the size of the array: "<<endl;
cin>>size;

cout<<"Enter the difference of the elemnents of the array: "<<endl;
cin>>diff;

AcceptArray(size, arr);

cout<<"This is array: "<<endl;
DisplayArray(size,arr);

ans = SumAlt(arr,size,diff);

cout<<"The sum of the alternative elements of the array is: "<<ans<<endl;

return 0;
}
