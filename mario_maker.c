#include <stdlib.h>
#include <stdio.h>


int down_stairs (int down_s)
{
    for(int i = 0; i < down_s; i++) 
    {   
        printf("__\n");
        for(int j = 0; j <= i; j++){
            printf(" ");
            printf("|");
        };
    };
    printf("__");
};

int up_stairs (int up_s)
{
    for(int i = 0; i < up_s; i++) 
    {   
        for(int s = 0; s < up_s - i; s++){
            printf("  ");       
        };
        printf("__");
        printf("|");
        printf("\n");
    };
};  

int full_pyrimid (int pyrimid)
{
    for(int i = 0; i <= pyrimid; i++) 
    {    
        for(int s = 0; s < pyrimid - i; s++){
            printf("  ");     
        };
        for(int j = 0; j < i ; j++){
            printf("__");
            printf(" ");
            printf("|");
        };
        printf("__\n");
    };
};  


int main(void)
{
    int down_s;
    printf("Enter an integer for the amount of stairs to go down: ");
    scanf("%d", &down_s);
    down_stairs(down_s);

    int up_s;
    printf("Enter an integer for the amount of stairs to go up");
    scanf("%d", &up_s);
    up_stairs(up_s);

    int pyrimid;
    printf("Enter an integer for the height of a pyrimid you would like to make");
    scanf("%d", &pyrimid);
    full_pyrimid(pyrimid);



    return 0;
};

