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
    int floor;
    do{
        printf("If you would like to add a pipe please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
        getchar();  // consume the newline character from the input buffer
        scanf("%c", &ans);
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop\n");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no\n");
            return 0; // to exit early as this is not wanted
        }
        else {
            while ((ch = getchar()) != '\n' && ch != EOF); // also stops if multiple letters does not repeat printf for each letter.
        }
    } while(toupper(ans) != 'Y');

// still need to fix this

    do {
        printf("Enter an integer for the height of a pipe you would like to make");
        scanf("%d", &pipe);
        if (pipe !=1 || pipe < 1 || pipe > 6){
            while ((ch = getchar()) !='\n'); // so this makes sure the char is not equal to a new line and now ignores letters as well as numbers outside of the range
            continue;
        };
    } while(pipe < 1 || pipe > 6);

    do {
        printf("enter int of how mant tiles of flooring you would like after the pipe");
        scanf("%d", &floor);
    }while(floor < 1);

    printf("======\n======\n");
    for(int i = 0; i < pipe; i++){
        if( i == pipe - 1 ){
            printf("  ==");
        }
        else{
            printf("  ==  \n");    
        }
    }
    
    int z = 0;
    while(z < floor)
    {
        printf("_");
        z++;
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

