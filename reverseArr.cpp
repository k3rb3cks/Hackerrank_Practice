#include<bits/stdc++.h>

void reverse_d(int arr[], int d)
{
    for(int i = 0; i < d/2; i++)
    {
        int temp = arr[d - i - 1];
        arr[d - i - 1] = arr[i];
        arr[i] = temp;
    }
}

void reverse_rem(int arr[], int n, int d)
{
    for(int i = d; i < (n + d - 1)/2; i++)
    {
        int temp = arr[n + d - i - 1];
        arr[n + d - i - 1] = arr[i];
        arr[i] = temp;

    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    reverse_d(arr, 2);
    

    for(int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    std::cout<<std::endl;

    reverse_rem(arr, 5, 2);

    for(int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    std::cout<<std::endl;

    reverse_d(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    std::cout<<std::endl;

}