#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    int n = a-1;
    int count = 1;
    for(int i=0;i<a;i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf(" ");
        }
        n--;
        for (int k=0; k<count;k++)
        {
            printf("*");
        }
        printf("\n");
        count +=2;
    }
}
