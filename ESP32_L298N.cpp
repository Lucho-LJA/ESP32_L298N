#include "ESP32_L298N.h"


void L298N::moveMotor(int8_t pwmA, int8_t pwmB){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinA,pwmA);
    analogWrite(dl298n.pinB,pwmB);
    digitalWrite(dl298n.pin1,1);
    digitalWrite(dl298n.pin2,0);
    digitalWrite(dl298n.pin3,1);
    digitalWrite(dl298n.pin4,0);
  }else{
    analogWrite(dl298n.pinA,pwmA);
    digitalWrite(dl298n.pin1,1);
    digitalWrite(dl298n.pin2,0);
  }  
}
void L298N::moveMotor(int8_t pwmA){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinA, pwmA);
    analogWrite(dl298n.pinB, pwmA);
    digitalWrite(dl298n.pin1,1);
    digitalWrite(dl298n.pin2,0);
    digitalWrite(dl298n.pin3,1);
    digitalWrite(dl298n.pin4,0);
  }else{
    analogWrite(dl298n.pinA, pwmA);
    digitalWrite(dl298n.pin1,1);
    digitalWrite(dl298n.pin2,0);
  }    
}
void L298N::backMotor(int8_t pwmA, int8_t pwmB){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinA,pwmA);
    analogWrite(dl298n.pinB,pwmB);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,1);
    digitalWrite(dl298n.pin3,0);
    digitalWrite(dl298n.pin4,1);
  }else{
    analogWrite(dl298n.pinA,pwmA);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,1);
  }
}
void L298N::backMotor(int8_t pwmA){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinA, pwmA);
    analogWrite(dl298n.pinB, pwmA);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,1);
    digitalWrite(dl298n.pin3,0);
    digitalWrite(dl298n.pin4,1);
  }else{
    analogWrite(dl298n.pinA, pwmA);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,1);
  }
        
}
void L298N::moveMotor12(int8_t pwmA){
  analogWrite(dl298n.pinA, pwmA);
  digitalWrite(dl298n.pin1,1);
  digitalWrite(dl298n.pin2,0);
}
void L298N::backMotor12(int8_t pwmA){
  analogWrite(dl298n.pinA, pwmA);
  digitalWrite(dl298n.pin1,0);
  digitalWrite(dl298n.pin2,1);
}
void L298N::moveMotor34(int8_t pwmA){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinB, pwmA);
    digitalWrite(dl298n.pin3,1);
    digitalWrite(dl298n.pin4,0);
  }else{
    analogWrite(dl298n.pinA, pwmA);
    digitalWrite(dl298n.pin1,1);
    digitalWrite(dl298n.pin2,0);
  }
}
void L298N::backMotor34(int8_t pwmA){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinB, pwmA);
    digitalWrite(dl298n.pin3,0);
    digitalWrite(dl298n.pin4,1);
  }else{
    analogWrite(dl298n.pinA, pwmA);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,1);
  }
}
void L298N::stopMotor(){
  if (dl298n.pin3 != dl298n.pin4){
    analogWrite(dl298n.pinA, 0);
    analogWrite(dl298n.pinB, 0);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,0);
    digitalWrite(dl298n.pin3,0);
    digitalWrite(dl298n.pin4,0);
  }else{
    analogWrite(dl298n.pinA, 0);
    digitalWrite(dl298n.pin1,0);
    digitalWrite(dl298n.pin2,0);
  }
}