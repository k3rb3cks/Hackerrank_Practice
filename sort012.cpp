// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012_noob(int arr[], int n)
{
    
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count_0++;
        }
        else if(arr[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
        
    }
    
    
    for(int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for(int i = count_0; i < (count_0 + count_1); i++ )
    {
        arr[i] = 1;
    }
    for(int i = (count_0 + count_1); i < (count_0 + count_1 + count_2); i++)
    {
        arr[i] = 2;
    }
    
}


void sort012(int arr[],int n)
{
    int low, mid, high;

    low = mid = 0;

    high = n - 1;

    while(mid < high)
    {
        if(arr[mid] == 0)
        {
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;

            mid++;
            low++;
        }
        else if(arr[mid] == 2)
        {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            
            high--;
        }
        else
        {
            mid++;
        }
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends