#ifndef _ESP32_L298N_
    #define _ESP32_L298N_
    #ifndef Arduino_h
		  #include <Arduino.h>
    #endif
    #ifndef _ESP32_ANALOG_WRITE_
        #include "ESP32_AnalogWrite.h"
    #endif
  typedef struct control_driver
  {
    int pinA;
    int pin1;
    int pin2;
    int pin3;
    int pin4;
    int pinB;
  } control_driver_t;

  class L298N
  {
    public:
      L298N (int pwm_b, int pinA,int pin1,int pin2,int pin3,int pin4,int pinB)
      {
        analogWriteResolution(pinA,pwm_b);
        analogWriteResolution(pinB,pwm_b);
        pinMode(pin1, OUTPUT);
        pinMode(pin2, OUTPUT);
        pinMode(pin3, OUTPUT);
        pinMode(pin4, OUTPUT);
        dl298n.pin1=pin1;
        dl298n.pin2=pin2;
        dl298n.pin3=pin3;
        dl298n.pin4=pin4;
      }
      L298N (int pwm_b, int pinA,int pin1,int pin2)
      {
        analogWriteResolution(pinA,pwm_b);
        pinMode(pin1, OUTPUT);
        pinMode(pin2, OUTPUT);
        dl298n.pin1=pin1;
        dl298n.pin2=pin2;
        dl298n.pin3=232;
        dl298n.pin4=232;
      }

      void moveMotor(int pwmA, int pwmB);
      void moveMotor(int pwmA);
      void backMotor(int pwmA, int pwmB);
      void backMotor(int pwmA);
      void moveMotor12(int pwmA);
      void backMotor12(int pwmA);
      void moveMotor34(int pwmA);
      void backMotor34(int pwmA);
      void stopMotor();

    private:

      control_driver_t dl298n;

  };

  //void (uint pin);

  //void analogWriteFrequency(double frequency);
  //void analogWriteFrequency(uint pin, double frequency);

  //void analogWriteResolution(uint resolution);
  //void analogWriteResolution(uint pin, uint resolution);

  //void analogWrite(uint pin, uint32_t value);

#endif