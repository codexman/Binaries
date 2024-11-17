#include <stdio.h>

#define     Clear_S     "\033[2J\033[H"
#define     BIF_Grn     "\033[1;3;32m"
#define     BIF_Red     "\033[1;3;31m"
#define     BIF_Blu     "\033[1;3;34m"
#define     Reset_C     "\033[00m"
#define     TN          "\n\n"

int main(int argc, char** argv){
    printf("%s\n%sGoodBye%s, %sWorld!! %s<3%s%s",Clear_S,BIF_Grn,Reset_C,BIF_Blu,BIF_Red,Reset_C,TN);
    return 0;
}
