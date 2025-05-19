#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "item.h"
#include "usergui.h"

/*#####################################
  ## gestione-attivita-studio v2.0.7 ##
  #####################################
*/

int main(void) {	
   
    char inputchar;
    
    while(1) {
    	user_gui();
    	user_input(inputchar);
	}
}