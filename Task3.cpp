#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to hold task details
struct Task {
    string description;
    bool isCompleted;
};

// Function to display the menu
void displayMenu() {
    cout << "\nTo-Do List Manager" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to add a task
void addTask(vector<Task>& tasks) {
    cout << "Enter the task description: ";
    string description;
    cin.ignore();
    getline(cin, description);

    tasks.push_back({description, false});
    cout << "Task added successfully!" << endl;
}

// Function to view tasks
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list." << endl;
        return;
    }

    cout << "\nTo-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description;
        cout << " [" << (tasks[i].isCompleted ? "Completed" : "Pending") << "]" << endl;
    }
}

// Function to mark a task as completed
void markTaskAsCompleted(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available to mark as completed." << endl;
        return;
    }

    viewTasks(tasks);
    cout << "Enter the task number to mark as completed: ";
    int taskNumber;
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > static_cast<int>(tasks.size())) {
        cout << "Invalid task number." << endl;
        return;
    }

    tasks[taskNumber - 1].isCompleted = true;
    cout << "Task marked as completed!" << endl;
}

// Function to remove a task
void removeTask(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available to remove." << endl;
        return;
    }

    viewTasks(tasks);
    cout << "Enter the task number to remove: ";
    int taskNumber;
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > static_cast<int>(tasks.size())) {
        cout << "Invalid task number." << endl;
        return;
    }

    tasks.erase(tasks.begin() + taskNumber - 1);
    cout << "Task removed successfully!" << endl;
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskAsCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting the To-Do List Manager. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
