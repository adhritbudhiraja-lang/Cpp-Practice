#include <iostream>

int main()
{
    int arr[1001], temp[1001], n, cs;
    std::cout << "Enter number of elements in the array : ";
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cout << "arr[" << i << "] : ";
        std::cin >> arr[i];
    }
    std::cout << "Entered array : ";
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    for (int size = 1; size < n; size = size * 2)
    {
        for(int left = 0; left < n - size; left = left + 2 * size)
        {   
            int mid = left + size - 1;
            int right = left + 2 * size - 1;
            if(right >= n)
            {
                right = n - 1;
            }
            int i = left;
            int j = mid + 1;
            int k = left;
            while(i <= mid && j <= right)
            {
                if(arr[i] < arr[j])
                {
                    temp[k] = arr[i];
                    i++;
                }
                else
                {
                    temp[k] = arr[j];
                    j++;
                }
                k++;
            }
            while(i <= mid)
            {
                temp[k] = arr[i];
                i++;
                k++;
            }
            while(j <= right)
            {
                temp[k] = arr[j];
                j++;
                k++;
            }
            for(int x = left; x <= right; x++)
            {
                arr[x] = temp[x];
            }
        }
    }
    std::cout << "\nSorted array : ";
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}