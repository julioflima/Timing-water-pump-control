void setup() 
{
  Serial.begin(9600); 
   
  lcd.begin(16, 2);  //set up the LCD's number of columns and rows:
  lcd.clear();
  lcd.setCursor(0,0);
  
  //Declare the lamps to output.
  pinMode(LAMP_1,OUTPUT);
  pinMode(LAMP_2,OUTPUT);
  pinMode(LAMP_3,OUTPUT);
  pinMode(LAMP_4,OUTPUT);
  pinMode(LAMP_5,OUTPUT);
  pinMode(LAMP_6,OUTPUT);
  pinMode(LAMP_7,OUTPUT);
  pinMode(LAMP_8,OUTPUT);
  pinMode(LAMP_9,OUTPUT);
  pinMode(LAMP_10,OUTPUT);
  pinMode(LAMP_11,OUTPUT);
  pinMode(LAMP_12,OUTPUT);
   
  //Put them to level high, that's will switch off.
  digitalWrite(LAMP_1, HIGH);
  digitalWrite(LAMP_2, HIGH);
  digitalWrite(LAMP_3, HIGH);
  digitalWrite(LAMP_4, HIGH);
  digitalWrite(LAMP_5, HIGH);
  digitalWrite(LAMP_6, HIGH);
  digitalWrite(LAMP_7, HIGH);
  digitalWrite(LAMP_8, HIGH);
  digitalWrite(LAMP_9, HIGH);
  digitalWrite(LAMP_10, HIGH);
  digitalWrite(LAMP_11, HIGH);
  digitalWrite(LAMP_12, HIGH);
    
}
