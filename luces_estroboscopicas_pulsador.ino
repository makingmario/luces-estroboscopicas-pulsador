int retardo=70;
int contador=1;

void setup() 
{
pinMode(9,OUTPUT);        //led verde
pinMode(7,OUTPUT);        //led amarillo
pinMode(3,INPUT_PULLUP);  //pulsador
}

void loop() 
{
  digitalWrite(9,HIGH);
  delay(retardo*contador); //70ms X 1= 70mS  70ms X 2= 140mS  70ms X 3= 210mS  
  digitalWrite(9,LOW);
  delay(retardo*contador);
  
  digitalWrite(9,HIGH);
  delay(retardo*contador);
  digitalWrite(9,LOW);
  delay(retardo*contador);

//------

  digitalWrite(7,HIGH);
  delay(retardo*contador);
  digitalWrite(7,LOW);
  delay(retardo*contador);
  
  digitalWrite(7,HIGH);
  delay(retardo*contador);
  digitalWrite(7,LOW);
  delay(retardo*contador);

  if(digitalRead(3)==LOW)//fue pulsado?
  {
    contador=contador+1;
    delay(3000);
    if(contador>=4)contador=1;
  }
}
