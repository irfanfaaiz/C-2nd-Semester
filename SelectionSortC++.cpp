# include <iostream>
# include <string.h>
using namespace std;

void Swap(int a, int b)
{
int temp;
 temp = a;
 a = b; 
 b = temp;
}

void SelectionSort(int a[],int n)
{
 int i,j,minindex;
 
 for (i=0;i<n-1;i++)
{
  minindex = i;
  for (j=i+1;j<n;n++)
  {
     if (a[j]<a[minindex])
     {
       minindex = j;
     }    

  }
     Swap(a[i],a[j]);
}

} //End of selection sort

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
int size,arr[1000];
cout<<"Enter the size of the array: "<<endl;
cin>>size;


AcceptArray(size, arr);

cout<<"This is original array: "<<endl;
DisplayArray(size,arr);

SelectionSort(arr,size);

cout<<"This is new array: "<<endl;
DisplayArray(size,arr);

return 0;
}








