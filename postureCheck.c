#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//compile with "gcc -lwinmm  postureCheck.c -o postureCheck.exe" for windows

int main(int argc, char const *argv[])
{
    int low, high, time;

    printf("Write in the minumum amount of minutes:\n");
    scanf("%d", &low);

    printf("Write in the maximum amount of minutes:\n");
    scanf("%d", &high);

    while(1) {
        time = low + (rand() % (high - low + 1));
        sleep(time * 60);
        printf("POSTURE CHECK!");
        system("vlc posturecheck.wav --qt-start-minimized vlc://quit");
    }

    return 0;
}
