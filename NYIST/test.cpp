#include <stdio.h>
#include <string.h>
#define MAX 1010
int a[MAX],b[MAX],c[MAX],sum[MAX];
void init(int x,int *a)
{
    int i=0;
    while(x)
    {
        a[i++]=x%10;
        x/=10;
    }
}
int main()
{
    int aa,bb,cc;
    while(scanf("%d %d %d",&aa,&bb,&cc)!=EOF)
    {
        int i,j,t;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        init(aa,a);init(bb,b);init(cc,c);
        /*if(aa==0&&bb==0&&cc==0)
        {
            printf("0\n");
            continue;
        }*/
        //for(i=0;i<10;i++)
        //printf("%d %d %d ",a[i],b[i],c[i]);
        for(i=3;i<=99;i++)
        {
            memset(sum,0,sizeof(sum));
            for(j=0;j<MAX;j++)
            {
                sum[j]+=(a[j]+b[j]+c[j]);
                if(sum[j]>9)
                {
                    t=sum[j];
                    sum[j]=t%10;
                    sum[j+1]=t/10;
                }
            }
            for(j=0;j<MAX;j++)
            {
                a[j]=b[j];
                b[j]=c[j];
                c[j]=sum[j];
            }
        }
        for(j=MAX-1;j>0&&sum[j]==0;j--);
        for(;j>=0;j--)
        printf("%d",sum[j]);
        printf("\n");
    }
    return 0;
}

