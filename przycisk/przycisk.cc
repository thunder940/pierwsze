/*
   ZAROWKA STEROWANA 0 DLATEGO GDY JEST 0 TO DIODA SWIECI
   PRZYCISK STEROWANY PRZEZ 3.3V OPORNIK 10KOHM
 */

#include <node.h>
#include <v8.h>
#include <iostream>
#include <stdio.h>
#include <wiringPi.h>
using namespace std;
using namespace v8;

 Handle<Value> Method(const Arguments& args) {
  HandleScope scope;
   int zarowka = 2;   //zarowka gpio 27 - pin 13
   int przycisk = 3;  //przycisk gpio 22 - pin 15 przez 3.3v pin 17
   bool flaga = true;
   if (wiringPiSetup () == -1)
    return scope.Close(Undefined());
 
   pinMode (zarowka, OUTPUT);      
   pinMode(przycisk, INPUT);
    for (;;)
  {
   	if (digitalRead (przycisk) == 1){ 
   		delay(200);
		flaga = !flaga;  
		cout << "flaga jest " <<flaga<< endl;
   	}else delay(200);//KONIEC IF
	if (flaga == true){  //IF II
		digitalWrite(zarowka, 1);
		delay(200);
		cout << "zarowka wylaczona" << endl;
	}else{
		digitalWrite(zarowka, 0);
		delay(200);
		cout << "zarowka wlaczona" << endl;
		}//KONIEC IF II

    } //KONIEC FOR
}


void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("przycisk"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(przycisk, init)

