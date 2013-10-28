/*
ZAROWKA STEROWANA GND GDYJEST 0 ZAROWKA ZASWIECA SIE
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
   int zarowka = 2;
  
	 if (wiringPiSetup () == -1)
    	return scope.Close(Undefined());
 
   pinMode (zarowka, OUTPUT) ;         // GPIO 27 - pin 13
    for (;;)
  {
    	digitalWrite (zarowka, 1) ;       // zarowka wylaczona
    	delay (5000) ;               // mS
   	digitalWrite (zarowka, 0) ;       // wlaczona
    	delay (500) ;
   
  }//KONIEC FOR
  
}


void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("zarowka"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(zarowka, init)

