#include <stdio.h>
#include <stdlib.h>

int print_board(char board[3][3]){
    for(int i=0; i<3; i++){
        printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
        
        if(i<2) printf("---|---|---\n");
    }
}

int main(){    

    char plr, cpu;
    char pos[5];
    char board[3][3] = {" ", " ", " ",
                        " ", " ", " ",
                        " ", " ", " "};

    printf("Welcome to the Tic-Tac-Toe Game!\n");
    printf("Would you like to be X or O? ");
    scanf("%c", &plr);
    if(toupper(plr)!='X' || toupper(plr)!='O'){
        printf("Choose between 'X' or 'O', type again: ");
        scanf("%c", &plr);
    } 
    if(toupper(plr)=='X') cpu='O';
    else cpu='X';
    printf("You choosed: %c\nThe computer will be: %c\n", toupper(plr), cpu);

    printf("Now write a position in the board based on the matrix index (ex.: pos00 or pos11): ");
    scanf("%s", pos);
    for(int i=0; i<strlen(pos); i++){
        char beg[3] = "pos";
        if(pos[i]!=beg[i]){
            printf("The position should begin with 'pos', type again: ");
            scanf("%s", pos);
        }
        else if(pos[4]<48 || pos[4]>50 || pos[5]<48 || pos[5]>50){
            printf("The position should include only numbers from 0 to 2, type again: ");
            scanf("%s", pos);
        }
    }

    // print_board(board);
}