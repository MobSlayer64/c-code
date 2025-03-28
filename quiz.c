#include <stdio.h>
#include <ctype.h>

int main()
{
   char questions[][100] = {"1. What is the capital of Australia?: ",
                            "2. Which planet is known as the Red Planet?:",
                            "3. Who wrote the play Romeo and Juliet?: "};
                            
   char options[][100] = {"A. Sydney", "B. Melbourne", "C.  Canberra", "D. Brisbane",
                          "A. Earth", "B. Mars", "C. Jupitor", "D. Venus",
                          "A.  Charles Dickens", "B. William Shakespeare", "C. Mark Twain", "D. Jane Austen"};
                          
   char answers[] = {'C', 'B', 'B'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

   char guess = ' ';
   int score = 0;

   printf("QUIZ GAME\n");    

   for(int i = 0; i < numberOfQuestions; i++)
   {
      printf("_____________________\n");
      printf("%s\n", questions[i]);
      printf("_____________________\n");

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", options[j]);
      }

      printf("guess: ");
      scanf("%c", &guess);
      scanf("%*c"); //clear \n from input buffer

      guess = toupper(guess);

      if(guess == answers[i])
      {
         printf("CORRECT!\n");
         score++;
      }
      else
      {
         printf("WRONG!\n");
      }
   }
   printf("_____________________\n");
   printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
   printf("_____________________\n");
 
   return 0;
}