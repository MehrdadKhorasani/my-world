#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "stage1.c"


void introduce(char name[])
{
    puts("This is my world. and now you are in here.");
    puts("Oh what a misbehaved person could I be ... to didn't know your name all this time.");
    puts("My bad ... What is your little and beauty name?");
    printf("__: ");
    scanf("%s", name);
    printf("Okay %s. I let you choose to grab just on of these items. which do you want? \n", name);
}

int main()
{
    char name[25]; 
    char *items[3] = {"letter from an old love", "The spoon you scraped the wall with", "A piece of rotten cheese left over from a long time ago"};
    for(int i = 0; i < 3 ; i++)
    {
        printf("%s", items[i]);
    }
    introduce(name);
    sleep(2);
    puts("it after 5 seconds");
    printf("%s", name);

    return 0;
}