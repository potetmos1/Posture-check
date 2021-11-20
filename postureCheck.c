#include <windows.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>

//compile with "gcc -lwinmm  postureCheck.c -o postureCheck.exe" for windows

int main(int argc, char const *argv[])
{
    int low, high, time;

    printf("Write in the minumum amount of minutes:\n");
    scanf("%d", &low);

    printf("Write in the maximum amount of minutes:\n");
    scanf("%d", &high);

    while(1){
        time = low + (rand() % (high - low + 1));
        sleep(time * 60);
        printf("POSTURE CHECK!");
        PlaySound("posturecheck.wav", NULL, SND_ASYNC);
    }

    return 0;
}
