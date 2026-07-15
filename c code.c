/*#include <stdio.h>
#include <stdlib.h>

int main()/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(20 * sizeof(int));  

    if(ptr == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }

    printf("Memory was allocated successfully\n");

    printf("Enter 20 numbers:\n");
    for(int i = 0; i < 20; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", &ptr[i]);             
    }

    
    printf("\nStored elements:\n");
    for(int i = 0; i < 20; i++)
    {
        printf("Element[%d] = %d\n", i, ptr[i]);  
    }

    free(ptr);    

    return 0;

}*/
/*#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr,n,i;
    printf("Enter the element\n");
    scanf("%d",&n);

    ptr = (int *)malloc(20 * sizeof(int));  

    if(ptr == NULL)
   {
    printf("Not enough memory to allocate buffer\n");
        exit(1);
   } printf("Memory was allocated successfully\n");
   printf("Enter the elemnt");
     for(int i = 0; i < 20; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", &ptr[i]);  
         printf("Enter the elemnt");}
           for(int i = 0; i < 20; i++)
    {
        printf("Element[%d]: ", i);
        printf("%d", ptr[i]);              

   
}
}*/
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i;

    printf("How many elements: ");
    scanf("%d", &n);                         

    ptr = (int *)malloc(n * sizeof(int));     
    if(ptr == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }

    printf("Memory allocated successfully\n");

    // Input loop
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", (ptr + i));              
    }

    // Output loop
    printf("\nStored elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("Element[%d] = %d\n", i, *(ptr + i));  
    }
    //free(ptr);//                                

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    auto int i,j;
printf("\n%d %d",i,j);
}*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    auto int i=1;
    {
        {
            {
                printf("\n%d",i);
            }printf("\n%d",i);
        }printf("\n%d",i);
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    auto int i=1;
    {
         auto int i=2;
    
     {
         auto int i=3;
         printf("\n%d",i);

    }
    printf("\n%d",i);
    }
    printf("\n%d",i);
}*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    auto int i=1;
    {
         auto int i=2;
    
     {
         auto int a=3;
         printf("\n%d",a);

    }
    printf("\n%d",a);
    }
    printf("\n%d",i);
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    void increment();
 increment();
 increment();
 increment();
}
increment()
{
    auto int i=1;
    printf("%d\n",i);
    i=i+1;
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    void increment();
 increment();
 increment();
 increment();
}
increment()
{
    static int i=1;
    printf("%d\n",i);
    i=i+1;
}*/

/*#include <stdio.h>

int i;                    // global variable, auto-initialized to 0

void increment();         // function prototypes
void decrement();

int main()
{
    printf("i = %d", i);  // prints initial value 0

    increment();
    increment();
    decrement();
    decrement();

    return 0;
}

void increment()
{
    i = i + 1;
    printf("\nAfter increment i = %d", i);
}

void decrement()
{
    i = i - 1;
    printf("\nAfter decrement i = %d", i);
}*/

/*#include <stdio.h>
#include <stdlib.h>
int x=10;
void main()
{
int x=20;
void display();
printf("\n%d",x);
display();
}
void display()
{
    printf("\n%d",x);
}*/

/*#include <stdio.h>

struct book                
{
    char name;
    float price;
    int pages;
};

int main()
{
    struct book b1 = {'B', 130.00, 500};

    printf("Name   = %c\n",  b1.name);
    printf("Price  = %.2f\n", b1.price);
    printf("Pages  = %d\n",  b1.pages);

    
    printf("\nAddress of name  = %u\n", &b1.name);
    printf("Address of price = %u\n", &b1.price);
    printf("Address of pages = %u\n", &b1.pages);

    return 0;
}*/

#include <stdio.h>

struct book
{
    char name;
    float price;
    int pages;
};

int main()
{
    struct book b1;

    
    printf("Enter name : ");
    scanf(" %c", &b1.name);       

    printf("Enter price: ");
    scanf("%f", &b1.price);       

    printf("Enter pages: ");
    scanf("%d", &b1.pages);       


    printf("\n Book Details \n");
    printf("Name  = %c\n",  b1.name);
    printf("Price = %.2f\n", b1.price);
    printf("Pages = %d\n",  b1.pages);

    return 0;
}


#include <stdio.h>

struct Student
{
    char name[25];
    char rollno[15];    
    float percentage;   
};

int main()
{
    struct Student s[10];
    int i;
    char search[15];

    // Input loop
    for(i = 0; i < 10; i++)   
    {
        printf("\nEnter details for Student[%d]:\n", i+1);

        printf("Name       : ");
        scanf(" %s", s[i].name);

        printf("Roll No    : ");
        scanf(" %s", s[i].rollno);

        printf("Percentage : ");
        scanf("%f", &s[i].percentage);
    }

    // Search by roll number
    printf("\n Search ");
    printf("\nEnter Roll No to find percentage: ");
    scanf(" %s", search);

    int found = 0;
    for(i = 0; i < 10; i++)
    {
        if(strcmp(s[i].rollno, search) == 0)   // compare roll numbers
        {
            printf("\nStudent Found!");
            printf("\nName       = %s", s[i].name);
            printf("\nRoll No    = %s", s[i].rollno);
            printf("\nPercentage = %.2f%%\n", s[i].percentage);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nStudent with Roll No %s not found!\n", search);

    return 0;
}
{
int *ptr;
ptr = (int *)malloc(20 * sizeof(int));

if(ptr == NULL)
{
printf("Not enough memory to allocate buffer\n");
exit(1);
}

printf("Memory was allocated successfully\n");

printf("Enter 20 numbers:\n");
for(int i = 0; i < 20; i++)
{
printf("Element[%d]: ", i);
scanf("%d", &ptr[i]);
}


printf("\nStored elements:\n");
for(int i = 0; i < 20; i++)
{
printf("Element[%d] = %d\n", i, ptr[i]);
}

free(ptr);

return 0;

}*/
/*#include <stdio.h>
#include <stdlib.h>

void main()
{
int *ptr,n,i;
printf("Enter the element\n");
scanf("%d",&n);

ptr = (int *)malloc(20 * sizeof(int));

if(ptr == NULL)
{
printf("Not enough memory to allocate buffer\n");
exit(1);
} printf("Memory was allocated successfully\n");
printf("Enter the elemnt");
for(int i = 0; i < 20; i++)
{
printf("Element[%d]: ", i);
scanf("%d", &ptr[i]);
printf("Enter the elemnt");}
for(int i = 0; i < 20; i++)
{
printf("Element[%d]: ", i);
printf("%d", ptr[i]);


}
}*/
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
int *ptr, n, i;

printf("How many elements: ");
scanf("%d", &n);

ptr = (int *)malloc(n * sizeof(int));
if(ptr == NULL)
{
printf("Not enough memory to allocate buffer\n");
exit(1);
}

printf("Memory allocated successfully\n");

// Input loop
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++)
{
printf("Element[%d]: ", i);
scanf("%d", (ptr + i));
}

// Output loop
printf("\nStored elements:\n");
for(i = 0; i < n; i++)
{
printf("Element[%d] = %d\n", i, *(ptr + i));
}
//free(ptr);//

return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
auto int i,j;
printf("\n%d %d",i,j);
}*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
auto int i=1;
{
{
{
printf("\n%d",i);
}printf("\n%d",i);
}printf("\n%d",i);
}
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
auto int i=1;
{
auto int i=2;

{
auto int i=3;
printf("\n%d",i);

}
printf("\n%d",i);
}
printf("\n%d",i);
}*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
auto int i=1;
{
auto int i=2;

{
auto int a=3;
printf("\n%d",a);

}
printf("\n%d",a);
}
printf("\n%d",i);
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
void increment();
increment();
increment();
increment();
}
increment()
{
auto int i=1;
printf("%d\n",i);
i=i+1;
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
void increment();
increment();
increment();
increment();
}
increment()
{
static int i=1;
printf("%d\n",i);
i=i+1;
}*/

