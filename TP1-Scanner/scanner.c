#include "scanner.h"


int scan_input(void){
  char input;
  input = getchar();
  

  if(isspace(input)){ 
    return tokenSPC;
  }else if(input == ','){
    return tokenSEP;
  }else if(input == EOF){
    return tokenFDT;
  }else{
    ch = input;
    return tokenCAD;
  }
  return input;
}
