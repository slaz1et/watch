// C++ code
//олег ботик


unsigned long time;
  unsigned long sec;
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
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
  delay(10);
  digitalWrite(pin, HIGH);
  Serial.println();
}



void get_digit(int x) {///x = 5

  for(int i = 0; i <= 3; ++i){
      int digit= x%10;	///dig = 5
      x /= 10;///x =
      delay(20);
      set_digit(digit, 9 - i) ;
    	Serial.print(digit);
  }

 Serial.println();
}



void loop()
{
   sec = millis() / 1000;

Serial.print("Time: 11:15 ");
  // ждет секунду, перед следующей итерацией цикла.
  for (int i=0; i<1000; i++) {
    while (sec == millis() / 1000) {

      get_digit(80);
    }
    sec = millis() / 1000;
  }
  //get_digit(20);

}


