/*
 * CAPÍTULO III: MÓDULOS DE COMUNICACIÓN I2C
 *-NOMBRE: Juma Keneth
 * FUNCIONES: 
 *           Wire.begin()
 *           Wire.beginTransmission(address) -> ID de esclavo
 *           
 */
////////////////////////////////ESCLAVO 2///////////////////////////// 
 
#include <Wire.h> //librería i2c

char dato;                                  // variable de almacenamiento de dato de cx i2c
const int leds [4]={8,9,10,11};             // vector de salidas
int i=0;                                    // contador de posicones

void setup() {
  Wire.begin(4);                           // id de esclavo
  Wire.onReceive(receiveEvent);            // evento de recepción
  Serial.begin(9600);                      // inicio de cx serial

  for(i=0;i<4;i++){
    pinMode(leds[i],OUTPUT);               // Desplazamiento 
  } 
}
void loop() {
  
  delay(5000); 
  
}
void receiveEvent (int bytes){
  while(Wire.available()){
    dato=Wire.read();
    dato=toLowerCase(dato);
      switch(dato){
          case 'E':
            for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case 'F':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case '/':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case '+':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case '-':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          default:
            for(i=0;i<4;i++){
            digitalWrite(leds[i],LOW);
          } 
          break;
        }
    }
}