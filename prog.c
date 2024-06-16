//#include <stdio.h>
//#include<math.h>
//int main()
//{
  // reverse of a number
  
  /*int a,rev=0,rem=0;
  printf("enter a number");
  scanf("%d", &a);
  while(a!=0)
    {
  rem=a%10;
      rev= rev*10+rem;
      a=a/10;
   }
printf("rev is %d", rev); */

  // palindrome of a number
  
  /* int a,rev=0,rem=0, org;
    printf("enter a number");
    scanf("%d", &a);
  org=a;
    while(a!=0)
      {
    rem=a%10;
        rev= rev*10+rem;
        a=a/10;
        }
  
  if (org==rev)
  {
     printf("this is a palindrome number ");
  }
  else
  {
    printf("this is not a palindrome number");
  }*/

  
  
  // armstrong number
  
/* int n, rem=0, arm=0, var, a=0;
  printf("enter a number");
  scanf("%d", &n);
  var=n;
  while(var!=0)
    {
      var=var/10;
      ++a;
    }
  var = n;
  while(var>0)
    {
      rem=var%10;
      arm=arm+pow(rem,a);
      var=var/10;
    }
      if(n==arm)
      {
        printf("this is an armstrong number");
      }
  else
      {
        printf(" not an armstrong number");
      } */
      

  // half pyramid

  
 /*for(int i=1;i<=5;i++)
    {
      for(int j=1; j<=i; j++)
        {
          printf("%d", j);
        }
        
      printf("\n");
    } */
  





  // inverted half pyramid

  /*for(int i=1; i<=5; i++)
    {
      for(int j=5; j>=i; j--)
        {
          printf("*");
        }
        printf("\n" );
    }*/
  






  // inverted half pyramid

/* for(int i=1; i<=5; i++)
    {
      for(int j=1; j<=5; j++)
        {
          if(j+i>=6)
          
            printf("*");
        
          else
            printf(" ");
          }
        printf("\n" );
    }*/


  // full pyramid


 /* for(int i=1; i<=5; i++)
    {
      for(int j=1; j<=5; j++)
        {
          if(j+i>=6)
          
            printf(" *");
          else
            printf(" ");
        }
      printf("\n");
    } */



  // reverse pyramid

 /* for(int i=5; i>=1; i--)
  {
    for(int j=1; j<=5; j++)
      {
        if(j+i>=6)

          printf(" *");
        else
          printf(" ");
      }
    printf("\n");
  }*/

   

  // functions


// reverse

/*
#include<stdio.h>
int main()
{
  int n, rem = 0, rev = 0;
  printf("enter the value");
  scanf("%d", &n);

  while(n!=0)
  {
    rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
      }
  printf(" reverse is %d", rev);*/

    
// palindrome

/* #include<stdio.h>
    int main()
    {
      int n, rem = 0, rev = 0, temp;
      
      printf("enter the value");
      scanf("%d", &n);
      temp = n;

      while(n!=0)
      {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
          }
      if(rev==temp)
      {
        printf("this is a palindrome number");
      }
      else
      {
       printf("ma chudao"); 
      }
*/
/* #include <stdio.h>

int main() {
    // File pointer
    FILE *filePointer;

    // Open file in write mode
    filePointer = fopen("example.txt", "w");

    // Check if file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;  // Return an error code
    }

    // Write content into the file
    fprintf(filePointer, "this is some content\n");
  fprintf(filePointer, "you can add more line as needed\n");

    // Close the file
    fclose(filePointer);

    printf("File created, written, and closed successfully.\n");

    return 0;  // Return success
}
*/

/* #include <stdio.h>

int main() {
    // File pointer
    FILE *filePointer;

    // Open file in read mode
    filePointer = fopen("example.txt", "r");

    // Check if file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;  // Return an error code
    }

    // Read and print content from the file
    char buffer[100];  // Assuming a maximum line length of 100 characters
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(filePointer);

    printf("File read and closed successfully.\n");

    return 0;  // Return success
}
*/

/* #include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "your_file.txt";  // Replace with the actual filename
    char ch;

    // Open the file in read mode
    fp = fopen(filename, "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters from the file one by one and print them
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    printf("\nFile closed successfully.\n");

    return 0;
}
*/



#include<stdio.h>
int main()
{
int i, j;
  for(i=1; i <= 5; i++)
    {
    for (j=1;j<= 5; j++)
      {
        if(i+j >= 6)
          printf(" *");

        else
          printf(" ");
      }
      printf("\n");
    }
  

  return 0;

  
}