#include<iostream>
using namespace std;


void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[(l + r)>>1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        cout<<q[i]<<"<"<<x<<endl;
        do j -- ; while (q[j] > x);
        cout<<q[j]<<">"<<x<<endl;
        cout<<q[i];
        cout<<q[j];
        // cout<<x;
         cout<<endl;
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
int main(){
    int arr[]= {5,2,1,4,3};
    quick_sort(arr,0,3);
    for (int i = 0; i < sizeof(arr); i++)
    {
        cout<<arr[i]<<endl;
    }
    
}