/*#include <stdio.h>

int i;                    // global variable, auto-initialized to 0

void increment();         // function prototypes
void decrement();

int main()
{
printf("i = %d", i);  // prints initial value 0

increment();
increment();
decrement();
decrement();

return 0;
}

void increment()
{
i = i + 1;
printf("\nAfter increment i = %d", i);
}

void decrement()
{
i = i - 1;
printf("\nAfter decrement i = %d", i);
}*/

/*#include <stdio.h>
#include <stdlib.h>
int x=10;
void main()
{
int x=20;
void display();
printf("\n%d",x);
display();
}
void display()
{
printf("\n%d",x);
}*/

/*#include <stdio.h>

struct book
{
char name;
float price;
int pages;
};

int main()
{
struct book b1 = {'B', 130.00, 500};

printf("Name   = %c\n",  b1.name);
printf("Price  = %.2f\n", b1.price);
printf("Pages  = %d\n",  b1.pages);


printf("\nAddress of name  = %u\n", &b1.name);
printf("Address of price = %u\n", &b1.price);
printf("Address of pages = %u\n", &b1.pages);

return 0;
}*/

#include <stdio.h>

struct book
{
char name;
float price;
int pages;
};

int main()
{
struct book b1;


printf("Enter name : ");
scanf(" %c", &b1.name);

printf("Enter price: ");
scanf("%f", &b1.price);

printf("Enter pages: ");
scanf("%d", &b1.pages);


printf("\n Book Details \n");
printf("Name  = %c\n",  b1.name);
printf("Price = %.2f\n", b1.price);
printf("Pages = %d\n",  b1.pages);

return 0;
}


#include <stdio.h>

struct Student
{
char name[25];
char rollno[15];
float percentage;
};

int main()
{
struct Student s[10];
int i;
char search[15];

// Input loop
for(i = 0; i < 10; i++)
{
printf("\nEnter details for Student[%d]:\n", i+1);

printf("Name       : ");
scanf(" %s", s[i].name);

printf("Roll No    : ");
scanf(" %s", s[i].rollno);

printf("Percentage : ");
scanf("%f", &s[i].percentage);
}

// Search by roll number
printf("\n Search ");
printf("\nEnter Roll No to find percentage: ");
scanf(" %s", search);

int found = 0;
for(i = 0; i < 10; i++)
{
if(strcmp(s[i].rollno, search) == 0)   // compare roll numbers
{
printf("\nStudent Found!");
printf("\nName       = %s", s[i].name);
printf("\nRoll No    = %s", s[i].rollno);
printf("\nPercentage = %.2f%%\n", s[i].percentage);
found = 1;
break;
}
}

if(!found)
printf("\nStudent with Roll No %s not found!\n", search);

return 0;
} 
 ADDITION OF NO.
