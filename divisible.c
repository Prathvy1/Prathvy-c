 #include<stdio.h>
int main()
{
 int a;
 printf("Enter a value");
 scanf("%d",&a);
if(a%5==0 && a%11==0)
 printf("The no is divisible by both 5 and 11");
else if(a%5!=0 && a%11!=0)
 printf("The no is not divisibe by 5 and not by 11");
else if(a%5==0 && a%11!=0)
 printf("The no is divisible by 5 but not by 11");
else if(a%5!=0 && a%11==0)
 printf("The no is not divisible by 5 but divisible by 11");

return 0;
}
