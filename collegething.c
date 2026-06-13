// // // armstrong number

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int num ,original_num, rem, count=0, sum;
//     float result;

//     printf("enyter the number");
//     scanf("%d",&num);

//     original_num=num;
//      //for count
//      while (original_num!=0)
//      {
//         original_num/=10;
//         count++;
//      }

//     printf("the count is %d\n",count);//for me
//      original_num=num;

//     while (original_num!=0)
//     {
//         rem=original_num%10;
//         result+=pow(rem,count);
//         original_num/=10;
//     }

//     if ((int)result==num)
//     {
//         printf("the number is armstrong %d\n",num);
//     }
//     else
//     {
//          printf("the number is not armstrong %d\n",num);
//     }
    

// }







// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)

// #include <stdio.h>
// int main() {
// printf("Hello, World!\n");
// return 0;
// }


// NAME: Upadhyay Lucky Virendra
//  ROLL NO : 209
// DIVISION : CMPN-D (G1)
// #include <stdio.h>
// int main() {
// float principal, rate, time, interest;
// // Input values
// printf("Enter Principal Amount: ");
// scanf("%f", &principal);
// printf("Enter Rate of Interest: ");
// scanf("%f", &rate);
// printf("Enter Time (in years): ");
// scanf("%f",&time);
// // Calculate simple interest
// interest = (principal * rate * time) / 100;
// // Output result
// printf("Simple Interest = %.2f\n", interest);
// return 0;
// }


// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)

//  Largest of Two Numbers

// #include <stdio.h>
// int main() {
// int a, b;
// printf("Enter two numbers: ");
// scanf("%d %d", &a, &b);
// if(a > b)
// printf("%d is larger\n", a);
// else
// printf("%d is larger\n", b);
// return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void strrev(char*);

// char* decimalToBinary(int decimal)
// {
//  // Allocate space for a 32-bit binary string + '\0'
//  char* binary = (char*)malloc(33);
//  int i = 0;
//  // converting to binary
//  while (decimal) {
//  binary[i++] = '0' + (decimal & 1);
//  decimal >>= 1;
//  }
//  binary[i] = '\0';
//  strrev(binary);
//  return binary;
// }


// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// 6. Multiplication Table
// #include <stdio.h>
// int main() {
// int n;
// printf("Enter a number: ");
// scanf("%d", &n);
// for(int i = 1; i <= 10; i++) {
// printf("%d x %d = %d\n", n, i, n * i);
// }
// return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// 7. Factorial of a Number
// #include <stdio.h>
// int main() {
// int n, fact = 1;
// printf("Enter a number: ");
// scanf("%d", &n);
// for(int i = 1; i <= n; i++) {
// fact = fact * i;
// }
// printf("Factorial of %d = %d\n", n, fact);
// return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// 8. Sum of Digits
// #include <stdio.h>
// int main() {
// int n, sum = 0;
// printf("Enter a number: ");
// scanf("%d", &n);
// while(n > 0) {
// sum += n % 10;
// n = n / 10;
// }
// printf("Sum of digits = %d\n", sum);
// return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// 9. Reverse a String
// #include <stdio.h>
// #include <string.h>
// int main() {
// char str[100];
// printf("Enter a string: ");
// scanf("%s", str);
// int len = strlen(str);
// printf("Reversed string: ");
// for(int i = len - 1; i >= 0; i--) {
// printf("%c", str[i]);
// }
// return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// int main() {
//     int a = 5, b = 2, result;
//     printf("Arithmetic: %d + %d = %d\n", a, b, a + b);
//     printf("Relational: %d > %d = %d\n", a, b, a > b);
//     printf("Logical: %d && %d = %d\n", a, b, a && b);
//     printf("Assignment: a += b = %d\n", a += b);
//     printf("Unary: -a = %d\n", -a);
//     result = (a > b) ? a : b;
//     printf("Conditional: %d\n", result);
//     printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);
//     printf("Comma Operator: %d\n", (a = 3, b = 4, a + b));
//     return 0;
// }


// NAME: Upadhyay Lucky Virendra
//  ROLL NO : 209
// DIVISION : CMPN-D (G1)
// #include <stdio.h>
// int main() {
//     int units, age;
//     float charge, surcharge = 0, total;
//     int discount_flag = 0;
//     float *pTotal;
//     printf("Enter total units consumed: ");
//     scanf("%d", &units);
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     charge = (units <= 100) ? units * 1.5 :
//              (units <= 300) ? units * 2.0 :
//                                units * 3.0;
//     surcharge = 0;
//     if (charge > 500) {
//         surcharge = charge * 0.1;
//     }

//     discount_flag = (age >= 60) ? (1 << 0) : 0;

