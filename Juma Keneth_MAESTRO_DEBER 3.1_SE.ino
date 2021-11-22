/*
 * CAPÍTULO III: MÓDULOS DE COMUNICACIÓN I2C
 *-NOMBRE: Juma Keneth
 * FUNCIONES: 
 *           Wire.begin()
 *           Wire.beginTransmission(address) -> ID de esclavo
 *           
 */

 ///////////////////////////MASTER//////////////////////
 
#include<Wire.h>          // librería i2c
char dato1;               // datos para esclavo1
char dato2;               // datos para esclavo2
char dato3;               // datos para esclavo3

void setup() {
  Serial.begin(9600);     // inicia comunicacion serial
  Wire.begin();           //inicia comunicacion i2c

  Serial.println("Microcontrolador-Maestro");
  Serial.println("Juma Keneth");
  Serial.print("Sus caracteres son: ");
}
 
void loop() {
    if(Serial.available()>0){             //verifica el puerto de comunicacion
      
        dato1=Serial.read();              // Lee dato esclavo1
        Wire.beginTransmission(4);        // empieza comunicacion i2c
        Wire.write(dato1);                 // envía dato
        Wire.endTransmission();           // termina comunicacion i2c
      
        dato2=Serial.read();              // Lee dato esclavo2
        Wire.beginTransmission(5);        // empieza comunicacion i2c
        Wire.write(dato1);                 // envía dato
        Wire.endTransmission();           // termina comunicacion i2c
        
        dato3=Serial.read();              // Lee dato esclavo3
        Wire.beginTransmission(6);        // empieza comunicacion i2c
        Wire.write(dato1);                 // envía dato
        Wire.endTransmission();           // termina comunicacion i2c
        
      }
}
