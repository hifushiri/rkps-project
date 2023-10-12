#include "main.h"

int main (void) {
    printf("%*c%s", 28, ' ', "TWO TO TEN\n");
    printf("%*c%s", 15, ' ', "CREATIVE COMPUTING  MORRISTOWN NEW JERSEY\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("WELCOME TO THE GAME OF TWO TO TEN.  THAT NAME COMES FROM THE\n");
    printf("SPECIAL DECK OF CARDS USED. THERE ARE NO FACE CARDS - ONLY\n");
    printf("THE CARDS 2-10.  THIS GAME IS EASY AND FUN TO PLAY IF YOU\n");
    printf("UNDERSTAND WHAT YOU ARE DOING SO READ THE INSTRUCTIONS\n");
    printf("CAREFULLY.\n");
    printf("AT THE START OF THE GAME, YOU BET ON WINNING. TYPE IN ANY\n");
    printf("NUMBER BETWEEN 0 AND 200.  I THEN PICK A RANDOM NUMBER\n");
    printf("YOU ARE TO REACH BY THE SUM TOTAL OF MORE CARDS CHOSEN.\n");
    printf("BECAUSE OF THE RARE CHANCE OF YOU GETTING TO THAT NUMBER\n");
    printf("EXACTLY, YOU ARE GIVEN AN ALLOWANCE CARD.  THE OBJECT OF\n");
    printf("THE GAME OF TO GET THE TOTAL OF CARDS WITHIN THE MYSTERY\n");
    printf("NUMBER WITHOUT GOING OVER.\n");
    printf("YOU ARE GIVEN A HINT AS TO WHAT THE NUMBER IS.  THIS IS NOT\n");
    printf("THE EXACT NUMBER ONLY ONE CLOSE. ALL YOU DO IN THIS GAME IS\n");
    printf("DECIDE WHEN TO STOP.  AT THIS POINT YOUR TOTAL IS COMPARED\n");
    printf("WITH THE NUMBER AND YOUR WINNINGS ARE DETERMINED.\n");
    int M = 200;
line_223:;
    int D = 0;
    int T = 0;
    int O = (int)(rand() % 10) + 25;
    int N = (int)(rand() % O) + O;
    int R = ((int)(rand() % 15) + 1) / 100;
    int S = (int)(rand() % 2 + 1);
    if (S != 1) {goto line_270;}
    int E = (int)(N - (N * R));
    goto line_280;
line_270:;
    E = (int)(N + (N * R));
line_280:;
    int A = (int)(rand() % 9 + 2);
    printf("\n");
line_285:;
    printf("PLACE YOUR BET ... YOU HAVE $ %d  TO SPEND.? ", M);
    int B; scanf("%d", &B);
    printf("\n");
    if (B < 0) {goto line_297;}
    if (M >= B) {goto line_300;}
    printf("YOU CANT BET MORE THAT YOUVE GOT!\n");
    goto line_285;
line_297:;
    printf("YOU MAY NOT BET AGAINST YOURSELF.\n");
    goto line_285;
line_300:;
    printf("YOUR LUCKY LIMIT CARD IS A  %d\n", A);
    printf("YOU MUST COME WITHIN  %d  WITHOUT GOING OVER TO WIN.\n", A);
    printf("\n");
    printf("HERE WE GO\n");
line_322:;
    printf("\n");
    printf("\n");
    D = D + 1;
    int C = (int)(rand() % 9 + 1);
    printf("CARD # %d  IS A  %d .YOU ARE TRYING TO COME NEAR  %d\n", D, C, E);
    T = T + C;
    if (T <= N) {goto line_380;}
    printf("YOUR TOTAL IS OVER THE NUMBER %d  AN AUTOMATIC LOSS!\n", N);
    goto line_570;
line_380:;
    printf("YOUR TOTAL IS  %d  DO YOU WANT TO CONTINUE? ", T);
    char Q[1]; scanf("%s", Q);
    printf("\n");
    if (!strcmp(Q, "Y")) {goto line_322;}
    if (T < N - A || T > N) {goto line_550;}
    printf("YOU WIN!  THE NUMBER WAS  %d  YOUR GUESS TOTAL WAS %d\n", N, T);
    printf("WITHIN YOUR LIMIT CARD.\n");
    M = M + B;
    goto line_600;
line_550:;
    printf("YOU BLEW IT!  THE NUMBER WAS  %d , OUTSIDE YOUR LIMIT BY \n", N);
    printf("%d\n", (N - A) - T);
    printf("\n");
line_570:;
    M = M - B;
line_600:;
    printf("YOU NOW HAVE $ %d  IN CASH TO BET IN THE NEXT GAME!\n", M);
    if (M <= 0) {goto line_655;}
    printf("WOULD YOU LIKE TO PLAY THE NEXT GAME? ");
    scanf("%s", Q);
    if (!strcmp(Q, "Y")) {goto line_223;}
    printf("HOPE YOU HAD FUN.\n");
    goto line_999;
    printf("\n");
line_655:;
    printf("\a");
    printf("YOU ARE BROKE!! YOU MAY NOT PLAY ANYMORE!!\n");
line_999:;
    return 0;
}
