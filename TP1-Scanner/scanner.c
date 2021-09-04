#include "scanner.h"


int scan_input(void){
  char input;
  input = getchar();
  

  if(isspace(input)){ 
    return tokenSPC;
  }else if(input == ','){
    ch = input;
    return tokenSEP;
  }else if(input == EOF){
    ch = input;
    return tokenFDT;
  }else{
    ch = input;
    return tokenCAD;
  }
  return input;
}
