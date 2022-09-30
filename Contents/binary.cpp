#include<stdio.h>  
int main(void)  
{  
    int n,arr[1000];  
    while(scanf("%d",&n))  
    {  
        if(n==0)  
        {  
            break;  
        }  
        if(n>0)  
        {  
            int count=0;  
            while(n!=0)  
            {  
                arr[count]=n%2;  
                n=n/2;  
                count++;  
            }  
            for(int i=count-1;i>=0;i--)  
            {  
                printf("%d",arr[i]);  
            }  
            printf("\n");  
        }  
        if(n<0)  
        {  
            printf("%s","Please input a positive number\n");  
        }  
    }  
    return 0;  
}  

