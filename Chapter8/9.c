
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define N 10

int main(void) {

    srand(time(NULL));

    char a[N][N];

    // Initialize the grid with '.'
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = '.';
        }
    }

    // Set starting position and letter
    int current_row = rand() % N;
    int current_col = rand() % N;
    char current_letter = 'A';

    a[current_row][current_col] = current_letter;
    int is_valid = TRUE;

    while (is_valid) {

        // Print the current grid
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf(" %c ", a[i][j]);
            }
            printf("\n");
        }

        printf("\n\n");

        // Reset the flag for finding a valid move
        int found_available_position = FALSE;

        // Try random directions until a valid move is found
        for (int attempt = 0; attempt < 4; attempt++) {
            int random_direction = rand() % 4 + 1;

            // Direction 1 = UP
            // Direction 2 = RIGHT
            // Direction 3 = LEFT
            // Direction 4 = DOWN

            // Check for UP
            if (random_direction == 1) {
                if (current_row > 0 && a[current_row - 1][current_col] == '.') {
                    current_letter += 1;
                    current_row -= 1;
                    a[current_row][current_col] = current_letter;
                    found_available_position = TRUE;
                    break; // Exit loop once a valid move is found
                }
            }

            // Check for RIGHT
            else if (random_direction == 2) {
                if (current_col < (N - 1) && a[current_row][current_col + 1] == '.') {
                    current_letter += 1;
                    current_col += 1;
                    a[current_row][current_col] = current_letter;
                    found_available_position = TRUE;
                    break; // Exit loop once a valid move is found
                }
            }

            // Check for LEFT
            else if (random_direction == 3) {
                if (current_col > 0 && a[current_row][current_col - 1] == '.') {
                    current_letter += 1;
                    current_col -= 1;
                    a[current_row][current_col] = current_letter;
                    found_available_position = TRUE;
                    break; // Exit loop once a valid move is found
                }
            }

            // Check for DOWN
            else if (random_direction == 4) {
                if (current_row < (N - 1) && a[current_row + 1][current_col] == '.') {
                    current_letter += 1;
                    current_row += 1;
                    a[current_row][current_col] = current_letter;
                    found_available_position = TRUE;
                    break; // Exit loop once a valid move is found
                }
            }
        }

        // Terminate if no valid position was found
        if (!found_available_position || current_letter >= 'Z') {
            is_valid = FALSE;
        }
    }

    return 0;
}

