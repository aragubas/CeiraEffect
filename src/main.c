#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cx16.h>
#include <peekpoke.h>
#include <conio.h>

void main() {
  long ceira;
  long sinas = 0;
  char* ubunga = "uwu";

  _randomize();
  cursor(1);
  printf("Ceira Effect!\n");
  
  while(1)
  { 
    ceira += rand(); 
    // sinas -= rand();
    _randomize();

    // ceira /= rand();
    //printf("sinas");
    printf(ceira);
 
    POKE(0x9F2A, ceira | 128);
    POKE(0x9F2B, ceira | 128);

    // POKE(0x9F20, ceira * rand());
    // POKE(0x9F21, ceira * rand());
    
    // POKE(0x9F23, ceira * rand());
    // POKE(0x9F24, ceira * rand()); 
    
 
          


  }

}