#include <stdio.h>

#include <limits.h>

#define SIZE 5

int main(void) {
  
  int student_scores[SIZE][SIZE] = {0};

  // Prompt the user to input the quiz scores for each student
  
  for (int i = 0; i < SIZE; i++) {
    
    printf("Enter the quiz scores for STUDENT %c:\n\n", 'A' + i);

    for (int j = 0; j < SIZE; j++) {

      printf("QUIZ #%i: ", j + 1);
      scanf("%i", &student_scores[i][j]);
      printf("\n");
    }

    printf("\n");
    
  }

  /*
  for (int i = 0; i < SIZE; i++) {

    for (int j = 0; j < SIZE; j++) {

      printf("%i ", student_scores[i][j]);

    }

    printf("\n");

  }*/

  
  // Calculations for each student
  
  for (int i = 0; i < SIZE; i++) {

    int total_score = 0;
    printf("Total and Average Scores for STUDENT %c:\n\n", 'A' + i);

    for (int j = 0; j < SIZE; j++) {

      total_score += student_scores[i][j];

    }

    printf("Total score: %i\n", total_score);
    printf("Average score: %i\n", total_score / SIZE);

    printf("\n");
  }

  printf("\n");


  // Calculations for each quiz
  
  for (int i = 0; i < SIZE; i++) {

    int total_score = 0, highest_score = INT_MIN, lowest_score = INT_MAX; 
    printf("Average, Highest and Lowest Score for QUIZ #%i:\n\n", i + 1);

    for (int j = 0; j < SIZE; j++) {


      total_score += student_scores[j][i];

      if (student_scores[j][i] < lowest_score) lowest_score = student_scores[j][i];
      if (student_scores[j][i] > highest_score) highest_score = student_scores[j][i];

    }

    printf("Average score: %i\n", total_score / SIZE);
    printf("Highest score: %i\n", highest_score);
    printf("Lowest score: %i\n", lowest_score);

    printf("\n");
  }

  
  return 0;
}
