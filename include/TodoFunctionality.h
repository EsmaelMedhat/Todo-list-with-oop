#ifndef TODOFUNCTIONALITY_H
#define TODOFUNCTIONALITY_H
#include<vector>
#include<iostream>
using namespace std;
class TodoFunctionality
{
    private:
 friend class ToDolist;
bool is_all_digits(const string& str) ;
 void menufor_all();
 void see_tasks(vector<string>&tasks);
string main_menu();
void add(vector<string>&tasks);
void numberOfTasks(vector<string>&tasks);
void delte(vector<string>&tasks);
void update(vector<string>&tasks);
int exit();

};

#endif // TODOFUNCTIONALITY_H
