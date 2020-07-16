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
    int8_t pinA;
    int8_t pin1;
    int8_t pin2;
    int8_t pin3;
    int8_t pin4;
    int8_t pinB;
  } control_driver_t;

  class L298N
  {
    public:
      L298N (uint8_t pwm_b, uint8_t pinA,uint8_t pin1,uint8_t pin2,uint8_t pin3,uint8_t pin4,uint8_t pinB)
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

      #ifdef L298N_2_MOTOR
      void moveMotor(int8_t pwmA, int8_t pwmB);
      void moveMotor(int8_t pwmA);
      void backMotor(int8_t pwmA, int8_t pwmB);
      void backMotor(int8_t pwmA);
      void moveMotor12(int8_t pwmA);
      void backMotor12(int8_t pwmA);
      void moveMotor34(int8_t pwmA);
      void backMotor34(int8_t pwmA);
      void stopMotor();
      #endif

    
    
    private:

      control_driver_t dl298n;

  };

  //void (uint8_t pin);

  //void analogWriteFrequency(double frequency);
  //void analogWriteFrequency(uint8_t pin, double frequency);

  //void analogWriteResolution(uint8_t resolution);
  //void analogWriteResolution(uint8_t pin, uint8_t resolution);

  //void analogWrite(uint8_t pin, uint32_t value);

#endif