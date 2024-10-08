#include <stdio.h>
#include <ctype.h>

#define BOOL int
#define TRUE 1
#define FALSE 0
#define N 26

int main(void) 
{
  int word[N] = {0};
  BOOL is_anagram = TRUE;

  printf("Enter first word: ");

  char letter;
  while (letter != '\n') 
  {
    int index;
    scanf("%c", &letter);

    if (isalpha(letter)) 
    {
      index = (int) (tolower(letter) - 'a');
      word[index] += 1;
    }
  }


  printf("Enter second word: ");
  letter = ' ';
  while (letter != '\n') 
  {
    int index;
    scanf("%c", &letter);

    if (isalpha(letter)) 
    {
      index = (int) (tolower(letter) - 'a');
      word[index] -= 1;
    }
  }

  for (int i = 0; i < N; i++) 
  {
    if (word[i] != 0) 
    {
      is_anagram = FALSE;
    }
  }

  is_anagram ? printf("These words are anagrams.\n") : printf("These words are not anagrams.\n");

  return 0;
}
