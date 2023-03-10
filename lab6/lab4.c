#include <stdio.h>
#define BOARD_SIZE 8
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{   
    int arr[][BOARD_SIZE] = {
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        };

  
    int num = 0;
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        char text;
        int x,y;
        scanf("\n%c(%d, %d)",&text,&x,&y);
        setPieceOnTable(arr,text,(int)x,(int)y);

    }
    printf("------------------\n");
     printf("  0 1 2 3 4 5 6 7\n");
    for (int i = 0; i <8; i++)
    {
     

            printf("%d|", i);
            for (int j = 0; j < 8; j++)
            {
                printf("%c|", arr[i][j]);
            }
            printf("\n");
      
    }




}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos]= (int)piece;

}