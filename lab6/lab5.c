#include <stdio.h>
#define BOARD_SIZE  8
void bishopMoves(int arr[][ BOARD_SIZE],int xPos,int yPos);
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
            int x, y;
      printf("Enter Bishop's X Y position: ");      
    scanf("\n%d %d", &x, &y);
    bishopMoves(arr, x, y);
    printf("  0 1 2 3 4 5 6 7\n");
    for (int i = 1; i <= 17; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d|", i / 2 - 1);
            for (int j = 0; j <  BOARD_SIZE; j++)
            {
                printf("%c|", arr[i / 2 - 1][j]);
            }
            printf("\n");
        }
        else
        {
            printf("------------------\n");
        }
    }

return 0;

}
void bishopMoves(int arr[][ BOARD_SIZE],int xPos,int yPos){



   for(int i =0 ; i<BOARD_SIZE;i++){
    if(yPos-i >=0&&xPos-i >=0){
        arr[yPos-i][xPos-i] ='X';
    }
    if(yPos-i >=0&&xPos+i < BOARD_SIZE){
        arr[yPos-i][xPos+i] ='X';
    }
     if(yPos+i < BOARD_SIZE&&xPos-i >=0){
        arr[yPos+i][xPos-i] ='X';
    }
     if(yPos+i < BOARD_SIZE&&xPos+i < BOARD_SIZE){
        arr[yPos+i][xPos+i] ='X';
    }
   }
      arr[yPos][xPos] = 'B';

}