//     if ((discount_flag & 1) && charge > 200) {
//         charge -= 50;
//     }
//     pTotal = &total;
//     total = (surcharge = surcharge, *pTotal = charge + surcharge);
//     printf("\n--- Electricity Bill ---\n");
//     printf("Units Consumed: %d\n", units);
//     printf("Base Charge: Rs.%.2f\n", charge);
//     printf("Surcharge: Rs.%.2f\n", surcharge);
//     printf("Total Bill: Rs.%.2f\n", total);
//     return 0;
// }

// NAME: VINEET j YADAV
//  ROLL NO : 245
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// int arithmeticRightShift(int A, int Q, int *Q_1, int n) {
//     int msbA = A >> (n - 1);        // Preserve sign bit of A
//     int lsbQ = Q & 1;
//     Q = (Q >> 1) | ((A & 1) << (n - 1));
//     A = (A >> 1) | (msbA << (n - 1));
//     *Q_1 = lsbQ;
//     return (A << n) | Q;
// }
// int main() {
//     int M, Q, A = 0, Q_1 = 0, n;
//     printf("Enter number of bits: ");
//     scanf("%d", &n);
//     printf("Enter multiplicand (M): ");
//     scanf("%d", &M);
//     printf("Enter multiplier (Q): ");
//     scanf("%d", &Q);
//     int count = n;
//     while (count > 0) {
//         int Q0 = Q & 1;
//         if (Q0 == 1 && Q_1 == 0) {
//             A = A - M;
//         } 
//         else if (Q0 == 0 && Q_1 == 1) {
//             A = A + M;
//         }
//         int msbA = A >> (n - 1);
//         Q_1 = Q & 1;
//         Q = (Q >> 1) | ((A & 1) << (n - 1));
//         A = (A >> 1) | (msbA << (n - 1));
//         count--;
//     }
//     int result = (A << n) | Q;
//     printf("\nResult = %d\n", result);
//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)

// #include <stdio.h>
// int main() {
// float income, tax;
// printf("Enter your annual income: ");
// scanf("%f", &income);
// if (income <= 250000) {
// tax = 0;
// } else if (income <= 500000) {
// tax = (income - 250000) * 0.05;
// } else if (income <= 1000000) {
// tax = 12500 + (income - 500000) * 0.20;
// } else {
// tax = 112500 + (income - 1000000) * 0.30;
// }
// printf("\n--- Income Tax Calculator ---\n");
// printf("Annual Income: Rs. %.2f\n", income);
// printf("Tax Payable : Rs. %.2f\n", tax);
// return 0;
// }

// NAME: VINEET j YADAV
//  ROLL NO : 245
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// int main() {
//     int sub1, sub2, sub3;
//     float avg;
//     printf("Enter marks of 3 subjects: ");
//     scanf("%d %d %d", &sub1, &sub2, &sub3);
//     avg = (sub1 + sub2 + sub3) / 3.0;
//     if(sub1 < 40 || sub2 < 40 || sub3 < 40) {
//         printf("Result: Fail (One or more subjects below passing marks)\n");
//     } 
//     else {
//         if(avg >= 40) {
//             printf("Result: Pass\n");
//             if(avg >= 90) {
//                 printf("Grade: A\n");
//             } else if(avg >= 75) {
//                 printf("Grade: B\n");
//             } else if(avg >= 50) {
//                 printf("Grade: C\n");
//             } else {
//                 printf("Grade: D\n");
//             }
//         } 
//         else {
//             printf("Result: Fail\n");
//         }
//     }
//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     int customers, items;
//     int i, j;
//     float price, quantity, total, grandTotal = 0;
//     printf("Enter number of customers: ");
//     scanf("%d", &customers);
//     for(i = 1; i <= customers; i++) {
//         printf("\n--- Customer %d ---\n", i);

//         printf("Enter number of items purchased: ");
//         scanf("%d", &items);

//         total = 0;   // reset total per customer
//         for(j = 1; j <= items; j++) {
//             printf("Item %d - Enter price: Rs. ", j);
//             scanf("%f", &price);

//             printf("Item %d - Enter quantity: ", j);
//             scanf("%f", &quantity);
//             total += price * quantity;  // add to customer bill
//         }
//         printf("Total bill for Customer %d: Rs. %.2f\n", i, total);
//         grandTotal += total;  
//     }
//     printf("\n=== Summary ===\n");
//     printf("Total amount from all customers: Rs. %.2f\n", grandTotal);
//     return 0;
// }



// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     float balance = 1000.0, amount;
//     char choice;
//     int attempt;
//     printf("=== Welcome to Simple ATM ===\n");
//     for (attempt = 1; attempt <= 3; attempt++) {
//         printf("Attempt %d: Current balance = Rs. %.2f\n", attempt, balance);
//         printf("Enter amount to withdraw: Rs. ");
//         scanf("%f", &amount);

