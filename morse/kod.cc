#include <node.h>
#include<stdio.h>
#include<cstring>
#include <wiringPi.h>
#include "header.h"
#include <iostream>
#include <fstream>
using namespace std;
using namespace v8;
int(*Mors[26])()={
//	"* - ",
	lit_a,
//	"- * * *",
	lit_b,
//	"- * - *",
	lit_c,
//	"- * *" ,
	lit_d,
//	"*",
	lit_e,
//	"* * - *",
	lit_f,
//	"- - *",
	lit_g,
//	"* * * *",
	lit_h,
//	"* *",
	lit_i,
//	"* - - -" ,
	lit_j,
//	"- * -" ,
	lit_k,
//	"* - * *",
	lit_l,
//	"- -",
	lit_m,
//	"- *",
	lit_n,
//	"- - -",
	lit_o,
//	"* - - *",
	lit_p,
//	"- - * -",
	lit_q,
//	"* - *",
	lit_r,
//	"* * *",
	lit_s,
//	"-",
	lit_t,
//	"* * -",
	lit_u,
//	"* * * -",
	lit_v,
//	"* - -",
	lit_w,
//	"- * * -",
	lit_x,
//	"- * - -",
	lit_y,
//	"- - * *"
	lit_z
	};

	Handle<Value> Method(const Arguments& args){
		HandleScope scope;

		if (wiringPiSetup () == -1)
        return scope.Close(Undefined());

    int zarowka = 2;
   pinMode (zarowka, OUTPUT) ; 

//obsluga pliku i tablica

		char *tablica = new char;
		int tmp = 0;
		string sciezka;
		ifstream znaki;
		cout << "Podaj sciezke do pliku" << endl;
		cin >> sciezka;
		znaki.open(sciezka.c_str());
		if (!znaki){
			cout << "Nie mozna otworzyc pliku";


		return scope.Close(Undefined());
		}
		while (!znaki.eof())
			znaki >> tablica[tmp++];

		znaki.close();
//obsluga morsa

		for(int i=0; i<tmp; i++)
		{
			if( tablica[ i ] > 64 && tablica[ i ] < 91 ){

			Mors[ (int)tablica[i] - 65 ]();

			}
			else if( tablica[ i ] > 96 && tablica[ i ] < 123 )
			{

			Mors[ (int)tablica[i] - 97 ]();
			}
			else
			{

			tablica[i];
			}
		}

	return scope.Close(Undefined());
	}

void Init(Handle<Object> exports){
	exports -> Set(String::NewSymbol("add"),
	FunctionTemplate::New(Method)->GetFunction());
}
NODE_MODULE(kod, Init)
