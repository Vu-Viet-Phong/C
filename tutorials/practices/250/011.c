/** 
 * Write a game of bag - kick - scissors with the rules of the game: Bao wins kick,
 * kick wins scissors, pull win bag. The user enters one of three characters b (cover),
 * d (rock), k (drag); machine Randomly generate one of the three characters above, 
 * announce the result of the game
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char human, computer;
    unsigned h, c; // h : point of human, c: point of computer

    srand(time(NULL));
    h = c = 0;
    
    while (1) {
        printf("Enter a character (b-k-s), another character to escape: ");
        scanf("%c", &human);

        switch (human) {
            case 'b':
                switch (rand() % 3) {
                    case 0: 
                        computer = 'b'; 
                        break;
                    case 1: 
                        computer = 'k'; 
                        h++ ; 
                        break;
                    case 2: 
                        computer = 's'; 
                        c++ ; 
                }
                break;
            case 'k':
                switch (rand() % 3) {
                    case 0: 
                        computer = 'b';
                        c++; 
                        break;
                    case 1: 
                        computer = 'k';  
                        break;
                    case 2: 
                        computer = 's'; 
                        h++;
                }
                break;
            case 's':
                switch (rand() % 3) {
                    case 0: 
                        computer = 'b';
                        h++; 
                        break;
                    case 1: 
                        computer = 'k';  
                        c++
                        break;
                    case 2: 
                        computer = 's';  
                }
                break;
            default: return 0;
        }
        printf("Computer: %c\n", computer);
        printf("Ty so: %u - %u\n", h, c);
    }

    return 0;
}