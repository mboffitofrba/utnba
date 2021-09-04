#include "scanner.h"

char ch;
int main(void){

  typedef enum TOKENS Tipo;
  Tipo estado = tokenInit;
  Tipo estado_ant = tokenInit;

  char buffer[255];
  int pointer = 0;

  do{

    estado = scan_input();

    switch(estado){
      case tokenSEP:
        if(estado_ant != tokenCAD){
          printf("Separador: , \n");
        }else{
          buffer[pointer] = '\0';
          printf("Cadena : %s \n",buffer);
          pointer = 0;
          printf("Separador: , \n");
        }        
        estado_ant = estado;
      break;
      case tokenSPC:
        if(estado_ant == tokenCAD){
          buffer[pointer] = '\0';
          printf("Cadena : %s \n",buffer);
          pointer = 0;
        }    
        estado_ant = estado;
      break;
      case tokenCAD:
        buffer[pointer] = ch;
        pointer++;
        estado_ant = estado;
      break;
      default:
      break;
    
    }

  }while(estado != tokenFDT);

printf("Fin De Texto \n");

return 0;

}
