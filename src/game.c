#include <stdio.h>
#include "kbc.h"

void welcome() {
    printf("\n------------------------------------------\n");
    printf("        WELCOME TO KBC GAME PROJECT        \n");
    printf("------------------------------------------\n");
}

void showMainMenu() {
    printf("\n========== MAIN MENU ==========\n");
    printf("1. Start New Game\n");
    printf("2. Instructions\n");
    printf("3. Exit\n");
    printf("===============================\n");
    printf("Enter your choice: ");
}

void showQuestion(int qno) {
    switch(qno) {
        case 1:
            printf("\nQ1. What is the capital of India?\n");
            printf("1. Mumbai    2. Kolkata\n");
            printf("3. New Delhi 4. Chennai\n");
            break;

        case 2:
            printf("\nQ2. Who is the Father of C Language?\n");
            printf("1. James Gosling  2. Dennis Ritchie\n");
            printf("3. Bjarne Stroustrup 4. Charles Babbage\n");
            break;

        case 3:
            printf("\nQ3. Which planet is known as the Red Planet?\n");
            printf("1. Mars  2. Venus\n");
            printf("3. Jupiter 4. Saturn\n");
            break;
    }
}

int checkAnswer(int qno, int userAnswer) {
    int answers[] = {0, 3, 2, 1}; // index 1=Q1,2=Q2,3=Q3
    return userAnswer == answers[qno];
}

void lifeline5050(int qno) {
    printf("\n--- 50-50 Lifeline Activated! ---\n");

    switch(qno) {
        case 1:
            printf("Remaining Options: 1. Mumbai  3. New Delhi\n");
            break;

        case 2:
            printf("Remaining Options: 2. Dennis Ritchie  4. Charles Babbage\n");
            break;

        case 3:
            printf("Remaining Options: 1. Mars  4. Saturn\n");
            break;
    }
}

void lifelineSkip() {
    printf("\n--- Skip Lifeline Activated! ---\n");
    printf("Question Skipped! Moving to next question.\n");
}

void showPrize(int level) {
    long prizeMoney[] = {0, 1000, 5000, 10000};

    printf("\nCongratulations! You have won ₹%ld\n", prizeMoney[level]);
}
