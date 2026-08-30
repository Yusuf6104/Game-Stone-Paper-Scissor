#include<iostream>
#include<string>
using namespace std;
int main(){
    //#Initializing my game players 
    string Player1,Player2;
    //Taking inpuit of players moves who are playing the game.
    cout<<"Player1\n";
    cin>>Player1;
    cout<<"Player2\n";
    cin>>Player2;
    //#Here i use if  statement make my project for player1 and player2 
    if ((Player1 == "stone" && Player2 =="scissor") ||//Here the conditions to win player1 or moves choosen by player to win.
        (Player1 == "scissor" && Player2 == "paper") ||
        (Player1 == "paper" && Player2 =="stone")) {
             cout <<"winner is player1  : "<<Player1<<endl;
            }
    else if ((Player2 == "stone" && Player1 =="scissor") ||//Here the condition to win player2 or move choosen by player to win. 
        (Player2 == "scissor" && Player1 == "paper") ||
        (Player2 == "paper" && Player1 =="stone")){
            cout<<"winner is player2 : "<<Player2<<endl;
        }  
     //Here both players are choosing same moves.So, results is tie.   
    else{
        cout<<"tie\n";
    }   
   return 0; 
};