#include<stdio.h>
int main()
{
    int a,b,c;
    a=2;
    b=3;
    c=a+b;
    printf("sum is = %d",c);
    return 0;
}
…………………………………………………………………………
ADDITION OF TWO NO. 
BY INPUT
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a value of A : ");
    scanf("%d",&a);
    printf("Enter a value of B : ");
    scanf("%d",&b);
    c = a - b;
    printf("sub is : %d ",c);
}
……………………………………………………………………………
AREA OF CIRCLE
#include<stdio.h>
int main()
{
    float rad,area;
    printf("Enter radius of circle : ");
    scanf("%f",&rad);
    area = rad*rad*3.14;
   
    printf("Area  is : %f ",area);
}
……………………………………………………………………………
AREA OF TRIANGLE
#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter base of triangle : ");
    scanf("%f",&b);
     printf("Enter height of triangle : ");
    scanf("%f",&h);
    area = b*h*0.5;
   
    printf("Area  is : %f ",area);
}
……………………………………………………………………
IF () PETROL PRICE 
#include<stdio.h>
int main()
{
    float price;
    printf("Enter current price of petrol : ");
    scanf("%f",&price);
    if (price>250)
    {
        printf("convert your vehicle into EV ");
    }
    else
    {
        printf("Wait for price hike");
    }
    return 0;
    

}
………………………………………………………………
IF ELSE IF () LAB SE RELATED 
#include<stdio.h>
int main()
{
    int l1=40,l2=45,l3=50,l4=55,count;
    printf("Enter the count of student : ");
    scanf("%d",&count);
    if(count>0 && count<=40)
    {
        printf("Allot lab 1");
    }
    else if(count>40 && count<=45)
     {
        printf("Allot lab 2");
    }
 
    else if(count>45 && count<=50)
     {
        printf("Allot lab 3");
    }
    else if(count>50 && count<=55)
    {
        printf("Allot lab 4");
    }
    else 
    {
        printf("Go to seminar hall ");
    }

}
………………………………………………………………
IF ELSE () DUSTBIN SE RELATED
#include<stdio.h>
int main()
{
  int d;
  printf("enter  the value between 1-10 : ");
  scanf("%d",&d);
  if(d>0 && d<5)
  {
      printf("Dustbin is empty ");
  }
  else if(d>=5 && d<=6)
  {
      printf("Dustbin is near to half filled ");
  }
  else if(d>5 && d<10)
  {
      printf("Dustbin is near to full");
  }
  else if(d==10)
  {
      printf("Dustbin is full");
  }
  else 
  {
      printf("take another Dustbin");
  }

}
……………………………………………………………
NESTED IF ()
ATM MACHINE
#include<stdio.h>
int main()
{
    int card=1,pin=4567,bal=5000,w=0;
    if(card==1)
    {
        if(pin==4567)
        {
            if(bal<=5000)
            {
                printf("Transection successful");
                
            }else
            {
                printf("insufficient fund");
            }
            
        }else
        {
            printf("Invalid pin");
        }
        
    }else
    {
        printf("Invalid card");
    }

}
…………………………………………………………
DISCOUNT BILL IF ELSE PROGRAM
#include<stdio.h>
int main()
{
    float total,bill,dis;
    printf("Enter anount : ");
    scanf("%f",&total);
    if(total>10 && total<=50)
    {
        dis = (total*2)/100;
        bill =total-dis;
         printf("your bill is : %f ",bill);
    }
    else   if(total>50 && total<=200)
    {
        dis = (total*5)/100;
        bill =total-dis;
        printf("your bill is : %f ",bill);
    }
    else   if(total>200 && total<=1000)
    {
        dis = (total*10)/100;
        bill =total-dis;
        printf("your bill is : %f ",bill);
    }
    else   if(total>1000 && total<=2000)
    {
        dis = (total*50)/100;
        bill =total-dis;
        printf("your bill is : %f ",bill);
    }
    else
    {
        printf("No Discount : sorry!");
    }
}    
……………………………………………………………….
SWITCH ()
#include<stdio.h>
int main()
{
   char input;
   int a=10,b=20,c;
   printf("Enter any cahracter '+,-,*,/' : ");
   scanf("%c",&input);
   switch(input)
   {
       case '+':
       c=a+b;
       printf("sum is : %d",c);
       break;
       case '-':
       c=a-b;
       printf("sub is : %d",c);
       break;
       case '*':
       c=a*b;
       printf("mul is : %d",c);
       break;
       case '/':
       c=a/b;
       printf("div is : %d",c);
       break;
       default:
       printf("invalid input \n sorry!");
       break;
   }
}    
…………………………………………………………
SWAPPING….
#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("A=%d,B=%d\n",a,b);
    c=a;                    
    a=b;
    b=c;
     printf("A=%d,B=%d",a,b);
    
}
…………………………………………………….. 
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("A=%d,B=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
     printf("A=%d,B=%d",a,b);
    
}
…………………………………………………………….
Largest no. 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a first number : ");
    scanf("%d",&a);
    printf("Enter a second number : ");
    scanf("%d",&b);
    printf("Enter a third number : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("largest number is : %d",a);
    }
    else if(b>c && b>a)
    {
        printf("largest number is : %d",b);
    }
    else
    {
          printf("largest number is : %d",c);
    }

}
   …………………………………………………………………………
Electricity bill with 18% GST

#include<stdio.h>
int main()
{
   float unit,bill,gst,extra;
   printf("Enter unit : ");
   scanf("%f",&unit);
   if(unit>0 && unit<=100)
   {
       bill=unit*5;
       gst=(bill*18)/100;
       bill =bill+gst;
       printf("your bill is : %f",bill);
   }
   else if(unit>100 && unit<=200)
   {
       extra=unit-100;
       bill=500+(extra*7);
       gst=(bill*18)/100;
       bill =bill+gst;
       printf("your bill is : %f",bill);
   }
    else if(unit>200)
   {
       extra=unit-200;
       bill=1200+(extra*10);
        gst=(bill*18)/100;
       bill =bill+gst;
       printf("your bill is : %f",bill);
   }

}
   ………………………………………………………
Salary      
#include<stdio.h>
int main()
{
    float basic,hra,da,ta,gross,salary;
    printf("Enter your basic salary : ");
    scanf("%f",&basic);
    hra=(basic*20)/100;
    da=(basic*50)/100;
    ta=(basic*10)/100;
    gross=basic+hra+ta+da;
    if(gross>50000)
    {
        salary=gross-(gross*10)/100;
        printf("your net salary is : %f",salary);
    }
    else 
    {
         printf("your net salary is : %f",salary);
    }
    
   
}
   …………………………………………………………
