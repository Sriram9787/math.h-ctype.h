#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main() {
   printf("*******************************************\n");
   printf("SIMPLE C PROGRAM TO DO THE FOLLOWING TASKS\n");
   printf("*******************************************\n");
    int opt;
   printf("1.lowercase to uppercase converter\n");
   printf("2.Uppercase to lowercase converter\n");
   printf("3.To check the given character is \n");
   printf("  uppercase or lowercase\n");
   printf("4.To check the given character is \n");
   printf("  a digit or an alphabet\n");
   printf("5.To check the given character is \n");
   printf("  a number or alphabet using alnum\n");
   printf("6.To do mathematical operations\n");
   printf("\n");
  printf("___________________________________________\n");
   printf("Choose your option [1,2,3,4,5,6]:");
   scanf("%d",&opt);
   printf("___________________________________________\n");
   if (opt == 1)
   {
   char name[23];
   printf("Enter your name without space:");
   scanf("%s",&name);
   printf("___________________________________________\n");
   printf("Your name in uppercase:");
   for (int i = 0; i<strlen(name);i++)
   {
       printf("%c", toupper(name[i]));
       
   }
   }
   else if(opt == 2)
    {
   char name[23];
   printf("Enter your name:");
   scanf("%s",&name);
   printf("___________________________________________\n");
   printf("Your name in lowercase:");
   for (int i = 0; i<strlen(name);i++)
   {
       printf("%c", tolower(name[i]));
   }
   }
   else if (opt == 3){
       char ch;
    printf("enter a character:");
    ch=getche();
    printf("\n");
    if (isupper(ch)){
        printf("_____________________________________________\n");
        printf("The given character is in uppercase");
    }
    else if(islower(ch)) {
        printf("_____________________________________________\n");
        printf("The given character is in lowercase ");
    }
   }
   else if(opt==4){
        char char1;
      printf("Enter your character:");
      char1 = getche();
      printf("\n");
      if (isalpha(char1))
      {
          printf("___________________________________________\n");
          printf("The given character is an alphabet");
      }
      else if (isdigit(char1))
      {
          printf("___________________________________________\n");
          printf("The given character is a digit");
      }
   }
   else if (opt==5){
       char ch;
    printf("enter a character:");
    ch=getche();
    printf("\n");
    if (isalnum(ch)){
        printf("_____________________________________________\n");
        printf("The given character can be a alphabet or number");
    }
    else {
        printf("_____________________________________________\n");
        printf("The given character is not an alphabet or a number ");
    }
   }
   else if (opt==6){
       float a,b,radiana,radianb;
    float x1,x2,y1,y2;
    int opt;
    printf("1.To find sin(a+b)\n");
    printf("2.To find log(a^b)\n");
    printf("3.To find sqrt((x2 - x1)^2 + (y2 - y1)^2))\n");
   printf("____________________________________________\n");
    
    printf("choose a option[1,2,3]:");
    scanf("%d",&opt);
    printf("____________________________________________\n");
    if (opt == 1){
    printf("Enter value A in degree:");
    scanf("%f", &a);
    printf("Enter value B in degree:");
    scanf("%f", &b);
    radiana=a*(M_PI/180);
    radianb=b*(M_PI/180);
    printf("Calculating sin(a+b) .....\n");
    printf("____________________________________________\n");
    printf("sin(%.2f+%.2f)=",a,b);
    printf("%f\n",sin(radiana)*cos(radianb)+cos(radiana)*sin(radianb));
    }
    if (opt == 2){
         printf("Enter value A :");
    scanf("%f", &a);
    printf("Enter value B :");
    scanf("%f", &b);
    printf("____________________________________________\n");
    printf("Calculating log(a^b) .....\n");
    printf("____________________________________________\n");
    printf("log(%.2f^.2%f)=",a,b);
    printf("%f\n",b*log(a));
    }
     if (opt == 3){
    printf("Enter value x1 :");
    scanf("%f", &x1);
    printf("Enter value x2 :");
    scanf("%f", &x2);
    printf("Enter value y1 :");
    scanf("%f", &y1);
    printf("Enter value y2 :");
    scanf("%f", &y2);
    printf("____________________________________________\n");
    printf("Calculating sqrt ((x2 - x1)^2 + (y2 - y1)^2) \n");
    printf("____________________________________________\n");
    int pow1=pow(x2-x1,2);
    int pow2=pow(y2-y1,2);
    printf("Your answer :%f",sqrt(pow1+pow2));
    
    }
    printf("\n");
   }
   printf("\n");
   printf("___________________________________________\n");
   printf("   <<CODED BY SRIRAM THANGAVEL(2002098)>>         \n");
   printf("___________________________________________\n");
  
    return 0;
    
}