#include "TodoFunctionality.h"
#include<vector>
#include<iostream>
using namespace std;
void TodoFunctionality::menufor_all(){
cout<<"\n________________________________________\n";
cout<<"\n______________todo list_________________\n";
cout<<"\n________________________________________\n";
         }
void TodoFunctionality::see_tasks(vector<string>&tasks)
{
   menufor_all();
   for(int i=0;i<tasks.size();i++)
   {
           cout<<"task"<<i+1<<" :"<<tasks[i]<<endl;
    }

}

bool TodoFunctionality::is_all_digits(const string& str) {
  return str.empty() || str.find_first_not_of("0123456789") == string::npos;
}
string TodoFunctionality::main_menu()
{
string choice;
menufor_all();
 cout<<"\n            TO DO LIST                  \n";
    cout<<"\n       manage your time           "<<endl;
    cout<<"\n";
    cout<<"      1:     Add  your tasks              "<<endl;
    cout<<"      2:     number your tasks              "<<endl;
    cout<<"      3:     See   your tasks              "<<endl;
    cout<<"      4:     delete your tasks             "<<endl;
    cout<<"      5:    update your tasks              "<<endl;
    cout<<"      6:    EXIT                    "<<endl;


cout<<"\n  choice :";
cin>>choice;
if(is_all_digits(choice))
return choice;
else return "1000";


}
void TodoFunctionality::add(vector<string>&tasks)
{
menufor_all();
  cout<<"\n";
    int i=0;
    string task="";
   string check;
  do
 {
  system("cls");
  menufor_all();
   cout<<"ENTER YOUR TASKS ?\n";
    cin.ignore(1,'\n');
     getline(cin,task);
     cout<<"\n";
    tasks.push_back(task);
     cout<<"\n1:Add again or any num to Stop Adding ?\n    ";
      cin>>check;
      if(check!="1")
        break;
  }while(check=="1");
}
void TodoFunctionality::numberOfTasks(vector<string>&tasks)
{
  menufor_all();
  cout<<"YOU HAVE "<<tasks.size()<<" TASKS"<<endl;
}
void TodoFunctionality::delte(vector<string>&tasks)
{
   if(tasks.empty()){
   menufor_all();
    cout<<"\nyou donot have any tasks to delete it\n";
  }
   else{
   see_tasks(tasks);
    vector<string>::iterator i=tasks.begin();
    cout<<"x:Clear all or num of element  \n";
      string id;
          cin>>id;
       if(id=="x")
       tasks.clear();
       else if(id!="x"){
       int m=stoi(id);
       tasks.erase(i+(m-1));
                       }
        system("cls");
        cout<<"tasks after deletation \n\n";
          see_tasks(tasks);
 }
}
void TodoFunctionality::update(vector<string>&tasks)
{
        if(tasks.empty()){
          menufor_all();
           cout<<"\nyou donot have any tasks to update it\n";
           }
        else{
          see_tasks(tasks);
          vector<string>::iterator i=tasks.begin();
          cout<<"Enter num of element you want \n num of element :";
           int num;    cin>>num;
            string val;
            if(num>0){
            cout<<"your update :";
            cin.ignore(1,'\n');
          getline(cin,val );
             i[num-1]=val;
           cout<<"\n\n";
          }
        system("cls");
        cout<<"tasks after update\n\n";
       see_tasks(tasks);
 }
}
int TodoFunctionality::exit(){
return 0;
}