COURIER CHARGE CALCULATOR --------
#include<stdio.h>
int main()
{
    float charge,weight ,distance,delivery;
    printf("Enter a weight of parcel in Kg : ");
    scanf("%f",&weight);
    printf("Enter a distance in Km: ");
    scanf("%f",&distance);
    printf("Enter a deliver type amount ? \n express delivery  = 100 rupees\nsame day delivery = 500 rupees : ");
    scanf("%f",&delivery);
    if(delivery==100)
    {
    charge =(weight*10)+(distance*2)+100;
    printf("Your courier charge is : %f",charge);
    }
    else if(delivery==500)
    {
    charge =(weight*10)+(distance*2)+500;
    printf("Your courier charge is : %f",charge);
    }
else 
    {
     printf("Invalid Delivery type\n Sorry!");   
    }
} 
……………………………………………………………
BMI calculator-------
#include<stdio.h>
int main()
{
    float bmi,weight,height;
    printf("Enter a weight in Kg : ");
    scanf("%f",&weight);
    printf("Enter a height in m : ");
    scanf("%f",&height);
    bmi=weight/(height*height);
    printf("your bmi is : %f\n",bmi);
    if(bmi<18.5)
    {
        printf("you are underweight !");
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        printf("you are normal !");
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        printf("you are overweight !");
    }
        else if(bmi>=30)
    {
        printf("you are obese !");
    }
    else
    {
        printf("Invalid Data ");
    }
}
………………………………………………………………
NUMBER CLASSIFICATION-------------
Pos/neg/zero
Even/odd
Divisible by both 3and 5
Multiple of 7
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("number is zero\n");
    }
    else if(n<0)
    {
        printf("number is negative\n");
         if(n%2==0)
        {
            printf("number is even\n");
            if(n%3==0 && n%5==0)
            {
                printf("number is divisible by both 3 and 5\n");
                if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
            else
            {
                 printf("number is not divisible by both 3 and 5\n");
                 if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
        }
        else
        {
             printf("number is odd\n");
             if(n%3==0 && n%5==0)
            {
                printf("number is divisible by both 3 and 5\n");
                if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
            else
            {
                 printf("number is not divisible by both 3 and 5\n");
                 if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
        }
    }
    else if(n>0)
    {
        printf("number is positive\n");
        if(n%2==0)
        {
            printf("number is even\n");
            if(n%3==0 && n%5==0)
            {
                printf("number is divisible by both 3 and 5\n");
                if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
            else
            {
                 printf("number is not divisible by both 3 and 5\n");
                 if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
        }
        else
        {
             printf("number is odd\n");
             if(n%3==0 && n%5==0)
            {
                printf("number is divisible by both 3 and 5\n");
                if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
            else
            {
                 printf("number is not divisible by both 3 and 5\n");
                 if(n%7==0)
                {
                    printf("number is multiple of 7 ");
                }
                else
                {
                  printf("number is not multiple of 7 ");  
                }
                
            }
        }
    }
}
……………………………………………………………
LOOP
WHILE 
#include <stdio.h>

int main()
{
    int i=10;
    while(i>=1)
    {
       printf("%d\n",i);
        i--;
    }
    return 0;
}
……………………………………………………
Prime no.------------
#include <stdio.h>
int main()
{
    int n,i=1,count=0;
    printf("enter any number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
      printf("prime");
    }
    else{
        printf("not prime");
    }
}
…………………………………………………………
DO WHILE ----------
PIN CHECK
#include <stdio.h>
int main()
{
    int p,pin=8855,attempt=4 ;
    do
    {
        printf("enter your pin : ");
        scanf("%d",&p);

        if(p==pin)
        {
            printf("Card varified");
        }
        else
        {
            attempt--;
            printf("remaining attempt = %d\n",attempt);
            printf("not verified\n");       
        }
        if(attempt==0)
        {
            printf(" your Card is blocked !....");
            break;
        }
    }
    while(p!=pin);
}
………………………………………………………
// FABONIA SERIES 
#include <stdio.h>
int main()
{
    int c, a=0,b=1,i=1;
    printf("%d",a);
    printf("%d",b);
    while(i<=20)
    {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    i++;
    }
}
…………………………………………………………
REVERSE NO.
#include <stdio.h>

int main() {
    int rev=0,n,m;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
        
    }
    printf("%d",rev);

    return 0;
}
……………………………………………………………
FOR LOOP 
FACTORIAL
#include <stdio.h>
int main() {
    int fac=1,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("factorial is : %d",fac);
    
    return 0;
}
…………………………………………………………….
Table of any no. in this form 2X1=2
#include <stdio.h>
int main() {
    int n,tab;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        tab=n*i;
        printf("\n%d X %d=%d",n,i,tab);
    }
    
    return 0;
}
……………………………………….
Palindrome number------

int main() {
    int rev=0,n,m,temp;
    printf("enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    printf("%d\n",rev);
    if(temp==rev)
    {
        printf("palindrome number");
    }
    else
    {
      printf("not palindrome number");  
    }
    return 0;
}
…………………………………………………
Askey value 100 tak
#include <stdio.h>
int main() {
   
    for(int i=1;i<=100;i++)
    {
        
        printf("\n%d = %c",i,i);
    }
    
    return 0;
}
………………………………………………..
Program user se no. lenge uska character batana hai 
#include <stdio.h>
int main() {
   int n ;
   printf("enter a number : ");
   scanf("%d",&n);
   printf("\n%c=%d",n,n);
    
    return 0;
}
……………………………………………….
111
222
333
#include <stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
     return 0;
}
………………………………………………….
1
22
333
#include <stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
     return 0;
}
…………………………………………………
123
123
123
#include <stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
     return 0;
}
………………………………………………………
*
**
*** 
**
*
#include <stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=3;i++)
    {
        for(int j=2;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}
………………………………………………………
       *
    * *
   * * *
  * * * *
 * * * * *
     *
    * *
   * * *
  * * * *
 * * * * *
     *
     *
     *

#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
    for(int i=1;i<=3;i++)
    {
         for(int k=1;k<=2;k++)
        {
            printf("  ");
        }
        for(int j=1;j<=1;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
    
    
    
     return 0;
}
……………………………………………………….
      *
    * *
   * * *
  * * * *
 * * * * *
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
}
………………………………………………
      *
    * *
   * * *
  * * * *
 * * * * *
      *
      *
      *
#include <stdio.h>
int main()
{
    
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
    for(int i=1;i<=3;i++)
    {
         for(int k=1;k<=2;k++)
        {
            printf("  ");
        }
        for(int j=1;j<=1;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
     return 0;
}
……………………………………………………
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
     for(int i=5;i>=1;i--)
    {
        for(int k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf(" *");
        } 
     printf("\n");
    }
}
………………………………………………
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j == 1 || j == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i = 4; i >= 1; i--)
    {
        for(int k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j == 1 || j == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
……………………………………………
SWITCH……()
int main() 
{
    char ch;
    printf("Enter any character s,m,t,w,v,f,c : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 's' : 
        printf("sunday !");
        break;
         case 'm' : 
        printf("monday !");
        break;
         case 't' : 
        printf("tuesday !");
        break;
         case 'w' : 
        printf("wednesday !");
        break;
         case 'v' : 
        printf("thursday !");
        break;
         case 'f' : 
        printf("friday !");
        break;
         case 'c' : 
        printf("saturday !");
        break;
        default:
        printf("Invalid charcter!");
        break;
    }
   
}
………………………………………………………..
Print even no. b/w 1-10
#include <stdio.h>
int main() {
    for(int i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
} 
……………………………………………….
Sum of 4 no. by array
#include <stdio.h>
int main()
{
    int a[4];
    int sum=0;
    for(int i=0;i<4;i++)
    {
     printf("enter  number A[%d] : ",i);
     scanf("%d",&a[i]);
        sum=sum+a[i];
    }
     printf("sum is : %d",sum);
}
………………………………………………………….
Largest no. by array
#include <stdio.h>
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
     printf("enter  number A[%d] : ",i);
     scanf("%d",&a[i]);
    }
        if(a[0]>a[1] && a[0]>a[2])
    {
        printf("The Largest Value fo A[0] = %d");
    }
    else   if(a[1]>a[0] && a[1]>a[2])
    {
        printf("The Largest Value fo A[1] = %d");
    }
    else 
    {
      printf("The Largest Value fo A[2] = %d");  
    }
}
………………………………………………….
Ascending order of no. by array -------
#include <stdio.h>
int main() {
    int n;
    printf("Size of Array : ");
    scanf("%d",&n);
    int a[n],temp;
    for(int i=0; i<n; i++)
    {
        printf("Enter value of A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
       {
          if(a[j]>a[j+1])
          { 
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}    
…………………………………………………..
2D ARRAY
int main() 
{
    int a[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter value of a[%d][%d] : ",i,j );
            scanf("%d",&a[i][j]);
        }
        
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("a[%d][%d] : %d\n",i,j,a[i][j]);
        }
        
    }
    return 0;
}
……………………………………………………..
 Matrix by 2d array
#include <stdio.h>

int main() 
{
    int a[2][2],b[2][2],c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter value of a[%d][%d] : ",i,j );
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter value of b[%d][%d] : ",i,j );
            scanf("%d",&b[i][j]);
        }
        
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("c[%d][%d] : %d\n",i,j,c[i][j]);
        }
        
    }
    return 0;
}
……………………………………………………..
#include <stdio.h>

int main() 
{
    int a[2][2],b[2][2],c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter value of a[%d][%d] : ",i,j );
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter value of b[%d][%d] : ",i,j );
            scanf("%d",&b[i][j]);
        }
        
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("c[%d][%d] : %d\n",i,j,c[i][j]);
        }
        
    }
     
    return 0;
}
……………………………………………………………
ARAAY SE DISCOUNT  BILL 
   if(total<500)
        {
         dis=(total*10)/100;
         total=total-dis;
         printf("%f",total);
        }
         else if(total>500)
        {
         dis=(total*20)/100;
         total=total-dis;
         printf("%f",total);
        }
