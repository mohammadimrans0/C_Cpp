#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char a[n];
        scanf("%s", a);

        int p_cnt = 0;
        int t_cnt = 0;

        for (int i = 0; i < n;i++){
            if(a[i] == 'P'){
                p_cnt++;
            }else if (a[i] == 'T')
            {
                t_cnt++;
            }
            
        }

        if(p_cnt > t_cnt){
            printf("Pathaan\n");
        }else if (t_cnt> p_cnt)
        {
            printf("Tiger\n");
        }else if(p_cnt == t_cnt){
            printf("Draw\n");
        }
        
    }
    
    return 0;
}