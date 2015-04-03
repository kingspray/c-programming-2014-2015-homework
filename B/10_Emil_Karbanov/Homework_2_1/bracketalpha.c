#include<stdio.h>
#include<string.h>
int main(){
  char bracket1[50];
  scanf("%s",bracket1);
  int bracketlengh;
  bracketlenght = strlen(bracket1);
  int i=0;
  int br=0;
  for (bracketlenght>0; i< bracketlenght; i++){
    if(bracket1[i]=='{'){
    ++br;
    }
    if(bracket1[i]=='}'){
    --br;
    }
    if(br<0){
    printf("-1");
    break;
    }
  }
  if (br>0){
  printf("-1");
  }
  if(br==0){
  printf("0");
  }
  
return 0;
}














































