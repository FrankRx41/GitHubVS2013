#include <stdio.h>
#include <windows.h>

#define debug(x)    printf("%s(%d): "#x" = %08X\n",__FUNCTION__,__LINE__,x)
/*******************************************************************************
printf("Text123456\n");
*******************************************************************************/

int main(){
    int x = 1;
    printf("hello World\n");
    debug(x);
    return 0;
}