
#include<stdio.h>
int isVowel(char a)
{
if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
  return 1;
return 0;
}
int main()
{
char a;
scanf("%c",&a);
if(isVowel(a))
  printf("Vowel");
else 
  printf("consonant");
return 0;
}
