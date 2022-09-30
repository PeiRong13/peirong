#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
  
int main(void)  
{  
    char a[1000];  
    scanf("%s",a);  
    int i;  
    for(i=0;i<strlen(a);i++)  
    {  
        if(isupper(a[i]))  
        {  
            a[i] = tolower(a[i]);  
        }  
        else  
        {  
            a[i] = toupper(a[i]);  
        }  
    }  
    printf("%s\n",a);  
    return 0;  
}  

