#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Task {
    string description;
    bool completed;
};


void viewTasks(const vector<Task>& tasks) {
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << (tasks[i].completed ? "[Y] " : "[N] ") << tasks[i].description << endl;
    }
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "Options:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;

        if (choice == 5) {
            break;
        }

        switch (choice) {
            case 1: {
                cout << "Enter task description: ";
                string description;
                cin.ignore();
                getline(cin, description);
                tasks.push_back({description, false});
                cout << "Task added successfully." << endl;
                break;
            }
            case 2: {
                viewTasks(tasks);
                break;
            }
            case 3: {
                viewTasks(tasks);
                cout << "Enter the task number to mark as completed: ";
                int taskNum;
                cin >> taskNum;
                if (taskNum >= 1 && taskNum <= tasks.size()) {
                    tasks[taskNum - 1].completed = true;
                    cout << "Task marked as completed." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }
            case 4: {
                viewTasks(tasks);
                cout << "Enter the task number to remove: ";
                int taskNum;
                cin >> taskNum;
                if (taskNum >= 1 && taskNum <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNum - 1);
                    cout << "Task removed successfully." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

