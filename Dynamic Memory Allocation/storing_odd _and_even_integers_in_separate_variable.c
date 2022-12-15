#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr,*ptr2,*ptr3,k=0,l=0;
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    ptr2 = (int*) malloc(n*sizeof(int));
    ptr3 = (int*) malloc(n*sizeof(int));
    printf("Enter n elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)%2==1)
        {
            *(ptr2+k) = *(ptr+i);
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)%2==0)
        {
            *(ptr3+l) = *(ptr+i);
            l++;
        }
    }
    printf("odd numbers\n");
    for(int i=0;i<k;i++)
    {
        printf("%d\n",*(ptr2+i));
    }
    printf("even numbers\n");
    for(int i=0;i<l;i++)
    {
        printf("%d\n",*(ptr3+i));
    }
}
