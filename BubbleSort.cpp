#include <iostream>
using namespace std;
void InputArray(float [],int &);
void OutputArray(float [],int);
void swap(int,int);
void BubbleSort(float [],int );

int main()
{
    float a[100];
    int n;
    InputArray(a,n);
    OutputArray(a,n);
    BubbleSort(a,n);
    cout<<"duoc sap xep thanh ";
    OutputArray(a,n);
    return 0;
}

void InputArray(float a[],int &n)
{
    cout<<"Input n ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}

void OutputArray(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void swap(int a ,int b)
{
        int temp=a;
        a=b;
        b=temp;
}

void BubbleSort(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-1;k++)
            if(a[k]<a[k+1])
                swap(a[k],a[k+1]);
    }
}