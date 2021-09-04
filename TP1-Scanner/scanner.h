#include <stdio.h>
#include <ctype.h>

//Global Variables
extern char ch;

enum TOKENS {tokenCAD, tokenSEP, tokenFDT,tokenSPC, tokenInit};

//Functions
int scan_input(void);
