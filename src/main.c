#include <stdio.h>
#include "kbc.h"

int main() {
    int choice;
    int answer, q, used5050 = 0, usedSkip = 0;

    welcome();

    while (1) {
        showMainMenu();
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nStarting new KBC game...\n");

            for (q = 1; q <= 3; q++) {
                showQuestion(q);

                printf("\nUse Lifeline?\n");
                printf("55 = 50-50, 99 = Skip, or enter your answer (1-4): ");
                scanf("%d", &answer);

                if (answer == 55) {
                    if (!used5050) {
                        lifeline5050(q);
                        used5050 = 1;
                        printf("\nEnter answer: ");
                        scanf("%d", &answer);
                    } else {
                        printf("\n50-50 already used!\n");
                        q--;
                        continue;
                    }
                }

                if (answer == 99) {
                    if (!usedSkip) {
                        lifelineSkip();
                        usedSkip = 1;
                        continue;
                    } else {
                        printf("\nSkip already used!\n");
                        q--;
                        continue;
                    }
                }

                if (checkAnswer(q, answer)) {
                    printf("\nCorrect Answer!\n");
                    showPrize(q);
                } else {
                    printf("\nWrong Answer! Game Over.\n");
                    break;
                }
            }
        }

        else if (choice == 2) {
            printf("\nINSTRUCTIONS:\n");
            printf("• Choose correct answer from 1 to 4.\n");
            printf("• Lifelines available: 50-50 and Skip.\n");
            printf("• Game ends on wrong answer.\n\n");
        }

        else if (choice == 3) {
            printf("\nThank you for playing KBC!\n");
            break;
        }

        else {
            printf("\nInvalid choice. Try again.\n");
        }
    }
    return 0;
}
