// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    
   char array1[]={1,2,3,4,5,6,7,8,9,10};
   char array2[]={1,2,3,4,5,6,7,8,9,10};
   int delete;
   int length1 = sizeof(array1)/sizeof(array1[0]);
  int length2 = sizeof(array2)/sizeof(array2[0]);
  printf("Enter number to be deleted from array2:\n");
    scanf("%d", &delete);
    
//  printf("Deleted num is %d\n", delete);
  int i = delete-1; //i=7
  if(delete<1 || delete>length2)
  {
      printf("Delete number is out of bounds, Please enter within array2 bounds\n");
  }
  else
  {
   while(i <length2-1)
   {
       array2[i] = array2[i+1];
       i=i+1;
   }
   length2 = length2-1;
  }
/*   
for(int j=0; j<length2;j++)
{
    printf("%d ",array2[j]);
}
printf("\n");
 
printf("len %d len2 %d\n", length1, length2);
 */  if(length1 !=length2)
    {
        for(int i=0; i < length1; i++)
    {   if(array1[i]!=array2[i])
        {
            printf("Missing element in array 2 is  %d ", array1[i]);
            break;
        }
    }
    }
    else
    {
        printf("No elements deleted in the array2\n");
    }
    return 0;
}
