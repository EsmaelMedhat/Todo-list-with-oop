#include "ToDolist.h"
#include "iostream"
using namespace std;
int truechoice=0;
bool ToDolist::to_menu(){
  string check;
  cout<<"\n1:Main menu or any num to exit ?\n    ";
   cin>>check;
 system("cls");
  if(check=="1"){
   return true;
  system("cls");
 }
  cout<<"\n                          Thank you                        ";
 return false;
}
bool ToDolist::isvalidinput(){
  int choice;
  do{
  char check;
  choice=stoi(functions.main_menu());
  if(choice<0||choice>7)
{
    cout<<"                       isvalidinput \n";
    cout<<"   1:try again      any num to exit  \n";
           cin>>check;
  if(check!='1'){
  return false;
 }
 else system("cls");
 }
 }while(choice<0||choice>7);
  truechoice=choice;
  return choice;
}
void ToDolist::play(){
 do{
  if(!isvalidinput())
     break;
  if(truechoice!=0)
    system("cls");

   if(truechoice==1)
    functions.add(tasks);
   else if(truechoice==2)
    functions.numberOfTasks(tasks);
   else if(truechoice==3)
    functions.see_tasks(tasks);
   else if(truechoice==4)
    functions.delte(tasks);
   else if(truechoice==5)
    functions.update(tasks);
   if(truechoice==6||!to_menu())
    break;

    system("cls");
 }while(truechoice!=6);
  }
