#ifndef TODOLIST_H
#define TODOLIST_H
#include<TodoFunctionality.h>
#include<vector>
class ToDolist
{
    public:
   bool to_menu();
   void play();
   bool isvalidinput();
    private:
    TodoFunctionality functions;
    vector<string>tasks;
};

#endif // TODOLIST_H
