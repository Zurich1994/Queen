#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int board[8][8],count;
void putQueen(int ithqueen)
{
     int i,k,r;
     if(ithqueen==8)
     {
        count++;
         return;
      }
      for(i=0;i<8;i++)
      {
        if(board[i][ithqueen]==-1)
        {
          board[i][ithqueen]=ithqueen;
          for(k=0;k<8;k++)
           for(r=0;r<8;r++)
            if(board[k][r]==-1&&(k==i||r==ithqueen||abs (k-i)==abs (r-ithqueen)))
              board[k][r]=ithqueen;
          putQueen(ithqueen+1);
          for(k=0;k<8;k++)
           for(r=0;r<8;r++)
            if(board[k][r]==ithqueen)
             board[k][r]=-1;
        }
      }
}
int main()
{
    int i,j;
    count=0;
    for(i=0;i<8;i++)
     for(j=0;j<8;j++)
      board[i][j]=-1;
    putQueen(0);
    printf("%d\n",count);
system("pause");
}         
