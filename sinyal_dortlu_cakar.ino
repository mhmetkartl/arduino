#define leftbutton 5
#define rightbutton 8
#define dortlubutton 3
#define flashbutton 4
#define leftled 5
#define rightled 10

void setup()
{
  pinMode(leftbutton,INPUT);
  pinMode(rightbutton,INPUT);
  pinMode(dortlubutton,INPUT);
  pinMode(flashbutton,INPUT);
  pinMode(leftled,OUTPUT);
  pinMode(rightled, OUTPUT);
}

void loop()
{

if ((digitalRead(leftbutton) == 1) && (digitalRead(rightbutton) == 1))
{
  digitalWrite(rightled,HIGH);
   digitalWrite(leftled,HIGH);
    delay(500);
    digitalWrite(rightled,LOW);
    digitalWrite(leftled,LOW);
    delay(500);
}

 else if(digitalRead(dortlubutton) == 1)
  {
   digitalWrite(rightled,HIGH);
   digitalWrite(leftled,HIGH);
    delay(500);
    digitalWrite(rightled,LOW);
    digitalWrite(leftled,LOW);
    delay(500);
  
  }

 
 else if(digitalRead(leftbutton) == 1)
  {
    digitalWrite(leftled,HIGH);
    delay(500);
    digitalWrite(leftled,LOW);
    digitalWrite(rightled,LOW);
    delay(500);
    
   
  }

  else if(digitalRead(rightbutton) == 1)
  {
    
     digitalWrite(rightled,HIGH);
    delay(500);
    digitalWrite(rightled,LOW);
    digitalWrite(leftled,LOW);
    delay(500);    
  }

else if(digitalRead(flashbutton) == 1)
  {
    digitalWrite(leftled,HIGH);
    delay(100);
    digitalWrite(leftled,LOW);
    digitalWrite(rightled,LOW);
    delay(100);
    digitalWrite(leftled,HIGH);
    delay(100);
    digitalWrite(leftled,LOW);
    delay(100);
    digitalWrite(leftled,HIGH);
    delay(100);
    digitalWrite(leftled,LOW);
    
    digitalWrite(rightled,HIGH);
    delay(100);
    digitalWrite(rightled,LOW);
    delay(100);
    digitalWrite(rightled,HIGH);
    delay(100);
    digitalWrite(rightled,LOW);
    delay(100);
    digitalWrite(rightled,HIGH);
    delay(100);
    digitalWrite(rightled,LOW);
    
  }
 



  else
 { 
  delay(500);
 digitalWrite(rightled,HIGH);
 digitalWrite(leftled,HIGH);
}
}
