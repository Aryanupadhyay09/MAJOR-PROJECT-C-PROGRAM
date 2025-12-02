#include <stdio.h>
#include "kbc.h"

void welcome() {
    printf("\n-------------------------------------\n");
    printf("         CHALO KHELE KAUN BANEGA CROREPATI         \n");
    printf("-------------------------------------\n");
}

void showQuestion(int qno) {
    switch(qno) {
        case 1:
            printf("\nQ1. What is the capital of India?\n");
            printf("1. Mumbai    2. Kolkata\n");
            printf("3. New Delhi 4. Chennai\n");
            break;

        case 2:
            printf("\nQ2. Who is known as the Father of C language?\n");
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
    int answers[] = {0, 3, 2, 1};  
    return userAnswer == answers[qno];
}

void lifeline5050(int qno) {
    printf("\n--- 50-50 Lifeline Activated ---\n");

    switch(qno) {
        case 1:
            printf("Remaining options: 1. Mumbai  3. New Delhi\n");
            break;
        case 2:
            printf("Remaining options: 2. Dennis Ritchie  4. Charles Babbage\n");
            break;
        case 3:
            printf("Remaining options: 1. Mars  4. Saturn\n");
            break;
    }
}

void lifelineAudience(int qno) {
    printf("\n--- Audience Poll Lifeline Activated ---\n");

    switch(qno) {
        case 1:
            printf("Mumbai: 20%% | Kolkata: 5%% | New Delhi: 70%% | Chennai: 5%%\n");
            break;
        case 2:
            printf("J. Gosling: 10%% | D. Ritchie: 80%% | B. Stroustrup: 5%% | C. Babbage: 5%%\n");
            break;
        case 3:
            printf("Mars: 85%% | Venus: 5%% | Jupiter: 5%% | Saturn: 5%%\n");
            break;
    }
}
