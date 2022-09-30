#include<stdio.h>  
int main(void)  
{  
    int a[10]={0};  
    int n;  
    int max=0;  
    while(scanf("%d",&n)&& n!=0)  
    {  
        a[n]++;  
    }  
  
    for(int i=1;i<10;i++)  
    {  
        if(a[i]>max)  
        {  
            max=a[i];  
        }  
    }  
    for(int i=1;i<10;i++)  
    {  
        if(a[i]==max)  
        {  
            printf("%d %d\n",i,a[i]);  
        }  
    }  
    return 0;  
}  

