#include<iostream>
#include<stdlib.h>
char player1;
char player2;
int x=0;
using namespace std;
char board[]={'.','.','.','.','.','.','.','.','.'};
void printboard(){
    cout<<board[0]<<" "<<board[1]<<" "<<board[2]<<endl;
        cout<<board[3]<<" "<<board[4]<<" "<<board[5]<<endl;
    cout<<board[6]<<" "<<board[7]<<" "<<board[8]<<endl;

}
int checkwin(){
    if(board[0]==board[1]&&board[0]==board[2]&&board[2]=='X'){
        return 1;
    }
    if(board[3]==board[4]&&board[3]==board[5]&&board[5]=='X'){
        return 1;
    }
    if(board[6]==board[7]&&board[6]==board[8]&&board[8]=='X'){
        return 1;
    }
    if(board[0]==board[3]&&board[0]==board[6]&&board[6]=='X'){
        return 1;
    }
    if(board[1]==board[4]&&board[1]==board[7]&&board[7]=='X'){
        return 1;
    }
    if(board[2]==board[5]&&board[2]==board[8]&&board[8]=='X'){
        return 1;
    }
    if(board[0]==board[4]&&board[0]==board[8]&&board[8]=='X'){
        return 1;
    }
    if(board[2]==board[4]&&board[2]==board[6]&&board[6]=='X'){
        return 1;
    }
   
   if(board[0]==board[1]&&board[0]==board[2]&&board[2]=='O'){
        return 0;
    }
    if(board[3]==board[4]&&board[3]==board[5]&&board[5]=='O'){
        return 0;
    }
    if(board[6]==board[7]&&board[6]==board[8]&&board[8]=='O'){
        return 0;
    }
    if(board[0]==board[3]&&board[0]==board[6]&&board[6]=='O'){
        return 0;
    }
    if(board[1]==board[4]&&board[1]==board[7]&&board[7]=='O'){
        return 0;
    }
    if(board[2]==board[5]&&board[2]==board[8]&&board[8]=='O'){
        return 0;
    }
    if(board[0]==board[4]&&board[0]==board[8]&&board[8]=='O'){
        return 0;
    }
    if(board[2]==board[4]&&board[2]==board[6]&&board[6]=='O'){
        return 0;
    }
    
    for(int i=0;i<9;i++){
        if(board[i]=='X'|| board[i]=='O'){
           x=1;
        }
    }
    
    
}

void playersturn(char ch,int position){
    
if(ch=='X'){
    if(position>=1||position<=9){
    if(board[position-1]!='X'&&board[position-1]!='O'){
        board[position-1]='X';
    }}
}
else if(ch=='O'){
     if(position>=1||position<=9){
    if(board[position-1]!='X'&&board[position-1]!='O'){
        board[position-1]='O';
    }}
}
else if(ch==' '){
     cout<<"Please enter the chracter that is assign to you !! your chance is now skip \n";

}
else {cout<<"please enter a valid character\n";
cout<<"your chance is now skip!!\n";} 
if(checkwin()==1){
    cout<<player1<<" "<<"wins!!"; 
    exit(0);}
    if(checkwin()==0){
    cout<<player2<<" "<<"wins!!";
    exit(0);}
    if(x==0){
        cout<<"game is draw!!\n";
        exit(0);
    }
printboard();

}

int main(){
    int position;
    char ch;
    cout<<"tic tac toe has started\n";
    cout<<"player 1 enter your initials\n";
    cin>>player1;
    cout<<"player 2 enter your initials\n";
    cin>>player2;
cout<<player1<<" will enter X first ";
cout<<"then "<<player2<<" will enter O\n\n";
 printboard();
while(1){
   
    cout<<player1<<"please ener X and enter position \n";
cin>>ch>>position;
if(ch=='O'){
   
ch=' ';
}
playersturn(ch,position);

 cout<<player2<<"please ener O and enter position \n";
cin>>ch>>position;
if(ch=='X'){
ch==' ';
}
playersturn(ch,position);

    


}
}
