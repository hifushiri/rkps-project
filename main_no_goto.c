#include "main.h"

int main (void) {
    for (int i = 0; i < 27; i++) {
        printf(" ");
    }
    printf("TWO TO TEN\n");

    for (int i = 0; i < 14; i++) {
        printf(" ");
    }
    printf("CREATIVE COMPUTING  MORRISTOWN NEW JERSEY\n");

    for (int i = 0; i < 2; i++) {
        printf("\n");
    }
    printf("WELCOME TO THE GAME OF TWO TO TEN.  THAT NAME COMES FROM THE\n");
    printf("SPECIAL 'DECK OF CARDS' USED. THERE ARE NO FACE CARDS - ONLY\n");
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

    int m = 200;
    srand(time(NULL));
    while (1) {
        int d = 0;
        int t = 0;
        int o = rand() % 10 + 25;
        int n = (rand() % o) + o;
        int r = (rand() % 15 + 1) / 100;
        int s = rand() % 2 + 1;

        int e = 0;
        if (s != 1) {
            e = n + (n * r);
        } else {
            e = n - (n * r); 
        }
        int a = rand() % 9 + 2;
        
        printf("\nPLACE YOUR BET ... YOU HAVE %d TO SPEND.\n", m);
        int b = 0;
        while (1) {
            scanf("%d", &b);
            if (b < 0) {
                printf("YOU MAY NOT BET AGAINST YOURSELF.\n");
                continue;
            }
            if (m >= b) {
                break;
            }
            printf("YOU CANT BET MORE THAT YOUVE GOT!\n");
            continue;
        }

        printf("YOUR LUCKY LIMIT CARD IS A %d\n", a);
        printf("YOU MUST COME WITHIN %d WITHOUT GOING OVER TO WIN.\n", a);
        printf("\nHERE WE GO\n");

        int exit_flag = 0;
            while (1) {   
                d++;
                int c = rand() % 9 + 2;
                printf("\n\nCARD #%d IS A %d.YOU ARE TRYING TO COME NEAR %d\n", d, c, e);
                t += c;
                if (t <= n) {
                    printf("YOUR TOTAL IS %d DO YOU WANT TO CONTINUE\n", t);
                }
                
                char q[4];
                scanf("%s", q);
                // printf("\n\n\n-> input string: \"%s\" <-\n\n\n", q);
                // printf ("\n\n\n-> result of comparison: %d <-\n\n\n", strncmp(q, "y", 1));
                if (strncmp(q, "y", 1) != 0 && strncmp(q, "Y", 1) != 0) {
                    break;
                }
            }

        // пропустил YOU LOSE и YOU WIN
        // я ненавижу goto......

        if (t < n - a || t > n) {
            printf("YOU BLEW IT!  THE NUMBER WAS %d, OUTSIDE YOUR LIMIT BY \n", n);
            printf("%d\n", (n - a) - t);
            m -= b;
        } else {
            printf("YOU WIN!  THE NUMBER WAS %d YOUR GUESS TOTAL WAS %d\n", n, t);
            printf("WITHIN YOUR LIMIT CARD.\n");
            m += b;
        }

        printf("YOU NOW HAVE %d IN CASH TO BET IN THE NEXT GAME!\n", m);
        if (m <= 0) {
            printf("\a");
            printf("YOU ARE BROKE!! YOU MAY NOT PLAY ANYMORE!!\n");
            break;
        }
        printf("WOULD YOU LIKE TO PLAY THE NEXT GAME\n");
        char q[4];
        scanf("%s", q);
        if (strncmp(q, "y", 1) != 0 && strncmp(q, "Y", 1) != 0) {
            printf("HOPE YOU HAD FUN.\n");
            break;
        }
    }

// 220 M=200
// 223 D=0
// 225 T=0
// 227 O=INT(10*RND(1))+25
// 229 N=INT(O*RND(1))+O
// 230 R=(INT(15*RND(1))+1)/100
// 250 S=INT(2*RND(1)+1)
// 260 IF S <> 1 THEN 270
// 262 E=INT(N-(N*R))
// 265 GOTO 280
// 270 E=INT(N+(N*R))
// 280 A=INT(9*RND(11)+2)
// 283 PRINT
// 285 PRINT "PLACE YOUR BET ... YOU HAVE $";M;" TO SPEND.";
// 287 INPUT B
// 288 PRINT
// 289 IF B < 0 THEN 297
// 290 IF M >= B THEN 300
// 293 PRINT "YOU CANT BET MORE THAT YOUVE GOT!"
// 295 GOTO 285
// 297 PRINT "YOU MAY NOT BET AGAINST YOURSELF."
// 298 GOTO 285
// 300 PRINT "YOUR LUCKY LIMIT CARD IS A ";A
// 310 PRINT "YOU MUST COME WITHIN ";A;" WITHOUT GOING OVER TO WIN."
// 315 PRINT
// 320 PRINT "HERE WE GO"
// 322 PRINT
// 324 PRINT
// 340 D=D+1
// 350 C=INT(9*RND(1)+2)
// 360 PRINT "CARD #";D;" IS A ";C;".YOU ARE TRYING TO COME NEAR ";E
// 365 T=T+C
// 370 IF T <= N THEN 380
// 375 PRINT "YOUR TOTAL IS OVER THE NUMBER";N;" AN AUTOMATIC LOSS!"
// 377 GOTO 570
// 380 PRINT "YOUR TOTAL IS ";T;"  DO YOU WANT TO CONTINUE";
// \/
// 385 INPUT Q$
// 387 PRINT
// 390 IF LEFT$(Q$,1)="Y" THEN 322
// 410 IF T < N-A OR T > N THEN 550
// 500 PRINT "YOU WIN!  THE NUMBER WAS ";N;" YOUR GUESS TOTAL WAS";T
// 510 PRINT "WITHIN YOUR LIMIT CARD."
// 520 M=M+B
// 540 GOTO 600
// 550 PRINT "YOU BLEW IT!  THE NUMBER WAS ";N;", OUTSIDE YOUR LIMIT BY ";
// 560 PRINT (N-A)-T
// 565 PRINT
// 570 M=M-B
// 600 PRINT "YOU NOW HAVE $";M;" IN CASH TO BET IN THE NEXT GAME!"
// 605 IF M <= 0 THEN 655
// 610 PRINT "WOULD YOU LIKE TO PLAY THE NEXT GAME";
// 615 INPUT Q$
// 620 IF LEFT$(Q$,1)="Y" THEN 223
// 630 PRINT "HOPE YOU HAD FUN."
// 640 GOTO 999
// 650 PRINT
// 655 PRINT CHR$(7);
// 660 PRINT "YOU ARE BROKE!! YOU MAY NOT PLAY ANYMORE!!"
// 999 END



    return 0;
}