………………………………………………………………….
Array se middle value print
#include <stdio.h>
int main() 
{
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter value of : a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        printf("middle value is : %d %d",a[n/2],a[(n/2)-1]);
    }
    else
    {
         printf("Middle value is : %d",a[n/2]);
    }
    
    return 0;
}
…………………………………………………….
Find vowel and consonant in your name
#include <stdio.h>
int main() 
{
    int n ,vowel=0,cons=0;
    printf("How many character in your name : ");
    scanf("%d",&n);
    char name[n];
    printf("enter your name :  ");
    scanf("%s",&name[0]);
    printf("my name is %s\n",name);
    for(int i=0;i<n;i++)
    {
       if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' )
       {
           vowel++;
       }
       else{
           cons++;
       }
      
    }
     printf("total vowel : %d\n",vowel);
     printf("total consonant : %d",cons);
    
    return 0;
}
…………………………………………………..
Find askey value of your name 
#include <stdio.h>
int main() 
{
    char name[]="Ravi";
    int size = sizeof(name);
    for(int i=0;i<size;i++)
    {
        printf("\n%c=%d",name[i],name[i]);
    }
}
………………………………………………………………………
Encode your name 
#include <stdio.h>
int main() 
{
    char name[4];
    printf("enter your name :  ");
    scanf("%s",&name);
    char encode[26]="@f#h54dhfkds74649E$%hjsihd";
    char code[26]="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(name[i]==code[j])
            {
                printf( "%c",encode[j]);
            }
        }
    }
}
…………………………………………………………… 
  Function -----
 is a block of code which perform specific task
Predefined Function
    - Language Functions 
  User Defined Function 
  
  1. Default Function 
       void hello()
       {
            printf("Welcome");
       }
       hello(); // calling the function


  2. Parameterized Function 
  3. Return Type Function 
*/

#include<stdio.h> 
void hello()
{
    printf("Welcome to our default function");
}
int main()
{
    hello();
    return 0;
}

………………………………………………………
Function add two no.
#include <stdio.h>

void sum(int a, int b)
{
    int c = a+b;
    printf("Sum = %d",c);
}

int main() {
    sum(2,3);
    return 0;
}

………………………………………………………..
Simple intrest by function
#include <stdio.h>

void simple_int(float p, float r,float t)
{
    float si= (p*r*t)/100;
    printf("Si = %f",si);
}

int main() {
    simple_int(30000,4,5);
    return 0;
}

………………………………………………………..
Mul of two no. by function
#include <stdio.h>
int mul(int a, int b)
{
    int c = a*b;
    return c;
}

int main() {
    int ans = mul(2,3);
    printf("Ans = %d",ans);
    return 0;
}
…………………………………………………..
Function – (+,*,/,-)
#include <stdio.h>

int sum(int a, int b)
{
    int c = a+b;
    return c;
}
int div(int a, int b)
{
    int c = a/b;
    return c;
}
int sub(int a, int b)
{
    int c = a-b;
    return c;
}
int mul(int a, int b)
{
    int c = a*b;
    return c;
}

int main() {
   
    printf("MUL = %d\n",mul(2,3));
    printf("DIV = %d\n",div(2,3));
    printf("SUB = %d\n",sub(2,3));
    printf("SUM = %d\n",sum(2,3));
    return 0;
}

………………………………………………
Function –area
#include <stdio.h>

float aoc(float rad)
{
    float area=3.14*rad*rad;
    return area;
}
float coc(float rad)
{
    float cir = 2*3.14*rad;
    return cir;
}
float aor(float l, float b)
{
    float area = l*b;
    return area;
}
float aot(float b, float h)
{
    float area = 0.5*b*h;
    return area;
}

