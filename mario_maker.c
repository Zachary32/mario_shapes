#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> // for the toupper function

int stairs(){  // one large function that asks all the questions then prints them out after
    int down_s;
    char ch; 
    int down_s_floor;
    int up_s;
    int up_s_floor;
    int pyramid;
    int py_floor;
    int pipe;
    int floor;

    //down stairs
    do{
        printf("For the down stairs \n");
        printf("Enter an integer for the height of the stairs going down you would like to make between 2 - 10\n");
        scanf("%d", &down_s);
        if (down_s !=1 || down_s <2 || down_s > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(down_s < 2 || down_s > 10);

    int newline = down_s - 1; // initilaised new line var to help with the flooring at the end of the loop.
    do{
    printf("For the down stairs \n");
    printf("Please enter int between 1-10 of how much flooring you would like at the bottom of the stairs\n");
    scanf("%d", &down_s_floor);
    if (down_s_floor !=1 || down_s_floor <1 || down_s_floor > 10){
        while ((ch =getchar() != '\n'));
        continue;
    };
    }while(down_s_floor < 1 || down_s_floor> 10);
    //end of questions for down stairs

    //pyramid
    do{
        printf("For the pyramid \n");
        printf("Enter an integer for the height of a pyramid you would like to make between 3 - 10\n");
        scanf("%d", &pyramid);
        if (pyramid !=1 || pyramid <3 || pyramid > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(pyramid < 3 || pyramid > 10);

    int newline_py = pyramid -1; // initilaised new line var to help with the flooring at the end of the loop.
    
    do{
        printf("For the pyramid \n");
        printf("Please enter int between 1-10 of how much flooring you would like \n");
        scanf("%d", &py_floor);
        if (py_floor !=1 || py_floor <1 || py_floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(py_floor < 1 || py_floor> 10);
    // end of pyramid questions
    // pipe questions 

    do {
        printf("For the Pipe \n");
        printf("Enter an integer for the height of a pipe you would like to make between 1-6 \n");
        scanf("%d", &pipe);
        if (pipe !=1 || pipe < 1 || pipe > 6){
            while ((ch = getchar()) !='\n'); // so this makes sure the char is not equal to a new line and now ignores letters as well as numbers outside of the range
            continue;
        };
    } while(pipe < 1 || pipe > 6);

    do {
        printf("For the Pipe \n");
        printf("enter int of how many tiles of flooring you would like after the pipe, the number must be between 1-10 \n");
        scanf("%d", &floor);
        if (floor !=1 || floor <1 || floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(floor < 1 || floor > 10);
    //end of pipe questions

    //up stairs questions

    do{
        printf("For the up stairs \n");
        printf("Enter an integer for the height of the stairs you would like to make between 2 - 10\n");
        scanf("%d", &up_s);
        if (up_s !=1 || up_s <2 || up_s > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(up_s < 2 || up_s > 10);

    do{
        printf("For the up stairs \n");
        printf("Please enter int between 1-10 of how much flooring you would like \n");
        scanf("%d", &up_s_floor);
        if (up_s_floor !=1 || up_s_floor <1 || up_s_floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
    };
    }while(up_s_floor < 1 || up_s_floor> 10);
    // end of up stairs questions

    //output of down stair


    for(int i = 0; i < down_s; i++) 
    {   
        printf("__\n");
        for(int j = 0; j <= i; j++){
            printf(" ");
            printf("|");
        };

        if (i == newline) {
        for(int k = 0; k < down_s_floor;k++){
        printf("_");
        };
        }
    };
    printf("__");
    //end of output for  down stairs

    printf("\n");

    //pyramid output
    for(int i = 0; i < pyramid; i++) 
    {    
        for(int s = 0; s < pyramid - i; s++){
            printf("  ");     
        };
        for(int j = 0; j < i ; j++){
            printf("__");
            printf(" ");
            printf("|");
        };
        printf("__");
        if (i == newline_py) {
            for(int k = 0; k < py_floor;k++){
            printf("_");
            };
        }
        printf("\n");
    }
    // end of pyramid output

    printf("\n");

    // pipe output
    printf("======\n======\n");
    for(int i = 0; i < pipe; i++){
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
        printf("=");
        i++;
    }
    //end of pipe output
    printf("\n");
    //up stairs output
    for(int i = -1; i < up_s; i++)  //-1 to add an extra iteration due to add an extra loop to make one taller as the floor to make the count right as up_s_floor would take one otherwise
    {   
        for(int s = 0; s < up_s - i; s++){
            printf("  ");   
        };  
        printf("__");
        if(i != -1){ // if not equal to first iteration then print "|" to create the stairs down 
            printf("|");
        }
        if (i == -1) { // checking if set to first line / iteration then print the floor
            for(int k = 0; k < up_s_floor;k++){
            printf("_");
            };
        }  
        printf("\n");
    };
    // end of up stairs output
    printf("\n");
    // flag
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


int down_stairs()
{
    int down_s;
    char ch; 
    char ans;
    int down_s_floor;
    do{
        printf("If you would like to add stairs that go downwards please type Y or N: \n"); // checking if would like to add the pipe with error checking loop
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

    int newline = down_s - 1; // initilaised new line var to help with the flooring at the end of the loop.
    do{
    printf("Please enter int between 1-10 of how much flooring you would like to go after the stairs \n");
    scanf("%d", &down_s_floor);
    if (down_s_floor !=1 || down_s_floor <1 || down_s_floor > 10){
        while ((ch =getchar() != '\n'));
        continue;
    };
    }while(down_s_floor < 1 || down_s_floor> 10);

    
    for(int i = 0; i < down_s; i++) 
    {   
        printf("__\n");
        for(int j = 0; j <= i; j++){
            printf(" ");
            printf("|");
        };

        if (i == newline) {
        for(int k = 0; k < down_s_floor;k++){
        printf("_");
        };
        }
    };

    printf("__");
    printf("\n");
};

int up_stairs ()
{
    int up_s;
    char ch;
    char ans;
    int up_s_floor;
    do{
        printf("If you would like to add a stairs the go up please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
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

    int newline = up_s -1; // initilaised lew line var to help with the flooring at the end of the loop.

    do{
        printf("Please enter int between 1-10 of how much flooring you would like to go after the stairs \n");
        scanf("%d", &up_s_floor);
        if (up_s_floor !=1 || up_s_floor <1 || up_s_floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
    };
    }while(up_s_floor < 1 || up_s_floor> 10);

    for(int i = -1; i < up_s; i++)  //-1 to add an extra iteration due to add an extra loop to make one taller as the floor to make the count right as up_s_floor would take one otherwise
    {   
        for(int s = 0; s < up_s - i; s++){
            printf("  ");   
        };  
        printf("__");
        if(i != -1){ // if not equal to first iteration then print "|" to create the stairs down 
            printf("|");
        }
        if (i == -1) { // checking if set to first line / iteration then print the floor
                for(int k = 0; k < up_s_floor;k++){
                printf("_");
                };
        }  
        printf("\n");
    };
};  
int full_pyramid ()
{
    int pyramid;
    char ch;
    char ans;
    int py_floor;
    do{
        printf("If you would like to add a pyramid please type Y or N: \n"); // checking if would like to add the pipe with error checking loop
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
        printf("Enter an integer for the height of a pyramid you would like to make between 3 - 10\n");
        scanf("%d", &pyramid);
        if (pyramid !=1 || pyramid <3 || pyramid > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(pyramid < 3 || pyramid > 10);

    int newline = pyramid -1; // initilaised new line var to help with the flooring at the end of the loop.
    
    do{
        printf("Please enter int between 1-10 of how much flooring you would like to go after the pyramid \n");
        scanf("%d", &py_floor);
        if (py_floor !=1 || py_floor <1 || py_floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(py_floor < 1 || py_floor> 10);

    
    for(int i = 0; i < pyramid; i++) 
    {    
        for(int s = 0; s < pyramid - i; s++){
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
            printf("_");
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
        printf("Enter int of how many tiles of flooring you would like after the pipe, the number must be between 1-10 \n");
        scanf("%d", &floor);
        if (floor !=1 || floor <1 || floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(floor < 1 || floor > 10);
    printf("======\n======\n");
    for(int i = 0; i < pipe; i++){

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
        printf("=");
        i++;
    }
};


int flag(){
    printf("\n");
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
    // stairs(); // one large function that asks all the questions then prints them out after 
    
    down_stairs();
    
    up_stairs();

    full_pyramid();
    
    big_pipe();

    flag(); // automatically prints a flag to mark the end

    return 0;
};