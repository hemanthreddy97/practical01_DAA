#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[i];
    cout<<"enter "<< n << " elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int size = 1; size < n; size = size * 2)
    {
        for(int left = 0; left < n - 1; left += 2 * size)
        {
            int mid = left + size - 1;
            int right = left + 2 * size - 1;

            if(mid >= n)
                continue;

            if(right >= n)
                right = n - 1;

            int temp[n];
            int i = left, j = mid + 1, k = left;

            while(i <= mid && j <= right)
            {
                if(arr[i] <= arr[j])
                    temp[k++] = arr[i++];
                else
                    temp[k++] = arr[j++];
            }

            while(i <= mid)
                temp[k++] = arr[i++];

            while(j <= right)
                temp[k++] = arr[j++];

            for(i = left; i <= right; i++)
                arr[i] = temp[i];
        }
    }

    cout << "Merge Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
    
    