int main() {
   
    printf("aoc = %f\n",aoc(3));
    printf("coc = %f\n",coc(2));
    printf("aor = %f\n",aor(2,3));
    printf("aot = %f",aot(2,3));
    return 0;
}

…………………………………………………………..
Factorial -----function 
#include <stdio.h>
int fac(int a)
{
     int fac=1;
    for(int i=1;i<=a;i++)
    {
         fac=fac*i;
         
    }
    return fac;
   
}

int main() {
printf("Factorial = %d",fac(5));
    
}
…………………………………………………….
Recursion -----
Factorial
#include <stdio.h>
int fact(int a)
{
    if(a<1)
    {
        return 1;
    }
    else 
    {
        return a * fact(a-1);
    }
}
int main() {
    int result = fact(5);
    printf("Fact = %d",result);
    return 0;
}
…………………………………………………
Last Class we have discussed :
 1. Function Function is a block of code which perform specific Task Type of Function Predefined User Defined Default Function int hello(int a) { // Statement return 1; } void main() { int c = hello(2); } Parameterized Function Return Type Function String: Group of Character is called string "Welcome" "2343434" "c" How to store String char a[] = "Well" a[0] = W a[1] = e a[2] = l a[3]= l a[4] =\0 - Null Character
………………………………………
Consecutive 1s by string
#include <stdio.h>
int main() {
    char a[]="1011001111011011111110";   
    int find[sizeof(a)];
    int k=0,max;
    int count=0;
    for(int i=0; i<sizeof(a); i++)
    {
        if(a[i]=='1')
        {
            count++;
        }
        if(a[i]=='0')
        {
         find[k] = count;      
         count=0;
         k++;
        }
    }
    
    for(int j=0; j<k;j++)
    {
        
           if(find[j]>find[j+1])
           {
              max = find[j];
              find[j+1] = find[j];
           }
    }
    printf("%d",max);

    return 0;
}

……………………………………………..
String Function 
gets()                    fgets() - String Input
 puts()                  fputs() - String Print Output\

String Predefined Function : 
Length - strlen()-get the length
 Reverse - strrev()-reverse the string
 Lower/Upper - strlwr(), strupr()-upper case-lowercase 
 Concat - strcat() - Merge String
 Compair - strcmp() - 0, 1, -1
Strcat()-combine 
Strcmp()-compare


#include <stdio.h>
int main() {
    char name[10];
    printf("Enter Your Name : ");
    fgets(name,sizeof(name),stdin);
    puts(name);
    char email[20];
    printf("Enter Your email : ");
    fgets(email,sizeof(email),stdin);
    puts(email);
    char number[10];
    printf("Enter Your Number : ");
    fgets(number,sizeof(number),stdin);
    puts(number);
    return 0;
}
…………………………………………
Length of string------
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="Rahul";
    int leng = strlen(name);
    printf("Length = %d",leng);

    return 0;
}
…………………………………………..
Add two string-------
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="Rahul";
    char a1[20]="Ravi";
    strcat(a1,a);
    printf("%s",a1);

    return 0;
}
…………………………………………
Reverse the name -------------
#include <stdio.h>
#include <string.h>

int main()
{
    char name[]="Rahul";
    printf("Original Name = Rahul ");
    printf("Reverse Name = ");
    for(int i=sizeof(name);i>=0;i--)
    {
        printf("%c",name[i]);
    }

}
…………………………………………….
POINTER:
 Pointer is a special variable which store the address of Another Variable. Pointer variable is used to store memory address. Declaration of Pointer datatype *var_name; int *p; Pointer hold the address of Same Datatype. int *p , a; p = &a;
#include <stdio.h>

int main() {
    int a=10;
    int *p;
    p = &a;
    printf("%u",p);
    return 0;
}
………………………………………………
#include <stdio.h>

int main() {
    int a=10;
    int *p;
    p = &a;
    printf("%u",*p);
    return 0;
}
……………………………………………….
Swapping no. by pointer-----
#include <stdio.h>
int main() {
    int a=10,b=20, *p, *q,s;
    p = &a;
    q = &b;
    *p=*p+*q-(*q=*p);
    printf("%u\n",*p);
    printf("%u",*q);
    return 0;
}

……………………………………………….
Swapping by function in pointer----
#include <stdio.h>
void swap(int *p, int *q)
{
    int temp;
    temp = *p; 
    *p = *q;
    *q = temp;
     
}
int main() {
    int a=10,b=20, *p, *q;
    p = &a;
    q = &b;
    printf("A=%d and B=%d\n",a,b);
    swap(p,q);
    printf("A=%d and B=%d",a,b);
    return 0;
}
……………………………………………
Pointer with array
#include <stdio.h>
int main() {
   int a[5]={2,3,5,6,7};
   int *p;
   p = &a[0];
   *(p+2)=8;
   printf("%u\n",*(p+2));
   printf("%d",a[2]);
   return 0;
}

…………………………………………

Reverse array by pointer-------
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
   
    for(int i=4;i>=0;i--)
    {
         p=&a[i];
        printf("%d\n",*p);
    }
}

…………………………………………

#include <stdio.h>
int main() {
    int a[4]={5,3,9,1};
    int *p;
    p = &a[0];
    for(int i=3; i>=0; i-- )
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
……………………………………………
Array-----
#include <stdio.h>
int main() {
    int a[5]={2,3,8,1,2};
    int temp=0;
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-1;j++)
       {
          if(a[j]>a[j+1])
          { 
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
       }
    } 
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nthe second largest value is %d",a[4-1]);
    return 0;
}    
……………….……………………………..
Pointer -----
Length of array
#include <stdio.h>
int main() 
{
    char *s="Hello";
    int count=0;
    while(*s)
    {
        count++;
        s++;
    }
    printf("length = %d",count);
    return 0;
}
…………………………………………………
#include <stdio.h>
int main() 
{
    char *s="Hello";
    int count=0;
    while(*s)
    {
        printf("%c",*s);
        count++;
        s++; 
    }
    printf("\nlength = %d",count);
   
    return 0;
}
……………………………………………..
Pointer array
#include <stdio.h>
int main() 
{
    char *a[]={"hello","welcome","namaste"};
    printf("%s",*a);
}
……………………………………………….
#include <stdio.h>
int main() 
{
    char *a[]={"hello","welcome","namaste"};
    printf("%s",*(a+1)); //to print next word +1,2,3......
}
………………………………………………
    // This is const character pointer
    // we cant change the value

