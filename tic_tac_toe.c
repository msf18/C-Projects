/* tic tac toe*/

#include<stdio.h>

void showBoard(char board[3][3])
{
	printf("\n\n");
	
	printf("\t\t\t %c | %c | %c \n", board[0][0],
							board[0][1], board[0][2]);
	printf("\t\t\t-----------\n");
	printf("\t\t\t %c | %c | %c \n", board[1][0],
							board[1][1], board[1][2]);
	printf("\t\t\t-----------\n");
	printf("\t\t\t %c | %c | %c \n\n", board[2][0],
							board[2][1], board[2][2]);

	return;
}

void firstDisplay()
{
	printf("\t\t\t Tic-Tac-Toe\n\n");
	printf("Choose a cell numbered from 1 to 9 as below"
			" and play\n\n");
	
	printf("\t\t\t 1 | 2 | 3 \n");
	printf("\t\t\t-----------\n");
	printf("\t\t\t 4 | 5 | 6 \n");
	printf("\t\t\t-----------\n");
	printf("\t\t\t 7 | 8 | 9 \n\n");
	
	printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n\n");

	return;
}
int row(char b[3][3],int i){// check if row combination has been formed
	if(b[i][0]==b[i][1] && b[i][1]==b[i][2]/* && b[i][0]==b[i][2]*/){
		//printf("r\n");
		return 1;}
	else return 0;
}

int column(char b[3][3],int j){//check if column combination has been formed
	if(b[0][j]==b[1][j] && b[1][j]==b[2][j]/* && b[i][0]==b[i][2]*/){
		//printf("c\n");
		return 1;}
	else return 0;
}

int diagonal(char b[3][3],int n){
	if(n==1||n==5||n==9){//check primary diagonal
		if(b[0][0]==b[1][1] && b[1][1]==b[2][2]/* && b[i][0]==b[i][2]*/)
		{
			//printf("d1\n");
			return 1;
		}
		else return 0;
	}
	if(n==3||n==5||n==7){//check secondary diagonal
	 if(b[0][2]==b[1][1] && b[1][1]==b[2][0]){
	 	//printf("d2\n");
		return 1;
	}
	else return 0;
	}			
	
}
	
int setvalue(char b[3][3],int n,int p){
	int i,j;
	if(n==1 ||n==2 ||n==3){//first row
		i=0;
		j=n-1;
	}
	else if(n==4 ||n==5 ||n==6){//second row
		i=1;
		j=n-3-1;
	}
	else if(n==7 ||n==8 ||n==9){//third row
		i=2;
		j=n-6-1;
	}
	if(p==1)
		b[i][j]='X';
	else
		b[i][j]='O';
	//ckeck for winner
	if(row(b,i)||column(b,j)){
		//printf("r-c\n");
		return 1;}
	else if(n==3 ||n==5 ||n==7 ||n==1||n==9){
		if(diagonal(b,n)){
			//printf("dd\n");
		return 1;}}
		
	else return 0;
}
int checkvalue(char b[3][3],int n){
		int i,j;
	if(n==1 ||n==2 ||n==3){
		i=0;
		j=n-1;
	}
	else if(n==4 ||n==5 ||n==6){
		i=1;
		j=n-3-1;
	}
	else if(n==7 ||n==8 ||n==9){
		i=2;
		j=n-6-1;
	}
	if(b[i][j]=='X' || b[i][j]=='O')//if value has already been set
	return 0;
	else return 1;
}
void main(){
	char board[3][3]={0};
	int i,j,n=1,k=0,p,val,ch=0;
	firstDisplay();//empty board to be displayed
	while(n<=9){
	do{	
		if(n%2){
		printf("Player %d enter value:",(n%2));//player 1
		scanf("%d",&val);
		p=1;
	}
		else{
		printf("Player %d enter value:",(n%2)+2);//player 2
		scanf("%d",&val);
		p=2;
	}
	ch=checkvalue(board,val);
	if(ch==0)
		printf("Enter value at different position!!\n");
	}while(ch==0);	
	k=setvalue(board,val,p);//enter X or O on the board
	showBoard(board);// display board
	if(k==1){
		printf("Player %d wins!!",p);
		break;
	}
	n++;
}
	if(k==0){
		printf("Tie!!");
	}		
}
