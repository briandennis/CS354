#include<stdio.h>
//Declarationofthefunctionmystrlen.
unsigned int mystrlen(char a[]);
int main()
{
char mystr[]="BADGERS";
unsigned int len;
len = mystrlen(mystr);
printf("len=%u\n",len);
return 0;
}
unsigned int mystrlen(char a[])
{
//Write code here to calculate and
//return the length of the string
  int count = 0;
  int isDone = 0;
  while(isDone == 0){
    if(a[count] == '\0'){
      isDone = 1;
    }
    else{
      count++;
    }
  }
  return count;
}
