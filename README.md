# CODSOFT-CPP-T3

Task-03 TO-DO LIST MANAGER

Concept of the To-Do List Manager

Title: To-Do List Manager

Introduction: The to-do list manager is a console-based program designed to help users organize tasks efficiently. It provides options to add tasks, view the list, mark tasks as completed, and remove tasks. Each feature leverages fundamental programming properties for a seamless user experience.

Steps:

Display Title: The program starts with a clear title and menu options for user interaction.

Properties Used: User Interface Design: A clear and intuitive menu ensures users can easily navigate the options. Looping Constructs: The menu is displayed repeatedly until the user chooses to exit.

Task Input: The user is prompted to enter the description of the task they want to add.

Properties Used: Input Handling: Ensures user-provided task descriptions are accurately captured. String Manipulation: Stores and manages task descriptions as strings for flexibility.

Add Task: The program appends the new task to the list with a "Pending" status.

Properties Used: Dynamic Data Storage: Uses a vector to store tasks dynamically, allowing for flexible list management. Structs: Encapsulates task details (description and status) in a structured format.

View Tasks: Displays the complete list of tasks along with their statuses.

Properties Used: Iteration: Loops through the vector to display all tasks. Conditionals: Differentiates between "Pending" and "Completed" statuses for display.

Mark Task as Completed: Allows users to update the status of a selected task to "Completed."

Properties Used: Index-Based Access: Lets users specify tasks by their index in the list. Conditionals: Verifies task selection is valid before updating its status.

Remove Task: Enables users to delete a specific task from the list.

Properties Used: Error Handling: Ensures task selection is valid to avoid out-of-bounds errors. Vector Operations: Uses the erase() method to remove the selected task from the vector.

Exit Mechanism: Allows users to terminate the program gracefully.

Properties Used: Control Flow Management: Breaks out of the main loop when the user selects the exit option. User-Friendly Messaging: Displays a goodbye message upon exit.

Conclusion: The to-do list manager is a practical example of using fundamental programming concepts, including input handling, data structures, loops, and conditionals. It highlights how these properties can create an effective and user-centric task management tool.
