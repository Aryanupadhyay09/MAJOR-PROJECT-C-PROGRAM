KAUN BANEGA CROREPATI

DESCRIPTION
The KBC Game Project is a console-based quiz game written in C programming language, inspired by the famous TV show Kaun Banega Crorepati.
The objective of the game is to answer multiple-choice questions correctly, use limited lifelines strategically, and win increasing prize money.
The program is designed using modular coding practices, with separate files for:

Main game logic (main.c)

Functional implementations (functions.c)

Declarations (kbc.h)

This project helps beginners understand functions, arrays, conditional statements, loops, header files, and multiple-file compilation in C.
It also demonstrates game logic flow, input handling, and decision-making based on user choices.


GETTING STARTED
When the program begins:
Initialization
The program loads essential variables such as:
Lifeline flags
Prize money table
Question set
Correct answer list
Main Menu Appears
The user is shown a menu:
Start New Game
Instructions
Exit
Starting the Game
Questions appear one by one.
User options (1–4) are requested.
Lifeline options:
55 → 50-50 (removes two wrong options)
99 → Skip Question
Game Progress
If the answer is correct → user earns money.
If wrong → game ends immediately.
If Skip is used → move to next question without reward or penalty.
Game Completion
After finishing all questions or on wrong answer:
Final prize amount is shown.
Game closes properly.

BUILD INSTRUCTIONS
step 1
Create a folder and place these files inside:

main.c
functions.c
kbc.h


Make sure filenames are exactly the same, and they are in the same directory.

 Step 2 — Compile the Project Using GCC
Open Terminal / CMD inside the project folder and run:
gcc main.c functions.c -o kbc_game
This command
Compiles main.c
Compiles functions.c
links both files
Creates the executable file kbc_game
If you want strict compilation (recommended):
gcc main.c functions.c -Wall -o kbc_game

 Step 3 — Run the Game
Once compilation is successful, run the program:

USAGE 
This project can be used for:

1. Learning C Programming
Multi-file structure
Use of header files
Arrays and strings
Switch-case based questions
Using timers (time.h)
Input validation

2. College Assignments / Mini Projects
This program fulfills all requirements for a high-quality C mini-project:
Flowchart
Modular code
Documentation
User interaction
Game logic

3. Demonstrating Game Logic

Useful for:
Understanding how quiz apps work
Learning lifeline management
Understanding question banks

4. Enhancing to a Bigger System
The logic can be extended to:
GUI-based apps
Online quiz portals
Large question banks
Real-time competition systems

CONTRIBUTING
If someone wants to contribute to the project, here’s the contribution workflow:

1. Fork the Project Repository
Create your own copy of the project using Fork.

2. Create a New Branch
git checkout -b feature-new-lifeline

3. Make Your Changes
Examples of contributions:
Adding more questions
Improving lifelines
Adding file-based score saving
Enhancing UI
Fixing bugs

4. Test the Changes
Make sure:
Program compiles with no errors
All features work
Lifelines behave as expected
No crash occurs on wrong input

5. Commit Your Changes
git commit -m "Added new lifeline feature"

6. Push to Your Branch
git push origin feature-new-lifeline
