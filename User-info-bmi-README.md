# BMI Calculator in C

This is a simple **User Info Collector & BMI Calculator** written in **C**. It collects the user's name, age, height (in feet and inches), and weight (in kg), then calculates and displays the **Body Mass Index (BMI)**.

## 🚀 Features
- Takes **name, age, height, and weight** as input
- Converts **height from feet & inches to meters**
- Calculates **BMI using the standard formula**
- Displays all user details along with **formatted BMI output**

## 🖥️ How It Works
1. The user enters their **name, age, height (feet & inches), and weight**.
2. The program **converts height** into meters.
3. The **BMI is calculated** using the formula:
   
   ```c
   BMI = weight / (height * height);
   ```
4. The **BMI result and user details** are displayed.

## 📌 Code Example
```c
#include <stdio.h>
void main()
{
    char name[100];
    int age, feet, inches;
    float BMI, height, weight;
    
    printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter Your height\nFeet: ");
    scanf("%d", &feet);
    
    printf("Inches: ");
    scanf("%d", &inches);
    
    printf("Enter Your weight in kg: ");
    scanf("%f", &weight);
    
    // Convert height to meters
    height = (feet * 0.3048) + (inches * 0.0254);
    BMI = weight / (height * height);
    
    printf("\n ---- User Info ---- \n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Body Mass Index: %.2f\n", BMI);
}
```

## 📖 What I Learned
✅ Handling **string input** properly with `fgets()`  
✅ Correctly **converting feet & inches to meters**  
✅ Formatting **output for better readability**  
✅ Debugging common **BMI calculation mistakes**

## ⚠ Mistakes to Avoid
❌ Using `scanf("%s", name);` instead of `fgets()` for safer string input  
❌ Incorrect BMI formula (`weight/height*height` instead of `weight/(height*height)`)  

## 🔗 Connect with Me
🔹 **LinkedIn:** https://www.linkedin.com/in/mohammad-shad-9a378b343/
🔹 **GitHub:**  https://github.com/ShadBuilds
## ⭐ Contribute
Want to improve this project? Feel free to **fork and submit a PR**! 🚀