//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             printf("Withdrawal successful! New balance: Rs. %.2f\n", balance);
//         } else {
//             printf("Invalid or insufficient balance!\n");
//         }
//         printf("Do you want to make another withdrawal? (y/n): ");
//         scanf(" %c", &choice);
//         if (choice == 'n' || choice == 'N') {
//             printf("Thank you for using our ATM!\n");
//             return 0;   // End program
//         }
//     }
//     printf("Maximum attempts reached. Thank you for using our ATM!\n");
//     return 0;
// }



// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     int choice, totalItems = 0;
//     float totalBill = 0;
//     char more;
//     printf("=== Welcome to Smart Cafeteria ===\n");
//     do {
//         printf("\nMenu:\n");
//         printf("1. Coffee - Rs. 50\n");
//         printf("2. Sandwich - Rs. 100\n");
//         printf("3. Cake - Rs. 80\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 printf("Coffee added to your order.\n");
//                 totalItems++;
//                 totalBill += 50;
//                 break;
//             case 2:
//                 printf("Sandwich added to your order.\n");
//                 totalItems++;
//                 totalBill += 100;
//                 break;
//             case 3:
//                 printf("Cake added to your order.\n");
//                 totalItems++;
//                 totalBill += 80;
//                 break;
//             case 4:
//                 printf("Exiting menu.\n");
//                 more = 'n'; // Directly stop ordering
//                 continue;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//                 continue;
//         }
//         printf("Do you want to order more items? (y/n): ");
//         scanf(" %c", &more);
//     } while (more == 'y' || more == 'Y');

//     printf("\n=== Checkout ===\n");
//     printf("Total items ordered: %d\n", totalItems);
//     printf("Total bill: Rs. %.2f\n", totalBill);
//     printf("Thank you for visiting Smart Cafeteria!\n");
//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// float totalInterest(float p, float r, int m) {
//     float ti = 0;
//     for(int i = 1; i <= m; i++)
//         ti += (p * r / 100);
//     return ti;
// }
// void printEMI(float p, float r, int m, int i) {
//     if(i > m) return;
//     float emi = (p * r / 100) + (p / m);
//     printf("Month %d: EMI = Rs. %.2f\n", i, emi);
//     printEMI(p, r, m, i + 1);
// }

// int main() {
//     float p, r;
//     int m;

//     printf("Enter principal: ");
//     scanf("%f", &p);
//     printf("Enter monthly interest (%%): ");
//     scanf("%f", &r);
//     printf("Enter months: ");
//     scanf("%d", &m);

//     printf("\nTotal Interest = Rs. %.2f\n", totalInterest(p, r, m));
//     printf("EMI Breakdown:\n");
//     printEMI(p, r, m, 1);

//     return 0;
// }


// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     int arr[5], i;

//     printf("Enter 5 elements:\n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Array elements are:\n");
//     for(i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// int main() {
//     int temps[7], i;
//     int max, min, sum = 0;
//     float avg;

//     printf("Enter temperatures for 7 days:\n");
//     for(i = 0; i < 7; i++) {
//         scanf("%d", &temps[i]);
//         sum += temps[i];
//     }

//     max = min = temps[0];

//     for(i = 1; i < 7; i++) {
//         if(temps[i] > max) max = temps[i];
//         if(temps[i] < min) min = temps[i];
//     }

//     avg = sum / 7.0;

//     printf("Average Temperature: %.2f°C\n", avg);
//     printf("Highest Temperature: %d°C\n", max);
//     printf("Lowest Temperature: %d°C\n", min);

//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     int a[2][2], i, j;

//     printf("Enter 4 elements for 2x2 matrix:\n");
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 2; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Matrix is:\n");
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 2; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     int beds[3][3];
//     int occupied = 0, empty = 0;
//     int i, j;

//     printf("Enter bed status (1 occupied, 0 empty):\n");

//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             scanf("%d", &beds[i][j]);
//             if(beds[i][j] == 1) occupied++;
//             else empty++;
//         }
//     }
//     printf("\nHospital Layout:\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("%d ", beds[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nTotal Occupied Beds: %d\n", occupied);
//     printf("Total Empty Beds: %d\n", empty);
//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// int main() {
//     char str[50];
//     char names[3][20];
//     int i;

//     printf("Enter a string: ");
//     gets(str);

//     printf("You entered: ");
//     puts(str);

//     printf("Enter 3 names:\n");
//     for(i = 0; i < 3; i++) {
//         gets(names[i]);
//     }

//     printf("Names are:\n");
//     for(i = 0; i < 3; i++) {
//         puts(names[i]);
//     }

