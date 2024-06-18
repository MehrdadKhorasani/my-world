#include <stdio.h>

void level_one(player_choose){
    printf("\nyour ");
    puts(player_choose);
    printf("lefts you... \n");
}

int main(){
    const char *arr[] = {"your dad's gun", "your favorite book", "one of your friends"};
    int choose;
    // START OF THE GAME
    printf("hello and welcome to my world.\n");
    printf("before you start, I let you take one of your things and bring it to the game ... \n\n");
    printf("what would you choose?\n");
    for (int i = 0; i <= 2; i++){
        printf("%d ", i);
        puts(arr[i]);
    };

    scanf("%d", &choose);
    printf("\nYou chose %s. I hope it will be handful.\n", arr[choose]);
    printf("OK! Let's start the journey.");
    level_one(arr[choose]);
    return 0;
}
