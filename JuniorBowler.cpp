/***************************************************************************************** 
Name : Parminder Singh
Course : 355
Assignment : 6
Date : February 11 , 2023
File : juniorBowler.cpp
Program Description: This file will have all the definitions of the juniorBowler class defined in the juniorBowler.h file.
*******************************************************************************/

#include "JuniorBowler.h"
#include "Bowler.h"
#include <iostream>
using namespace std;

/***********************************************************************************
function name: JuniorBowler (constructor)
function description: It will intialize all the members with default values
incoming: none
outgoing: none
return:  None
*************************************************************************************/

JuniorBowler ::JuniorBowler() {
  int age = 0;
  int numAbsences = 0;
  char gender = 'M';
}

/***************************************************************************************************************************************
function name: juniorBowler ( parameterized constructor)
function description: It will intialize all the members with values with incoming parameter and will assign the parent class constructor with values it needs.
incoming: none
outgoing: none
return: None
****************************************************************************************************************************************/


JuniorBowler ::JuniorBowler(string firstName, string lastName,int score1,int score2,int score3,int ageOfBowler, int noOfAbsence,
                            char genderBowler):Bowler(firstName,lastName,score1,score2,score3)

{
  age = ageOfBowler;
  numAbsences = noOfAbsence;
  gender = genderBowler;
}


/***************************************************************************************************************************************
function name: getAge
function description: It will return the age.
incoming: none
outgoing: none
return: age
****************************************************************************************************************************************/


 int JuniorBowler:: getAge()const{
    return age;
 }

/***************************************************************************************************************************************
function name: getNumAbsencesOfBowler
function description: It will return the number of absences.
incoming: none
outgoing: none
return: numAbsences
****************************************************************************************************************************************/

 int JuniorBowler:: getNumAbsencesOfBowler()const{
   return numAbsences;
 }

/***************************************************************************************************************************************
function name: getGender
function description: It will return the gender.
incoming: none
outgoing: none
return: gender
****************************************************************************************************************************************/

 char JuniorBowler:: getGender()const{
   return gender;
 }

/***************************************************************************************************************************************
function name: setJuniorBowler
function description: It will set all the variables to the members of the class.
incoming: none
outgoing: none
return: None
****************************************************************************************************************************************/

void JuniorBowler:: setJuniorBowler(string first , string last , int score1 , int score2 , int score3 , int numAbsences , int age , char gender){
     setBowler(first,last,score1,score2,score3);
     this->age = age;
     this->gender = gender;
     this->numAbsences = numAbsences;
}

/***************************************************************************************************************************************
function name: print
function description: It will print all the values by calling all the getters.
incoming: none
outgoing: none
return: None
****************************************************************************************************************************************/

void JuniorBowler:: print()const{
     Bowler::print();
     cout<<"The Age is : "<<this->getAge()<<endl;
     cout<<"The number Of Absencs is: "<<this->getNumAbsencesOfBowler()<<endl;
     cout<<"The Gender is : "<<this->getGender()<<endl;
}
