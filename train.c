#include<stdio.h>
#include<string.h>
void main()
{
    int t,l,i,j,k,temp;
    scanf("%d",&t);
    int a[100];
    char s[100];
    for(i=0;i<t;i++)
    {   
         
        scanf("%s",s);
        l=strlen(s);
        for(j=0;s[j];j++)
        {
            a[j]=(int)s[j]-48;
        }
        for(i=0;i<l;i++)
        {
            for(k=0;k<l-i-1;k++)
            {
              if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        for(j=0;j<l-1;j++)
        {
            if(a[j]+1!=a[j+1])
            break;
        }
        if(j==l-1)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
