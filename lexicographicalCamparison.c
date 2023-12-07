#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];

    scanf("%s %s",a,b);

    // logically solve korci
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Same\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A choto\n");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("B choto\n");
            break;
        }

        if(a[i]==b[i])
        {
            i++;
        }        
        else if(a[i]<b[i])
        {
            printf("A choto\n");
            break;
        }
        else
        {
            printf("B choto\n");
            break;
        }
    }

    // build in function
    int value = strcmp(a, b);

    if(value < 0){
        printf("A is smaller\n");
    }else if (value > 0)
    {
        printf("B is smaller\n");
    }else{
        printf("Same\n");
    }
    
    // value > 0 mean b is small; 0 mean both are equal; value < 0 mean a is small.

    return 0;
}