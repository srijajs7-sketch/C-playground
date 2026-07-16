/*variable= A reusable container for a value. 
           Behaves as if it where the value it contains.

  # int = whole number (4bytes)
  #float = single percision decimal no. (4bytes)
  #double = double percision decimal no. (8bytes)
  #bool = true/false (1 byte/ <stdbool.h>)
  #char = single character (1 byte)
  #char[] = array of characters (depends)    
*/


#include <stdio.h>
#include <stdbool.h>  
int main()
{

    
    char name[] = "Srija";
   
    int age = 18;
    
    bool isPass = true;

    float cgpa = 8.5f;

    double CGPA = 8.56789;
   
    char grade = 'A';
    
    
    printf("Name: %s\n",name);

    printf("Age: %d\n",age);

    printf("pass: %d\n",isPass);

    printf("cgpa: %f\n",cgpa);
    
    printf("cgpa: %lf\n",CGPA);

    printf("Grade: % c\n",grade); 

    

    return 0;
}