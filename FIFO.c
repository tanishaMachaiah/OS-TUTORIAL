#include<stdio.h>
int main()
{
    int i,j,n,a[50],frame[10],no,k,avail,count=0;
    printf("Enter the number of pages: ");
    scanf("%d",&n);
    printf("\nEnter the Reference string: ");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the number of page frames: ");
    scanf("%d",&no);
    for(i=0;i<no;i++)
            frame[i]= -1;
            j=0;
            printf("\n    Reference string\t\t   Page Frames  \t\n");
    for(i=1;i<=n;i++)
    {
        printf("|\t%d\t\t|",a[i]);
        avail=0;
        for(k=0;k<no;k++)
        if(frame[k]==a[i])
        {
            avail=1;
            for(k=0;k<no;k++)
            {
                printf("\t%d",frame[k]);
            }
            printf("\t| Hit");
        }
        if (avail==0)
        {
            frame[j]=a[i];
            j=(j+1)%no;
            count++;
            for(k=0;k<no;k++)
            {
                printf("\t%d",frame[k]);
            }
            printf("\t| Miss");
        }
        printf("\n");
    }
    printf("\nNo. of Page Fault = %d\n",count);
    printf("\nMiss ratio = %d/%d\n",count,n,count,n);
    printf("\nNo. of Hits = %d\n",n-count);
    printf("\nHit ratio = %d/%d\n",n-count,n,n-count,n);
    return 0;
}
