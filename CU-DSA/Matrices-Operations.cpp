#include <iostream>

int main()
{
    int n,a[100][100],b[100][100],c[100][100],z=0,ch,elm1,elm2;
    std::cout << "Enter number of rows & colums in matrix A&B : ";
    std::cin >> n;
    std::cout << "Enter elements of matrix A : " << std::endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout << "A[" << i << "]" << "[" << j << "] : "; 
            std::cin >> a[i][j];
        }
    }
    std::cout << "Enter elements of matrix B : " << std::endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout << "B[" << i << "]" << "[" << j << "] : ";
            std::cin >> b[i][j];
        }
    }
    while(z==0)
    {
        std::cout << "\nChoose from the following options : " << std::endl;
        std::cout << "\n1)Display both matrices\n2)Add A&B matrices\n3)Subrtact A&B matrices\n4)Multiply the matrices\n5)Transpose of matrix A&B\n6)Maximum elements in A&B\n7)Sum of diagonal elements\n8)Exit\n" << std::endl;
        std::cout << "Enter choice : ";
        std::cin >> ch;
        switch(ch)
        {
            case 1:
            {
                std::cout << "Matrix A :\n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << a[i][j] << "\t";
                    }
                    std::cout << "\n";
                }
                std::cout << "Matrix B :\n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << b[i][j] << "\t";
                    }
                    std::cout << "\n";
                }
                break;
            }
            case 2:
            {
                std::cout << "\nSum of matrices A&B : \n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << a[i][j] + b[i][j] << "\t";
                    }
                    std::cout << "\n";
                }
                break;
            }
            case 3:
            {
                std::cout << "\nDifference of matrices A&B [A-B]: \n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << a[i][j] - b[i][j] << "\t";
                    }
                    std::cout << "\n";
                }
                break;
            }
            case 4:
            {
                std::cout << "\nMultiplication of A&B [A*B] : \n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        for(int k=0;k<n;k++)
                        {
                            c[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << c[i][j] << "\t";
                    }
                    std::cout << "\n";
                }
                break;
            }
            case 5:
            {
                std::cout << "\nTranspose of matrix A: \n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << a[j][i] << "\t";
                    }
                    std::cout << "\n";
                }
                std::cout << "\nTranspose of matrix B: \n";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        std::cout << b[j][i] << "\t";
                    }
                    std::cout << "\n";
                }
                break;
            }
            case 6:
            {
                std::cout << "\nGreatest number in matrix A: ";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        for(int k=0;k<n;k++)
                        {
                            if(a[i][j]>=a[0][0])
                            {
                                elm1 = a[i][j];
                            }
                        }
                    }
                }
                std::cout << elm1;
                std::cout << "\nGreatest number in matrix B: ";
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        for(int k=0;k<n;k++)
                        {
                            if(b[i][j]>=b[0][0])
                            {
                                elm2 = b[i][j];
                            }
                        }
                    }
                }
                std::cout << elm2;
                std::cout << "\n";
                break;
            }
            case 7:
            {
                int diag1=0,diag2=0;
                std::cout << "Sum of diagonal elements of matrix A : ";
                for(int i=0;i<n;i++)
                {
                    diag1 += a[i][i];
                }
                std::cout << diag1 << "\n";
                std::cout << "Sum of diagonal elements of matrix B : ";
                for(int i=0;i<n;i++)
                {
                    diag2 += b[i][i];
                }
                std::cout << diag2 << "\n";
                break;
            }
            case 8:
            {
                z++;
                break;
            }
            default:
            {
                std::cout << "\nInvalid!\n";
                break;
            }
        }
    }
    return 0;
}