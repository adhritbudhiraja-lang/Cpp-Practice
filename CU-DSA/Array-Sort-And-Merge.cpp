#include <iostream>

int main()
{
    int a[5] = {1,3,5,7,9};
    int b[5] = {2,4,6,8,10};
    int c[10];
    int i=0,j=0,k=0;
    while(i<5 && j<5)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<5)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<5)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(int x=0;x<10;x++)
    {
        std::cout<<c[x]<<" ";
    }
    return 0;
}