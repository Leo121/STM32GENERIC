/*  The class __ConstPin define in file stm32_pin_list.h
 *   and operators ">>" and  "<<" were be overloaded in file stm32_gpio.h.
 *	
 *   huaweiwx@sina.com 2018.2.1
 */

void setup() {
  //  put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(BOTTON,INPUT);
}

void loop() {
  BOTTON >> LED_BUILTIN;
}
