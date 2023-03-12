#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> // for the toupper function
#include <windows.h> // for the sleep funtion  for linux would need this #include<unistd.h>


int down_stairs()
{
    int down_s;
    char ch; 
    char ans;
    do{
        printf("If you would like to add stairs that go downwards please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
        scanf("%c", &ans);
        getchar();  // consume the newline character from the input buffer
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop\n");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no\n");
            return 0; // to exit early as this is not wanted
        }
        else {
            printf("Invalid input. Please enter Y or N.\n");
            getchar();
        }
    } while(toupper(ans) != 'Y');

    do{
        printf("Enter an integer for the height of the stairs going down you would like to make between 2 - 10\n");
        scanf("%d", &down_s);
        if (down_s !=1 || down_s <2 || down_s > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(down_s < 2 || down_s > 10);

    
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

int up_stairs ()
{
    int up_s;
    char ch;
    char ans;
    do{
        printf("If you would like to add a stairs please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
        scanf("%c", &ans);
        getchar();  // consume the newline character from the input buffer
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop\n");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no\n");
            return 0; // to exit early as this is not wanted
        }
        else {
            printf("Invalid input. Please enter Y or N.\n");
            getchar();
        }
    } while(toupper(ans) != 'Y');
    
    do{
        printf("Enter an integer for the height of the stairs you would like to make between 2 - 10\n");
        scanf("%d", &up_s);
        if (up_s !=1 || up_s <2 || up_s > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(up_s < 2 || up_s > 10);

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

int full_pyrimid ()
{
    int pyrimid;
    char ch;
    char ans;
    int py_floor;
    do{
        printf("If you would like to add a pyrimid please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
        scanf("%c", &ans);
        getchar();  // consume the newline character from the input buffer
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop\n");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no\n");
            return 0; // to exit early as this is not wanted
        }
        else {
            printf("Invalid input. Please enter Y or N.\n");
            getchar();
        }
    } while(toupper(ans) != 'Y');

    do{
        printf("Enter an integer for the height of a pyrimid you would like to make between 3 - 10\n");
        scanf("%d", &pyrimid);
        if (pyrimid !=1 || pyrimid <3 || pyrimid > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(pyrimid < 3 || pyrimid > 10);

    int newline = pyrimid -1; // initilaised lew line var to help with the flooring at the end of the loop.
    
    do{
        printf("please enter int bettween 1-10 of how much flooring you would like \n");
        scanf("%d", &py_floor);
        if (py_floor !=1 || py_floor <1 || py_floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(py_floor < 1 || py_floor> 10);

    
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
        printf("__");
        if (i == newline) {
            for(int k = 0; k < py_floor;k++){
            printf("=");
            };
        }
        printf("\n");
    };
};  

int big_pipe() {
    int pipe;
    char ch;
    char ans;
    int floor;
    do{
        printf("If you would like to add a pipe please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
        scanf("%c", &ans);
        getchar();  // consume the newline character from the input buffer
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop\n");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no\n");
            return 0; // to exit early as this is not wanted
        }
        else {
            printf("Invalid input. Please enter Y or N.\n");
            getchar();
        }
    } while(toupper(ans) != 'Y');

    do {
        printf("Enter an integer for the height of a pipe you would like to make between 1-6 \n");
        scanf("%d", &pipe);
        if (pipe !=1 || pipe < 1 || pipe > 6){
            while ((ch = getchar()) !='\n'); // so this makes sure the char is not equal to a new line and now ignores letters as well as numbers outside of the range
            continue;
        };
    } while(pipe < 1 || pipe > 6);

    do {
        printf("enter int of how many tiles of flooring you would like after the pipe, the number must be between 1-10 \n");
        scanf("%d", &floor);
        if (floor !=1 || floor <1 || floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(floor < 1 || floor > 10);
    printf("======\n======\n");
    for(int i = 0; i < pipe; i++){
        Sleep(1 * 1000);
        if( i == pipe - 1 ){
            printf("  ==");
        }
        else{
            printf("  ==  \n");    
        }
    }
    int i = 0;
    printf("=="); // this adds to the bottom line so before any folloowing is added it matches to the top of the pipe so it doesnt look too miss matched.
    while(i < floor)
    {
        Sleep(1 * 1000);// 1 second is equal to 1000 milliseconds and Sleep is calculated in milliseconds.
        printf("=");
        i++;
    }
};


int flag(){
    printf("   =\n");
    printf("   =====\n");
    printf("   ========\n");
    printf("   =====\n");
    printf("   =\n");
    printf("   =\n");
    printf("   =\n");
    printf("   =\n");
    printf("   =\n");
    printf("=======\n");
    printf("=======\n");
    printf(" =====\n");
};
int main(void)
{

    
    down_stairs();

    up_stairs();

    full_pyrimid();
    

    big_pipe();

    flag();

    return 0;
};

// still need to add floor for the other functions.