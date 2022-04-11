 #include <stdio.h>

 int main(void) {
   int arr[10] = {0, };
   int left[42] = {0, };
   int cnt = 0;
   for(int i = 0; i < 10; i++) {
     scanf("%d", &arr[i]);
     arr[i] %= 42;
     for(int j = 0; j < 42; j++) {
       if(arr[i] == j) {
         left[j]++;
         break;
       }
     }
   }
    for(int i = 0; i < 42; i++) {
      if(left[i] != 0) {
        cnt++;
      }
    }
    printf("%d", cnt);
    return 0;
 }