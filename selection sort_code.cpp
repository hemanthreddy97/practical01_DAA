#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
   
    int arr[n];
    cout<<"enter "<<n<<" elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i,min,j,temp;
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
