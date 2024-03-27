#include <stdio.h>
#define MIN_VAL -4
#define MAX_VAL 42
int clip_value(int v){
  if(v>MAX_VAL){
    return MAX_VAL;
  }
  else if(v<MIN_VAL){
    return MIN_VAL;
  }
  else {
    return v;
  }
}
int main(void) {//int main()
  int n; 
  scanf("%d",&n);
  int arr[n];
   for (int i=0;i<n;i++){
     scanf("%d",&arr[i]);
     int v=arr[i];
     clip_value(v);
     printf("%d ",clip_value(v));
   }
    //return 0;
}







