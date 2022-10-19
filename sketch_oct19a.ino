unsigned long time;
  
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
 Serial.begin(9600);
}

void set_digit (int digit, int  pin) {
//программа функция переводящая из 10тичнцю в двоичную и подоющие число в двоичной на 4 шину

  digitalWrite(pin, LOW);

  for(int i = 0; i <= 3; ++i){
      int bit= digit%2;
      digit /= 2;
      digitalWrite(2 + i, bit);
    Serial.print(bit);
  }
  ///delay(60);
  digitalWrite(pin, HIGH);
  Serial.println();
}


void loop()
{
  set_digit(1, 6);
  digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      
 
}
