// Built a user info collector which calculates BMI and display the result
#include <stdio.h>
void main()
{
    char name[100];
    int age, feet, inches;
    float BMI, height, weight;
    printf("Enter Your Name ");
    fgets(name, sizeof(name), stdin); // Allows full name with spaces
    printf("Enter your age ");
    scanf("%d", &age);
    printf("Enter Your height\nfeet ");
    scanf("%d", &feet);
    printf("Inches ");
    scanf("%d", &inches);
    printf("Enter Your weight in kilogram ");
    scanf("%f", &weight);
    /* Above code will Store all the required information of the user to calculate BMI */
    // Convert height to meters
    height = (feet * 0.3048) + (inches * 0.0254);
    BMI = weight / (height * height);
    // Above code will calculate BMi
    printf("\n ---- User Info ---- \n");
    printf("Name -- %s" , name);
    printf("Age -- %d\n" , age);
    printf("Body Mass index -- %.2f\n" , BMI);
    // Display social media links
    printf("\n---- Connect with Me ----\n");
    printf(" LinkedIn -- https://www.linkedin.com/in/mohammad-shad-9a378b343/\n");
    printf(" GitHub -- https://github.com/ShadBuilds\n");

}
