/*variable= A reusable container for a value. 
           Behaves as if it where the value it contains.

  # int = whole number (4bytes)
  #float = single percision decimal no. (4bytes)
  #double = double percision decimal no. (8bytes)
  #bool = true/false (1 byte/ <stdbool.h>)
  #char = single character (1 byte)
  #char[] = array of characters (depends)    
*/


#include<stdio.h>
int main()
{
    int age = 18;
    printf("Age: %d",age);
    return 0;
}