#include "todo_functions.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::getline;

char userChoice{};

vector<string> todoList{};

void menu() {
  
  cout << "Todo List\n\n";
  cout << "What would you like Todo?\n\n";
  cout << "Enter '1' to display your todo list\n";
  cout << "Enter '2' to add a task\n";
  cout << "Enter '3' to delete a task\n";
  cout << "Enter '4' to quit\n";
  
}

void addTask() {
  string task;
  cout << "Enter Task: " << endl;
  cin.ignore();
  getline(cin, task);
  todoList.push_back("- " + task + "\n");
}

void viewList() {

  if (todoList.size() > 0) {

    for(int i = 0; i < todoList.size(); i++) {
      cout << todoList[i] << endl;
    } 

  } 
  else {
    cout << "There is nothing in your list.\n\n" << endl;
  }
  
  }

  void deleteTask() {
    cout << "Which task would you like to delete?\n";
    for(int i = 0; i < todoList.size(); i++) {
      cout << i + 1 << todoList[i];
    }
    cout << "Enter Number:";
    int task{};
    cin >> task;
    todoList.erase(todoList.begin() + task -1);
    viewList();
  }

void appLoop() {

    while(userChoice != '4') {

      menu();
      cin >> userChoice;
        
        if(userChoice == '1') {
            viewList();
        }
        else if(userChoice == '2') {
            addTask();
        }
        else if(userChoice == '3') {
          deleteTask();
        }
    }
  }