#include "header.h"
#include <wiringPi.h>
int zarowka = 2;
int lit_a(){
        //std::cout << "funkcja uruchomiona";
        //printf("funkcja uruchomiona");
        digitalWrite (zarowka, 0);       // zarowka wylaczona
        delay (250);               // mS
        digitalWrite (zarowka, 1);
        delay (250);
        digitalWrite (zarowka, 0);       // wlaczona
        delay (500);
        digitalWrite (zarowka, 1);
        delay (400);
return 0;
}

int lit_b(){
        digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
        digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
        digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
        digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_c(){
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}
int lit_d(){
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}

int lit_e(){
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}

int lit_f(){
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}

int lit_g(){
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}

int lit_h(){
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_i(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_j(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
	delay(500);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_k(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_l(){
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}

int lit_m(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_n(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(400);
return 0;
}

int lit_o(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_p(){
	digitalWrite(zarowka, 0);
	delay(250);
	digitalWrite(zarowka, 1);
	delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_q(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_r(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_s(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
return 0;
}

int lit_t(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_u(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_v(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_w(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_x(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_y(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_z(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

/*int lit_ą(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ć(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ę(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ł(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ń(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ó(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ś(){
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ż(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}

int lit_ź(){
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(250);
        digitalWrite(zarowka, 1);
        delay(250);
	digitalWrite(zarowka, 0);
        delay(500);
        digitalWrite(zarowka, 1);
        delay(400);
return 0;
}
*/
