#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> // for the toupper function


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
    for(int i = 0; i < pyrimid; i++) 
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

int big_pipe() {
    int pipe;
    char ch;
    char ans;
    do{
        printf("If you would like to add a pipe please type Y or N");
        scanf("%c", &ans);
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no");
            return 0; // to exit early as this is not wanted
        }
        else{
            printf("please try again and enter with Y or N");
        }
    } while(toupper(ans) != 'Y');

    do {
        printf("Enter an integer for the height of a pipe you would like to make");
        scanf("%d", &pipe);
        if (pipe !=1 || pipe < 1 || pipe > 6){
            printf("type num between 1 - 6");
            while ((ch = getchar()) !='\n'); // so this makes sure the char is not equal to a new line and now ignores letters as well as numbers outside of the range
            printf("try again with numbers");
            continue;
        };
    } while(pipe < 1 || pipe > 6);

    printf("======\n======\n");
    for(int i = 0; i < pipe; i++){
        printf("  ==  \n");    
    }
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

    big_pipe();
    return 0;
};

