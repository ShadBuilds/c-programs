// Take input from user of marks in different subjects calculate the percentage and display the grade using conditional statements
#include <stdio.h>
void main()
{
    float marks, grade, sub1, sub2, sub3, sub4, sub5, obtain;
    int total = 500;
    char name[100];
    printf("Enter Your Name ");
    fgets(name, sizeof(name), stdin); // Allows full name with spaces
    printf("Enter the marks of Maths - \n");
    scanf("%f",&sub1);
     printf("Enter the marks of physics - \n");
        scanf("%f",&sub2);
      printf("Enter the marks of chemistry - \n");
         scanf("%f",&sub3);
       printf("Enter the marks of English - \n");
          scanf("%f",&sub4);
        printf("Enter the marks of Physical Education - \n");
           scanf("%f",&sub5);
           obtain = sub1+sub2+sub3+sub4+sub5;
           grade = (obtain / total) * 100;

           if (grade >= 90 )
            {
            printf("You Got 'A' grade obtaining %.2f percentage " , grade);
           }
            else if (grade >= 80 )
            {
            printf("You Got 'B' grade obtaining %.2f percentage " , grade);
             }
            else if (grade >= 70 )
                   {
            printf("You Got 'C' grade obtaining %.2f percentage " , grade);
               }
                else if (grade >= 60 )
                {
            printf("You Got 'D' grade obtaining %.2f percentage " , grade);
                 }
                 else {
            printf("You Got 'F' grade obtaining %.2f percentage " , grade);
                 }
// Display detailed result
    printf("\n ---- %s's Result ---- \n", name);
    printf("Maths: %.2f\n", sub1);
    printf("Physics: %.2f\n", sub2);
    printf("Chemistry: %.2f\n", sub3);
    printf("English: %.2f\n", sub4);
    printf("Physical Education: %.2f\n", sub5);
    printf("Obtained Marks: %.2f\n", obtain);
    printf("Percentage: %.2f%%\n", grade);

}
