#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num;
  int Total = 0;
  char name[50];

  srand(time(NULL));

  //Greeting(experimental)
  printf("what is your name?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  
  printf("Rolling dice...\n");
  
  for(int i = 1 ; i <= 2 ; i++)
    {
      num = rand() % 6 + 1;
      Total += num;
      
      printf("Die %d: %d\n", i, num);
    }

  printf("Total value: %d\n", Total);

  if(Total > 7) printf("You won\n");
  else printf("You lost\n");
  
  return 0;
}
