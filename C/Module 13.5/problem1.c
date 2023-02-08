#include <stdio.h>
#include <string.h>
 
 int main()
 {
  // Step 1 -> Take input
  char str[50];
  scanf("%s", str);
  // Step 2-> find Largest Element from string
  int len = strlen(str), largestElement = 26;
  // step 3 -> LargestElement +1 size array create
  int freq[largestElement + 1];
  // All element fill with 0
  for (int i = 0; i <= largestElement; i++)
  {
    freq[i] = 0;
  }

  // Traverse array and location increment of freq's array
  for (int i = 0; i < len; i++)
  {
    freq[(str[i] - 'a') + 1]++;
  }
  // Determind How many chartar have
  int total = 0;
  for (int i = 1; i <= 26; i++)
  {
    if (freq[i] >= 1)
    {
      total++;
    }
  }
  // Every time Largest Value and Charter filter
  int next = 0;
  while (next != total)
  {
    int max = -1, index = -1;
    char ch;
    for (int i = 1; i <= 26; i++)
    {
      if (freq[i] > max)
      {
        max = freq[i];
        ch = i + 96;
        index = i;
      }
    }
    for (int i = 1; i <= max; i++)
    {
      printf("%c", ch);
    }
    freq[index] = 0;
    next++;
  }

  return 0;
}