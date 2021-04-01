
int lmf=2,lmb=3,rmf=4,rmb=5;
char command;
void setup(){
Serial.begin(9600);
pinMode(lmf,OUTPUT);
pinMode(lmb,OUTPUT);
pinMode(rmf,OUTPUT);
pinMode(rmb,OUTPUT);
}
void loop(){
if(Serial.available()>0){
command=Serial.read();
Serial.println(command);
}
if(command=='F')forward();
else if(command=='B')backward();
else if(command=='R')right();
else if(command=='L')left();
else if(command=='S')stop1();
}
void forward(){
digitalWrite(lmf,1);digitalWrite(rmf,1);
digitalWrite(lmb,0);digitalWrite(rmb,0);
}
void backward(){
digitalWrite(lmf,0);digitalWrite(rmf,0);
digitalWrite(lmb,1);digitalWrite(rmb,1);
}
void right(){
digitalWrite(lmf,1);digitalWrite(rmf,0);
digitalWrite(lmb,0);digitalWrite(rmb,1);
}
void left(){
digitalWrite(lmf,0);digitalWrite(rmf,1);
digitalWrite(lmb,1);digitalWrite(rmb,0);
}
void stop1(){
digitalWrite(lmf,0);digitalWrite(rmf,0);
digitalWrite(lmb,0);digitalWrite(rmb,0);
}
