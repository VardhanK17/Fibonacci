#include <stdio.h>
#define h long long int

h f[1000000] = {0},s[1000000] = {0},fib[1000000] = {0};
int main()
{
   h n, k = 1,a = 1,b = 1;
   f[0] = 0,s[0] = 1;
   h c = 0;
   h i = 0;
   scanf("%lld", &n);
   if (n == 0)
   {
      printf("0\n");
   }
   else if (n == 1)
   {
      printf("1\n");
   }
   n--;
   while (n--)
   {
      for (i=0;i<a; i++)
      {
         fib[i] = ((s[i] +f[i] + c) % 10);
         c = (s[i]+ f[i]+ c) / 10;
      }
      h j = b-a;
      while (j)
      {
         fib[i] = ((s[i] + c) % 10);
         c = (s[i] + c) / 10;
         i++;
         j--;
      }
      a=b;
      if (c!= 0)
      {
         k++;
         fib[i] = (c);
         c = 0;
      }
      b=k;
      for (int p = 0; p<a;p++)
      {
         f[p] = s[p];
      }
      for (int p=0;p<b;p++)
      {
         s[p] =fib[p];
      }
   }
   for (int i=k-1;i>=0;i--)
   {
      printf("%lld", fib[i]);
   }
   return 0;
}