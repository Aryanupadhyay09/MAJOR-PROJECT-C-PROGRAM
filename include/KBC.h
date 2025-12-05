#ifndef KBC_H
#define KBC_H

void welcome();
void showMainMenu();
void showQuestion(int qno);
int checkAnswer(int qno, int userAnswer);
void lifeline5050(int qno);
void lifelineSkip();
void showPrize(int level);

#endif

