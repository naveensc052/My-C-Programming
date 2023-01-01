#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nums[100],n;
    printf("Enter the numbers : ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("%d %d",i,j);
                exit(1);
            }
        }
    }
    return 0;
}
