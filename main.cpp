/*****************************************************************************************************************************************************************
Name : Parminder Singh
Course : 355
Assignment : 5
Date : February 3 , 2023
File: main.cpp
Program Description: In this we need to create a bowler class assignment. In this we will have private member of first name , last name , score of game 1,2 and 3. In addition, we have 2 constructors one of them will have 5 parameters. And setBowler class. There will be no keyboard jnput. In main file we will create the main function and it will create the objects of the class and print it by two ways. First by using constructor and second is  by the setBowler function.
****************************************************************************************************************************************************************/


#include<iostream>
#include "Bowler.h"
#include "JuniorBowler.h"
using namespace std;


int main(){

  //constructor call
  Bowler b1("Parminder","Singh",2,4,5);
  b1.print();
  cout<<endl;

  Bowler b2;
  //printing using setter
  b2.setBowler("Prince","Singh",6,2,3);
  b2.print();
  cout<<endl;

  JuniorBowler j1;
  j1.setJuniorBowler("John", "pugh", 1, 2, 3,29,5,'M');
  j1.print();
  cout<<endl;

  JuniorBowler j2("Peter", "cird", 1, 2, 3,29,5,'M');
  j2.print();
 

  
  return 0;
}