#include <stdio.h>
int main() 
{
    const char *a="Ravi";
    printf("%s",a);
    return 0;
}
………………………………………..
Double pointer ---
#include <stdio.h>

int main() {
    int *p, **q;
    int a=10;
    p = &a;
    q = &p; 
    printf("%d", **q);
    return 0;
}
……………………………………….
	DMA------
Int a=10; ---static memory allocation compile time 
Dynamic  memory allocation{Run time allocation}
Malloc() – memory alloction
Calloc() – memory allocation
Realloc() – resize memory
Free() --- release memory
………………………………………
	C Preprocessor 
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main() 
{
    int r=2;
    float aoc = PI*r*r;
    printf("%f",aoc);

    return 0;
}
………………………………………………
# define pi 3.14
#define sq(x) ((x)*(x))
…………………………………………………
User create header file    ----
	First Create file-------------
myfile.h
void hello()
{
    printf("Hello");
}
	Then type code into main file …………….
#include <stdio.h>
#include "myfile.h"
int main()
{
    hello();
}
……………………………………….
	Conditional define statement -----
#include <stdio.h>
#define name
int main() 
{
    #ifdef name
    printf("Ravi\n");
    #endif
    printf("good boy");
 return 0;
}
……………………………………..
#include <stdio.h>
int main() { 
//jab M define nhi hoga tab under maintenance print hoga or agar define hai to program write here print hoga ----   
   #ifndef M
   printf("Under Maintanance");
   #endif    
   printf("Program write here");   
   return 0;
}
……………………………………….
Structure -- and Union--
#include <stdio.h>
struct car
{
    int modelno;
    char a;

};

int main() {
   struct car c1;
   printf("%d",sizeof(c1));
   c1.modelno=123;
   c1.a='a';
   printf("%d",c1.modelno);
     printf("%c",c1.a);
    return 0;
}
………………………………………
#include <stdio.h>
struct  employee
{
      int empid;
      char name[50];
      char mobile[10];
};
void main()
{
    struct employee emp1;
    printf("Enter your name : ");
    scanf("%s",&emp1.name);
    printf("Enter your Empid : ");
    scanf("%d",&emp1.empid);
    printf("Enter your mobile : ");
    scanf("%s",&emp1.mobile);
    printf("Welcomr Mr. : %s\n",emp1.name);
    printf(" your Emp id : %d \n",emp1.empid);
    printf("Enter your mobile : %s",emp1.mobile);
}
……………………………………………
#include <stdio.h>
union  employee
{
      int empid;
      char name[50];
      char mobile[10];
};
void main()
{
    union employee emp1;
    printf("Enter your name : ");
    scanf("%s",&emp1.name);
    printf("Enter your Empid : ");
    scanf("%d",&emp1.empid);
    printf("Enter your mobile : ");
    scanf("%s",&emp1.mobile);
    printf("Welcomr Mr. : %s\n",emp1.name);
    printf("your Emp id : %d \n",emp1.empid);
    printf("your mobile : %s",emp1.mobile);
}
…………………………………………
Dynamic  memory allocation{Run time allocation}
Malloc() – memory alloction
Calloc() – memory allocation
Realloc() – resize memory
Free() --- release memory

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p=(int*) malloc(3*sizeof(int));
    printf("%u",p);
}
……………………………………………………..
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p=(int*) malloc(3*sizeof(int));
    if(p==NULL)
    {
        printf("Memory Allocation Failed");
    }
    *p=100;
    *(p+1)=200;
    printf("%u\n ",*p);
    printf("%u ",*(p+1));
}
………………………………………………
Malloc()------
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("How many element ? ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory Allocation Failed"); 
    }
    for(int i=0 ;i<n;i++)
    {
        printf("Enter a value of %d = ",i);
        scanf("%d",&*(p+i));
    }
     for(int i=0 ;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
    
    
}
…………………………………………………
Calloc()---------
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("How many element ? ");
    scanf("%d",&n);
    int *p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory Allocation Failed"); 
    }
    for(int i=0 ;i<n;i++)
    {
        printf("Enter a value of %d = ",i);
        scanf("%d",&*(p+i));
    }
     for(int i=0 ;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
}
…………………………..………
Realloc()----
*p = int* realloc(int* ptr, size_t size);
……………………………………
Insert and delete the number into array---

#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,*p,*q,pos,val; 
     printf("How many no of Element");
     scanf("%d",&n);
     p = (int *) malloc(n*sizeof(int));
     q = (int *) malloc(n*sizeof(int));
     for(int i=0; i<n; i++)
     {
        printf("Enter value of %d",i);
        scanf("%d",&p[i]);
        q[i] = p[i];
     }
     for(int i=0; i<n; i++)
     {
        printf("%d",p[i]);
     }
  
  printf("Enter position and value to Replace");
  scanf("%d %d",&pos,&val);
   
    p[pos] = val;

    for(int i=0; i<n; i++)
    {
    printf("%d",p[i]);
    }
     printf("Enter position  to delete");
   scanf("%d",&pos);
   
  p = (int *) realloc(p,n*(sizeof(int))-1);
   for(int j=0; j<n*(sizeof(int)); j++)
   {
       if(j==pos)
       {
           continue;
       }
       else 
       {
           printf("\n%d",p[j]);
       }
   }
   
     
}
……………………………………..
	Storage classes -----
•	Auto 
•	Register 
•	Static
•	Extern
Storage class 	scope	lifetime	Default value
Auto	Local	Until block ends	Garbage value
Register	Local	Until block ends	Garbage value
Static	Local global	Entire program	0
extern	global	Entire program	0 (if defined globally)


……………………………………………………..
Auto-----
#include<stdio.h>
void demo()
{
    auto int a=10;
    printf("%d",a);
}
void main()
{
   demo();
}
……………………………………………………
Register-------
#include<stdio.h>

void main()
{
       register int i;

      for(i=1; i<=5; i++)
      {
        printf("%d",i);
      }  
}
………………………………………………………
Static---------------
#include<stdio.h>
void counter()
{
      static int count=0;
      count++;
      printf("%d",count);
}
void main()
{
     counter();
     counter();
     counter();
     counter();    
}
………………………………………………..
Extern------



