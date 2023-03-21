#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> // for the toupper function
#include <windows.h> // for the sleep funtion  for linux would need this #include<unistd.h>

int stairs(){
    int down_s;
    char ch; 
    char ans;
    int down_s_floor;
    int up_s;
    //char ch;
    //char ans;
    int up_s_floor;
    int pyrimid;
    int py_floor;
    int pipe;
    //char ch;
    //char ans;
    int floor;

    //down stairs
    do{
        printf("If you would like to add stairs that go downwards please type Y or N: \n"); // checking if would like to add the pipe  with error checking loop
        scanf("%c", &ans);
        getchar();  // consume the newline character from the input buffer
        if (toupper(ans) == 'Y'){
            printf("This should now take you to the next part of the loop\n");
        }
        else if (toupper(ans) == 'N'){
            printf("you have selected no\n");
           return 0;
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
    printf("please enter int bettween 1-10 of how much flooring you would like \n");
    scanf("%d", &down_s_floor);
    if (down_s_floor !=1 || down_s_floor <1 || down_s_floor > 10){
        while ((ch =getchar() != '\n'));
        continue;
    };
    }while(down_s_floor < 1 || down_s_floor> 10);
    //end of questions for down stairs

    //pyrimid
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

    int newline_py = pyrimid -1; // initilaised new line var to help with the flooring at the end of the loop.
    
    do{
        printf("please enter int bettween 1-10 of how much flooring you would like \n");
        scanf("%d", &py_floor);
        if (py_floor !=1 || py_floor <1 || py_floor > 10){
            while ((ch =getchar() != '\n'));
            continue;
        };
    }while(py_floor < 1 || py_floor> 10);
    // end of pyrimid questions
    // pipe questions 
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
    //end of pipe questions

    //up stairs questions
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

    do{
        printf("please enter int bettween 1-10 of how much flooring you would like \n");
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

    //pyrimid output
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
        if (i == newline_py) {
            for(int k = 0; k < py_floor;k++){
            printf("_");
            };
        }
        printf("\n");
    }
    // end of pyrimid output

    printf("\n");

    // pipe output
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
        Sleep(1000);
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

    int newline = down_s - 1; // initilaised new line var to help with the flooring at the end of the loop.
    do{
    printf("please enter int bettween 1-10 of how much flooring you would like \n");
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
};

int up_stairs ()
{
    int up_s;
    char ch;
    char ans;
    int up_s_floor;
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

    int newline = up_s -1; // initilaised lew line var to help with the flooring at the end of the loop.

    do{
        printf("please enter int bettween 1-10 of how much flooring you would like \n");
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
        Sleep(1000);
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

    int newline = pyrimid -1; // initilaised new line var to help with the flooring at the end of the loop.
    
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
   // down_stairs();

   // up_stairs();

    stairs();

   // full_pyrimid();
    

   // big_pipe();

    //flag();

    return 0;
};

// still need to add floor for the other functions.