#include<stdio.h>
#include<stdlib.h>
char tab[3][3]={'1','2','3','4','5','6','7','8','9'};
char turn = 'X';
int row,column;
bool draw=false;
void display_table()
{
	system("cls");
	printf("\t\tTICK CROSS GAME	\n\n");
	printf("\tPlayer1 [X]\n\tPlayer2 [O]\n\n");
	printf("\t\t   %c \t|   %c \t|   %c\n",tab[0][0],tab[0][1],tab[0][2]);
	printf("\t\t________|_______|_______\n");
	printf("\t\t   %c \t|   %c \t|   %c\n",tab[1][0],tab[1][1],tab[1][2]);
	printf("\t\t________|_______|_______\n");
	printf("\t\t   %c \t|   %c \t|   %c\n",tab[2][0],tab[2][1],tab[2][2]);
	
}
void player_turn()
{
	int choice;
	if(turn == 'X')
 printf("\n\t Player1 [X] turn : ");
 	if(turn == 'O')
 printf("\n\t Player1 [O] turn : ");
	 scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		row=0; column=0;
		break;
		case 2:
		row=0; column=1;
			break;
		case 3:
		row=0; column=2;
			break;
		case 4:
		row=1; column=0;
			break;
		case 5:
		row=1; column=1;
			break;
		case 6:
		row=1; column=2;
			break;
		case 7:
		row=2; column=0;
			break;
		case 8:
		row=2; column=1;
			break;
		case 9:
		row=2; column=2;
			break;
		default:
		printf("\n wrong input\n");
	}
	if(turn == 'X' && tab[row][column]!='X' && tab[row][column]!='O')
	{
		tab[row][column]='X';
		turn='O';
	}
	else if(turn == 'O' && tab[row][column]!='X' && tab[row][column]!='O')
	{
		tab[row][column]='O';
		turn='X';
	}
	else{
		printf("BOX already filled! \n please try again!!\n\n");
		player_turn();
	}
	display_table();
}
bool game_over()
{
//check win
for(int i=0;i<3;i++)
{
	if((tab[i][0]==tab[i][1] && tab[i][0]==tab[i][2]) || (tab[0][i]==tab[1][i] && tab[0][i]==tab[2][i]))
	return false;
	if((tab[0][0]==tab[1][1] && tab[0][0]==tab[2][2]) || (tab[0][2]==tab[1][1] && tab[0][2]==tab[2][0]))
	return false;
	//if there is any box not filled
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	if(tab[i][j]!='X' && tab[i][j]!='O')
	return true;
	//draw
	draw=true;
	return false;
}	
}
main()
{
while(game_over())
{	
	printf("\n\n\n");
	display_table();
	player_turn();
	game_over();
}
if(turn =='X' && draw==false)
printf("player2 [O] WINS!! congratulations\n");
else if(turn =='O' && draw==false)
printf("player1 [X] WINS!! congratulations");
else
printf("GAME DRAW!!\n");
}

