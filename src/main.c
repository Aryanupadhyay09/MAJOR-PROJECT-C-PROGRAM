#include <stdio.h>
#include "kbc.h"

int main() {
    int answer, lifeline, used5050 = 0, usedAudience = 0;
    welcome();

    for (int q = 1; q <= 3; q++) {
        showQuestion(q);

        printf("\nDo you want lifeline? (1. Yes  2. No): ");
        scanf("%d", &lifeline);

        if (lifeline == 1) {
            printf("\nChoose Lifeline:\n1. 50-50\n2. Audience Poll\n");
            scanf("%d", &lifeline);

            if (lifeline == 1 && !used5050) {
                lifeline5050(q);
                used5050 = 1;
            } else if (lifeline == 2 && !usedAudience) {
                lifelineAudience(q);
                usedAudience = 1;
            } else {
                printf("\nYou already used this lifeline!\n");
            }
        }

        printf("\nEnter your final answer: ");
        scanf("%d", &answer);

        if (checkAnswer(q, answer)) {
            printf("Correct Answer!\n");
        } else {
            printf("Wrong Answer! Game Over.\n");
            break;
        }

        printf("\n-------------------------------------\n");
    }

    printf("\nThank you for playing KBC!\n");
    return 0;
}
