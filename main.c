#include <stdio.h>

void level_one(const char *player_choose){
   if(strcmp(player_choose, "your dad's gun") == 0){
        printf("1\n");
    } else if(strcmp(player_choose, "your favorite book") == 0){
        printf("2\n");
    } else if(strcmp(player_choose, "one of your friends") == 0){
        printf("3\n");
    }
}

int main(){
    const char *arr[] = {"your dad's gun", "your favorite book", "one of your friends"};
    int choose;
    // START OF THE GAME
    printf("hello and welcome to my world.\n");
    printf("before you start, I let you take one of your things and bring it to the game ... \n\n");
    printf("what would you choose?\n");
    for (int i = 0; i <= 2; i++){
        printf("%d ", i + 1);
        puts(arr[i]);
    };

    scanf("%d", &choose);
    printf("\nYou chose %s. I hope it will be handful.\n", arr[choose]);
    printf("OK! Let's start the journey.");
    level_one(arr[choose]);
    return 0;
}
