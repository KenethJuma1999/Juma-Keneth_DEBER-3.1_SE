/*
 * CAPÍTULO III: MÓDULOS DE COMUNICACIÓN I2C
 *-NOMBRE: Juma Keneth
 * FUNCIONES: 
 *           Wire.begin()
 *           Wire.beginTransmission(address) -> ID de esclavo
 *           
 */
////////////////////////////////ESCLAVO 3///////////////////////////// 
 
#include <Wire.h> //librería i2c

char dato;                                    // variable de almacenamiento de dato de cx i2c
const int leds [4]={8,9,10,11};               // Vector de pines de leds
int i=0;                                      // Contador de posiciones

void setup() {
  Wire.begin(6); // id de esclavo
  Wire.onReceive(receiveEvent);               // evento de recepción
  Serial.begin(9600);                         // inicio de cx serial

  for(i=0;i<4;i++){
    pinMode(leds[i],OUTPUT);                  // Desplazamiento de salidas
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
          case 'y':
            for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case 'u':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case 'i':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case '5':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 
          break;

          case '6':
          for(i=0;i<4;i++){
            digitalWrite(leds[i],HIGH);
            delay(5000);
            digitalWrite(leds[i],LOW);
          } 

          case '7':
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