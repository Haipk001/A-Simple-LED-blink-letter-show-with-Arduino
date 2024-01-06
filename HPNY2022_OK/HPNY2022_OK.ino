/*
  Blink
Date created: 20220101
Phan Khac Hai
*/
int ArrBlink[2] = {500,300};
int ticks = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  Serial.println("");
}

// the loop function runs over and over again forever
void loop() {

for (int i = 0; i < 2; i++) {
    int Delay = ArrBlink[i];

  //--------------------H------------------------------------
    digitalWrite(13, HIGH);   // turn the LED on (Write letter H)
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("H");
    
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);    // turn the LED off 
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second
  
  //--------------------A------------------------------------
  
    // turn the LED on (Write letter A)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("A");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second
  
   //--------------------P------------------------------------
  
    // turn the LED on (Write letter P)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("P");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second 
  
   //--------------------P------------------------------------
  
    // turn the LED on (Write letter P)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
     digitalWrite(3, HIGH);
    Serial.println("P");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second 
  
  
     //--------------------Y------------------------------------
  
    // turn the LED on (Write letter Y)
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("Y");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second 
  
    //--------------------N------------------------------------
  
    // turn the LED on (Write letter N)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    Serial.println("N");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(Delay);                       // wait for ....
  
      //--------------------E------------------------------------
  
    // turn the LED on (Write letter E)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("E");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for .....
  
        //--------------------W------------------------------------
  
    // turn the LED on (Write letter W)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("W");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for .....
  
  
       //--------------------Y------------------------------------
  
    // turn the LED on (Write letter Y)
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("Y");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second 
  
    //--------------------E------------------------------------
  
    // turn the LED on (Write letter E)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("E");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for .....
  
  //--------------------A------------------------------------
  
    // turn the LED on (Write letter A)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("A");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second
  
   //--------------------R------------------------------------
  
    // turn the LED on (Write letter R)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
     digitalWrite(3, HIGH);
    Serial.println("R");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(100);                       // wait for a second 
  
   //--------------------"-"------------------------------------
  
    // turn the LED on (Write letter -)
  
    digitalWrite(11, HIGH);
    Serial.println("-");
    delay(200);                       // wait for...
    digitalWrite(11, LOW);
    delay(200);                       // wait for a second 

    

//This code are given to everyone

  //--------------------E------------------------------------
  
    // turn the LED on (Write letter E)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("E");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for .....


     //--------------------V------------------------------------
    digitalWrite(13, HIGH);   // turn the LED on (Write letter V)
    digitalWrite(12, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("V");
    
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);    // turn the LED off 
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second


    // turn the LED on (Write letter E)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("E");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for .....

  //     //--------------------R------------------------------------
  
    // turn the LED on (Write letter R)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
     digitalWrite(3, HIGH);
    Serial.println("R");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second 

  // turn the LED on (Write letter Y)
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("Y");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second 

//    //--------------------O------------------------------------
    digitalWrite(13, HIGH);   // turn the LED on (Write letter O)
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("O");
    
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);    // turn the LED off 
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for a second

    // turn the LED on (Write letter N)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    Serial.println("N");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(Delay);                       // wait for ....


    // turn the LED on (Write letter E)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    Serial.println("E");
    delay(Delay);                       // wait for...
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);                       // wait for .....

    //add ! symbol
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);

    delay(200);
    digitalWrite(4, LOW);
    delay(200);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(200);
    digitalWrite(4, HIGH);
    
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(Delay);
    
    //=========================
    Serial.println("-------------------------------------------------");
    Serial.println("tick@: " + String(ticks) + ", delay=" + String(Delay));
}
++ticks;
delay(5000);

}
