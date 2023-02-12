/***********************************************************************************************************************************************************
Name : Parminder Singh
Course : 355
Assignment : 6
Date : February 11 , 2023
File : Bowler.cpp
Program Description: In this we need to create a bowler class assignment. In this we will have private member of first name , last name , score of game 1,2 and 3. In addition, we have 2 constructors one of them will have 5 parameters. And setBowler class. There will be no keyboard jnput.This file will contain all the definition for the methods declared in header file.
**********************************************************************************************************************************************************/


#include "Bowler.h"
#include <iostream>
#include<iomanip>
using namespace std;





/***************************************************************************************************************************************
function name: Bowler (Constructor)
function description: This is a default constructor and will intialize all its member variables by default value.
incoming: none
outgoing: none
return: none
***************************************************************************************************************************************/

Bowler::Bowler() {
  firstName = "firstName";
  lastName = "lastName";
  game1 = 0;
  game2 = 0;
  game3 = 0;
}





/**************************************************************************************************************************************
function name: Bowler ( Paramterized Constructor)
function description: This is a paramterized constructor and will intialize all its member variables by the values coming in parameter.
incoming: none
outgoing: none
return: none
***************************************************************************************************************************************/

Bowler::Bowler(string bowlerFirstName, string bowlerLastName, int score1,
               int score2, int score3) {
  this->firstName = bowlerFirstName;
  this->lastName = bowlerLastName;
  this->game1 = score1;
  this->game2 = score2;
  this->game3 = score3;
}



/**************************************************************
function name: setBowler 
function description: This function will set the values coming in
parameter to the member variables of class.
incoming: none
outgoing: none
return: none
**************************************************************/

void Bowler::setBowler(string bowlerFirstName, string bowlerLastName,
                       int score1, int score2, int score3) {
  this->firstName = bowlerFirstName;
  this->lastName = bowlerLastName;
  this->game1 = score1;
  this->game2 = score2;
  this->game3 = score3;
}



/*******************************************************************
function name: getFirstName 
function description: This function will return the first name
incoming: none
outgoing: none
return:  firstName
********************************************************************/

string Bowler::getFirstName() const { return firstName; }

/*******************************************************************
function name: getLastName 
function description: This function will return the last name
incoming: none
outgoing: none
return:  lastName
********************************************************************/
string Bowler::getLastName() const { return lastName;}


/*******************************************************************
function name: getGame1
function description: This function will return the score of first game.
incoming: none
outgoing: none
return:  game1
********************************************************************/


int Bowler::getGame1() const { return game1;}

/*******************************************************************
function name: getGame2
function description: This function will return the score of second game.
incoming: none
outgoing: none
return:  game2
********************************************************************/

int Bowler::getGame2() const { return game2;}

/*******************************************************************
function name: getGame3
function description: This function will return the score of third game.
incoming: none
outgoing: none
return:  game3
********************************************************************/

int Bowler::getGame3() const { return game3;}

/*******************************************************************
function name: print
function description: This function will print all the details of the player and the scores of the game.
incoming: none
outgoing: none
return:  none
********************************************************************/


void Bowler::print() const {
  cout<<"FirstName : "<<this->getFirstName()<<endl;
  cout<<"LastName  : "<<this->getLastName()<<endl;
  cout<<"Game 1 Score: "<<this->getGame1()<<endl;
  cout<<"Game 2 Score: "<<this->getGame2()<<endl;
  cout<<"Game 3 Score: "<<this->getGame3()<<endl;
  cout<<"Total of 3 games is : "<<this->getTotal()<<endl; 
  cout<<"Average of Game is : "<<setprecision(2)<<fixed<<this->getAverage()<<endl;
}

/*******************************************************************
function name: getTotal
function description: this function will return the total of scores of the three games.
incoming: none
outgoing: none
return:  totalScore
********************************************************************/

int Bowler::getTotal()const{
  return this->getGame1() + this->getGame2() + this->getGame3(); 
}

/**************************************************************************************
function name: getAverage
function description: this function will return the average of games.
incoming: none
outgoing: none
return:  totalScore
*************************************************************************************/

double Bowler::getAverage()const{
    double avg;
    avg = (getTotal()/(double)3);
    return avg;
}
