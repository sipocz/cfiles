#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int WHITE =FOREGROUND_RED+FOREGROUND_BLUE+FOREGROUND_GREEN;
int RED =FOREGROUND_RED+FOREGROUND_INTENSITY;

void printoframe(char st[]){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    int diffi=18;
    int a=strlen(st);
    int keret=a+2*diffi;

    printf("\n%c",218);
    for(int i=0; i<keret;i+=1){
        printf("%c",196);
    }
    printf("%c\n%c",191,179);
    for(int i=0; i<diffi;i+=1){
        printf(" ");
    }
    SetConsoleTextAttribute(hConsole, RED);
    printf(st);
    SetConsoleTextAttribute(hConsole, WHITE);
    for(int i=0; i<diffi;i+=1){
        printf(" ");
    }
    printf("%c\n%c",179,192);
    for(int i=0; i<keret;i+=1){
        printf("%c",196);
    }
    printf("%c\n",217);

}



int main()


{


    printf("Hello world!\n");
    int a;

    printoframe("Abrakadabrag gdsgdsg dsgsdg ");
    return 0;
}
