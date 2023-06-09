#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num;
  int Total = 0;

  srand(time(NULL));
  
  printf("Rolling dice...\n");
  
  for(int i = 1 ; i <= 2 ; i++)
    {
      num = rand() % 6 + 1;
      Total += num;
      
      printf("Die %d: %d\n", i, num);
    }

  printf("Total value: %d\n", Total);
  
  return 0;
}
