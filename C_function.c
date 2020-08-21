#include<stdlib.h>
#include<stdio.h>
void fun_prime(int n);
int main()
{
    system("cls");
    int n;
    printf("\nEnter number : ");
    scanf("%d",&n);
    fun_prime(n);
    system("pause");
	return 10;
}
void fun_prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\n%d is not a prime number.\n ",n);
            break;
        }
        else
        {
            printf("\n%d is a prime number. \n",n);
            break;
        }
}
}


