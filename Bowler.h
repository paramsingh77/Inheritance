/*****************************************************************************************
Name : Parminder Singh
Course : 355
Assignment : 6
Date : February 11 , 2023
File : Bowler.h
Program Description: In this we need to create a bowler class assignment. In this we will have private member of first name , last name , score of game 1,2 and 3. In addition, we have 2 constructors one of them will have 5 parameters. And setBowler class. There will be no keyboard jnput.This file will contain the definition of the class and declaring all of its method.
*******************************************************************************/

#ifndef _BOWLER_H
#define _BOWLER_H

#include <iostream>
using namespace std;


//***********CLASS****************.

class Bowler {
private:
  //member variables
  string firstName;
  string lastName;
  int game1;
  int game2;
  int game3;

public:
  //constructor
  Bowler();
  Bowler(string bowlerFirstName , string bowlerLastName , int score1 , int score2 , int score3);
  //setter
  void setBowler(string bowlerFirstName , string bowlerLastName , int score1 , int score2 ,int score3);
 //getters
  string getFirstName()const; 
  string getLastName()const; 
  int getGame1()const; 
  int getGame2()const;  
  int getGame3()const; 
  void print()const;
  int getTotal()const;
  double getAverage()const;
};

#endif
