/****************************************************************************************************************************************************************
Course : 355
Assignment : 6
Date : February 11 , 2023
File : juniorBolwer.h
Program Description: In this we have created the juniorBowler class derived from the Bowler class. This class will have three paramteres age, numAbsences and gender.In addition, we will have two constructors, setJuniorBowler which will have 8 parameters, three setters and one print function.
****************************************************************************************************************************************************************/


#ifndef _JUNIORBOWLER_H_
#define  _JUNIORBOWLER_H_
#include "Bowler.h"
#include <iostream>
using namespace std;

/*****************DERIVED CLASS*******************/
class JuniorBowler : public Bowler {
private:
  int age;
  int numAbsences;
  char gender;

public:
 //constructor
 JuniorBowler();
 JuniorBowler(string firstName, string lastName,int score1,int score2,int score3,int ageOfBowler, int noOfAbsence,
                            char genderBowler);
 //setter
  void setJuniorBowler(string name,string lastName , int score1 , int score2 , int score3 ,int age ,int 
 numAbsencesOfBowler , char gender);

 //getters
 int getAge()const;
 int getNumAbsencesOfBowler()const;
 char getGender()const;
 void print()const;
};

#endif
