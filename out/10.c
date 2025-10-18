   #include <stdio.h>
   
   int main() {
       int arr[3] = {10, 20, 30};
       int *ptr = arr;
       
       printf("%d\n", *ptr);      // 输出: ?
       printf("%d\n", *(ptr+1));  // 输出: ?
       printf("%d\n", *ptr+1);    // 输出: ?
       
       ptr++;
       printf("%d\n", *ptr);      // 输出: ?
       
       return 0;
   }
