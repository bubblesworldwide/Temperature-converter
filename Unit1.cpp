//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

/*

Exercise 1: Simple Temperature Converter
Create a temperature converter application that converts between Celsius and Fahrenheit.

Requirements:
Add an Edit field for user input.
Provide two buttons: "Convert to Fahrenheit" and "Convert to Celsius".
Display the result in a Label.
Formula:
°F = (°C × 9/5) + 32
°C = (°F - 32) × 5/9


*/
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnFahClick(TObject *Sender)
{

     //declaration of variables
	 int fahrenheit=0;

	 //convert text to int
	 int temp =  EdtTemp->Text.ToInt();

	 //convert temperature to fahrenheit
	 fahrenheit = (temp * 9/5) + 32;

	 //display on label
	 BtnShowResult->Caption = "Temperature in Fahrenheit : " + IntToStr(fahrenheit);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnCelsiusClick(TObject *Sender)
{

	 //convert text to int
	 int temp =  EdtTemp->Text.ToInt();

	 //declaration of variables
	 int celsius = 0;

	//convert temperature to celsius
	celsius= (temp -32) *5/9;

    //display on label
	 BtnShowResult->Caption = "Temperature in Celsius : " + IntToStr(celsius);

}
//---------------------------------------------------------------------------
