#include<stdio.h>

int oddNumbers(int n)
{
    for(int i = 1 ; i <= n ; i++){
        if(i %2 != 0){
            printf("%d\n",i);
        }
    }
}
int main()
{
    int x ;
    scanf("%d", &x);
    oddNumbers(x);
}