//     return 0;
// }


// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// void depositValue(int balance, int amount) {
//     balance += amount;
// }

// void depositReference(int *balance, int amount) {
//     *balance += amount;
// }

// int main() {
//     int balance = 1000;

//     printf("Initial Balance: %d\n", balance);
//     depositValue(balance, 500);
//     printf("After deposit by value: %d\n", balance);
//     depositReference(&balance, 500);
//     printf("After deposit by reference: %d\n", balance);

//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char feedback[100];
//     char customers[5][30];
//     int i;

//     printf("Enter feedback: ");
//     fgets(feedback, sizeof(feedback), stdin);

//     printf("Enter 5 customer names:\n");
//     for(i = 0; i < 5; i++) {
//         fgets(customers[i], sizeof(customers[i]), stdin);
//         customers[i][strcspn(customers[i], "\n")] = '\0';
//     }

//     printf("\n--- Feedback Summary ---\n");
//     printf("Feedback: %s\n", feedback);
//     printf("Customers:\n");

//     for(i = 0; i < 5; i++) {
//         printf("- %s\n", customers[i]);
//     }

//     return 0;
// }

// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student s;

//     printf("Enter roll, name, marks:\n");
//     scanf("%d", &s.roll);
//     scanf(" ");
//     gets(s.name);
//     scanf("%f", &s.marks);

//     printf("\nStudent Information:\n");
//     printf("Roll: %d\n", s.roll);
//     printf("Name: %s\n", s.name);
//     printf("Marks: %.2f\n", s.marks);

//     return 0;
// }


// NAME: VINEET H YADAV
//  ROLL NO : 244
// DIVISION : CMPN-D (G2)
// #include <stdio.h>
// #include <string.h>

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student students[3];
//     int i;

//     for(i = 0; i < 3; i++) {
//         printf("\nEnter details for Student %d:\n", i + 1);
//         printf("Roll: ");
//         scanf("%d", &students[i].roll);
//         getchar();
//         printf("Name: ");
//         fgets(students[i].name, sizeof(students[i].name), stdin);
//         students[i].name[strcspn(students[i].name, "\n")] = '\0';
//         printf("Marks: ");
//         scanf("%f", &students[i].marks);
//     }

//     printf("\nRoll\tName\t\tMarks\n");
//     for(i = 0; i < 3; i++) {
//         printf("%d\t%-15s\t%.2f\n", students[i].roll, students[i].name, students[i].marks);
//     }

//     return 0;
// }





// // 1st
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter two number");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     printf("the sum is %d",c);

// }

// 2nd

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n<0)printf("the no is negative");
//     else if (n%2==0)printf("the no is even");
//     else printf("odd");

// }
 

// 3rd


// #include<stdio.h>
// int main(){
//     int n,i,j;
//     printf("enter the number");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         for(j = 1; j <= n - i; j++)
//         printf(" ");
//         for(j=1 ; j <= (2*i - 1) ; j++ )
//         printf("*");
//             printf("\n");
//     }

// }


// 4th
// #include<stdio.h>
// int main(){
//     int n,i=1;
//     printf("enter the number");
//     scanf("%d",&n);
//     while (i<=10)
//     {
//         printf("%dx%d=%d\n",n,i,n*i);
//         i++;
//     }
    
// }

// 5th
// #include <stdio.h>
// int main() {
//     int a, b, choice;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1: printf("Sum = %d\n", a+b); break;
//         case 2: printf("Difference = %d\n", a-b); break;
//         case 3: printf("Product = %d\n", a*b); break;
//         case 4: if (b!=0) printf("Quotient = %d\n", a/b);
//                 else printf("Cannot divide by zero\n");
//                 break;
//         default: printf("Invalid choice\n");
//     }
//     return 0;
// }

// 6th
// #include<stdio.h>
// int main(){
//     int a,b,choose;
//     printf("enter two no");
//     scanf("%d %d",&a,&b);
//     printf("1.add\n2.sub\nmult\n,div\n");
//     scanf("%d",&choose);
//     switch(choose){
//         case 1:printf("sum is %d\n",a+b);break;
//             case 2:printf("diff is %d\n",a-b);break;
//             case 3:printf("divi is %d\n",a/b);break;
//             default: printf("invalid");   
//     }


// }





// 6th

// #include<stdio.h>
// int main(){
//     int a[50],n,max,min,i;
//     printf("enter size");;
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     scanf("%d",&a[i]);

//     min=max=a[0];
//     for(i=0;i<n;i++){
//         if(a[i] > max)max=a[i];
//          if(a[i]< min)min=a[i];
//     }
//     printf("max=%d\nmin=%d\n",max,min);
// }



