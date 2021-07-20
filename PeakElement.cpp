// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


 // } Driver Code Ends
//User function Template for C

int peakElement(int arr[], int n)
{
   // Your code here
   
   int left = 0;
   int right = n - 1;
   int mid = (left + right)/2;
   
   while(left <= right)
   {
       mid = (left + right)/2;
       
       if(arr[left] > arr[left + 1])
       {
           return left++;
       }
       else if(arr[right] > arr[right - 1])
       {
           return right++;
       }
   
       
       if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
       {
           return mid;
       }
       else if(arr[mid + 1] > arr[mid])
       {
           left = mid + 1;
       }
       else if(arr[mid - 1] > arr[mid])
       {
           right = mid - 1;
       }
   }

 return -1;

}

int peakElementRecursive(int arr[], int left, int right, int n)
{
    int mid = (left + right)/2;

    if(arr[left] > arr[left + 1])
    {
        return left++;
    }
    else if(arr[right] > arr[right - 1])
    {
        return right++;
    }

    if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
    {
        return mid;
    }
    else if(arr[mid + 1] > arr[mid])
    {
        peakElementRecursive(arr, mid + 1, right, n);
    }
    else if(arr[mid - 1] > arr[mid])
    {
        peakElementRecursive(arr, left, mid - 1, n);
    }

return -1;

}

//GFG Recursive Peak Element Function
int findPeakUtil(int arr[], int low, int high, int n)
    {
        // calculating mid
        int mid = (low+high)>>1;
        
        // if mid is last or first index with first element
        // greater than next.
        // Also, check if mid element is greater than mid - 1 and mid+1
        if ((mid == 0 || arr[mid-1] <= arr[mid]) &&
                (mid == n-1 || arr[mid+1] <= arr[mid]))
            return mid;
            
        // If mid is other than 0, then check if mid element is less than prev.
        // If so, then recurse for lower half
        else if (mid > 0 && arr[mid-1] > arr[mid])
            return findPeakUtil(arr, low, (mid -1), n);
            
        // else recurse for the upper half
        else return findPeakUtil(arr, (mid + 1), high, n);
    }


// { Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		//int A = peakElement(tmp,n);
		
        int A = peakElementRecursive(tmp, 0, n - 1, n);

		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
		if(n==1 && A==0)
		f=1;
		else
		if(A==0 && a[0]>=a[1])
		f=1;
		else if(A==n-1 && a[n-1]>=a[n-2])
		f=1;
		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
		f=1;
		else
		f=0;
		printf("%d\n", f);
		}
		
	}

	return 0;
}  // } Driver Code Ends