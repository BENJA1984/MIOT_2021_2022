int switchState=0;
void setup()
{
//Definición I/O de los pines del montaje
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT);
}
void loop()
{
switchState=digitalRead(2);//leemos estado pulsador
//condicional solo dos posibles estados del pulsador
if(switchState==LOW) {
// botón NO pulsado
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
}
else {
// botón pulsado
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(4, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(5, HIGH);
}
}