Fibonicc series -------
#include<stdio.h>
void fab()
{
    static int a=0,b=1,c;
     printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;

}
void main()
{
    for(int i=1;i<20;i++)
    {
        fab();
    }
}
…………………………………………….
Id generate ---------
#include<stdio.h>
void empid_gen()
{
    static int id=101;

    printf("EMPID%d\n",id);
    id++;
    
}
void main()
{
    int n;
    printf("How many id you want to generate :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      empid_gen();
    }
}
………………………………………….
#include<stdio.h>
void counter(int cc,int year,char dpt[])
{
   static int s = 0; 
   s++;
   printf("\n%d%s%d%d",cc,dpt,year,s);
   
}
void main()
{
    int cc=0,year=0,s=0,e=0;
    char dpt[10];
    printf("Enter your college Code");
    scanf("%d",&cc);
    printf("Enter Year");
    scanf("%d",&year);
    printf("Enter Dpt Name");
    scanf("%s",&dpt);
    printf("Start Range");
    scanf("%d",&s);
     printf("End Range");
    scanf("%d",&e);

    for(int i=s; i<=e; i++)
    {
        counter(cc,year,dpt);
        
    }

}

………………………………………………
#include <stdio.h>

int main() {
    int n;
    printf("enter no of coupon code:");
    scanf("%d",&n);
   int couponcode;
   int arr[5];
   int billamount;
   int givencoupon;
   int finalbill;

  
   for(int i=0;i<n;i++)
   {
           printf("enter your given coupon code:");
           scanf("%d",&couponcode);
           arr[i]=couponcode;
          
   }
   printf("enter your bill amount:");
   scanf("%d",&billamount);
   
   printf("enter coupon code you have :");
   scanf("%d",&givencoupon);
   for(int i=0;i<n;i++)
   {
               if(arr[i]==givencoupon)
               {
                   printf("%d",(billamount*50)/100);
                   break;
               }
              else
               {
                   printf("Invalid coupon code");
               }
   }
  
   return 0;
}
……………………………………………………….
COUPON CODE:
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,bill=0,code,check=0;
    printf("How many code generate");
    scanf("%d",&n);
    p = (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter Coupon Code = %d",i);
        scanf("%d",&p[i]);
    }
    printf("Enter your bill amount");
    scanf("%d",&bill);
    printf("Enter your coupon code");
    scanf("%d",&code);
    
    for(int i=0; i<n; i++)
    {
        if(p[i] == code)
        {
            check++;
            printf("Valid Code!!!");
        }
    }
    
    if(check==1)
    {
        bill = bill - 50;
        printf("Bill = %d",bill);
    }
    
    
    
}
……………………………………..
High low game -----
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main() 
{
   srand(time(0));
   int d1=rand()%6+1;
   printf("the number of dice one :%d\n",d1);
   int d2=rand()%6+1;
   printf("the number of dice two :%d\n",d2);
  int final=d1+d2;
  printf("%d\n",final);
  sleep(3);
  if(final<7)
  {
      printf("low");
  }
  else if(final>7)
  {
      printf("High");
  }
  else if(final=7)
  {
      printf("luccyyyyy !");
  }
    return 0;
}
………………………………………
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main() {
    
    int p1,p2,r1,r2,w1=0,w2=0,dice=0,attemp=0;
    srand(time(0));
    do 
    {
        p1 = rand()%12 + 1;
        p2 = rand()%12 + 1;
        
        r1 = rand()%6 + 1;
        r2 = rand()%6 + 1;
        dice = r1+ r2;
         printf("\nplease wait for 2 sec for next....");
        sleep(2);
        printf("\n%d",dice);
        printf("\nP1=%d,P2=%d",p1,p2);
        if(dice<7)
        {
            if(p1<7)
            {
                w1+=5;
            }
            if(p2<7)
            {
                w2+=5;
            }
        }
        else if(dice>7)
        {
            if(p1>7)
            {
                w1+=5;
            }
            if(p2>7)
            {
                w2+=5;
            }
        }
        else if(dice==7)
        {
            if(p1==7)
            {
                w1+=50;
            }
            if(p2==7)
            {
                w2+=50;
            }
        }
        
        attemp++;
    }
    while(attemp!=5);
    
    printf("\nPlayer P1 = %d",w1);
    printf("\nPlayer P2 = %d",w2);
    
    
    return 0;
}
………………………………………………….
Lucky number game---
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main() 
{
    int n,attempt=0;
    srand(time(0));
    int lucky=rand()%10+1;
    
    do
    {
        printf("Enter any lucky number : ");
        scanf("%d",&n);
        if(n==lucky)
        {
            printf("congratulation you are lucckkyyy !");
        }
        else if(n>lucky)
        {
            printf("number is too high choose low one\n");
        }
        else if(n<lucky)
        {
            printf("number is too low choose high one\n");
        }
        attempt++; 
      
    }while(attempt!=5);
    return 0;
}
………………………………………………………..
Bomb and health game----
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
    int score=0;
    srand(time(0));
    
   
    int number,attempt=0;
    do
    {
        int bomb=rand()%10+1;
        
        int health=rand()%10+1;
      
        printf("\nenetr a number:");
        scanf("%d",&number);
        if(number==bomb)
        {
            printf("\n Bomb detected: %d",number);
            printf("\nBomb at %d",bomb);
            printf("\nHealth at %d",health);
            score-=20;
          
        }
         else if(number==health)
        {
            printf("\n Health detected: %d",number);
            score+=20;
        }
           
        else
        {
            printf("\nyou are safe: %d",number);
            score+=1;
        }
          
        attempt++;
        
    }
    while(attempt!=5);
    printf("%d",score);
return 0;
}
………………………………………….
B0mb blast and defuse game----
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main() 
{
    printf("press 1 for red :\n ");
    printf("press 2 for black :\n ");
    printf("press 3 for green :\n ");
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    srand(time(0));
    int r1=rand()%3+1;
    if(n==r1)
    {
        printf("bomb defused");
    }
    else
    {
        printf("bomb blast !.....");
    }
    
  
}
……………………………………………………

 

















 














 














