#include <LiquidCrystal.h>
int LCD1 = 13;
int LCD2 = 12;
int LCD3 = 4;
int LCD4 = 3;
int LCD5 = 2;
int LCD6 = 1;
int pos = 0;
int vos = 0;
int EN1 = 9;
int EN2 = 8;
LiquidCrystal lcd(LCD1,LCD2,LCD3,LCD4,LCD5,LCD6);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(EN1,HIGH);
digitalWrite(EN2,HIGH);
forward();
delay(1000);
backward();
delay(1000);
lift();
delay(1000);
right();
delay(1000);
}
void forward(){
  analogWrite(6,100);
  analogWrite(5,0);
  analogWrite(11,100);
  analogWrite(10,0);
  
  for(pos=0;pos<6;pos++){
lcd.setCursor(pos,vos);
lcd.print("forward");
delay(200);
lcd.clear();
}
if(pos=5){
  vos++;
}
for(pos=5;pos>0;pos--){
lcd.setCursor(pos,vos);
lcd.print("forward");
delay(200);
lcd.clear();
}
if(vos=2){
  vos=vos-2;
}
}
void backward(){
  analogWrite(6,0);
  analogWrite(5,100);
  analogWrite(11,0);
  analogWrite(10,100);

  for(pos=0;pos<6;pos++){
lcd.setCursor(pos,vos);
lcd.print("backward");
delay(200);
lcd.clear();
}
if(pos=5){
  vos++;
}
for(pos=5;pos>0;pos--){
lcd.setCursor(pos,vos);
lcd.print("backward");
delay(200);
lcd.clear();
}
if(vos=2){
  vos=vos-2;
}
}
void lift(){
  analogWrite(6,100);
  analogWrite(5,0);
  analogWrite(11,0);
  analogWrite(10,100);

  for(pos=0;pos<6;pos++){
lcd.setCursor(pos,vos);
lcd.print("lift");
delay(200);
lcd.clear();
}
if(pos=5){
  vos++;
}
for(pos=5;pos>0;pos--){
lcd.setCursor(pos,vos);
lcd.print("lift");
delay(200);
lcd.clear();
}
if(vos=2){
  vos=vos-2;
}
}
void right(){
  analogWrite(6,0);
  analogWrite(5,100);
  analogWrite(11,100);
  analogWrite(10,0);

  for(pos=0;pos<6;pos++){
lcd.setCursor(pos,vos);
lcd.print("right");
delay(200);
lcd.clear();
}
if(pos=5){
  vos++;
}
for(pos=5;pos>0;pos--){
lcd.setCursor(pos,vos);
lcd.print("right");
delay(200);
lcd.clear();
}
if(vos=2){
  vos=vos-2;
}
}
