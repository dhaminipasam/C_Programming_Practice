#include<stdio.h>
int sum=0;
int main(){
   int num,revNum;
   printf("enter number:\n");
   scanf("%d",&num);
   revNum=revNum(num);//calling function to reverse the given number
   printf("the number after reverse :%d",revNum);
   return 0;
}
revNum(int num){
   if(num){
      sum=sum*10+num%10;
      revNum(num/10);
   }
   else
      return sum;
}