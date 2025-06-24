#define pin_led1 8   
#define pin_led2 9   
#define pin_led3 10   
#define pin_bot1 2
#define pin_bot2 3

void setup() {
  Serial.begin(9600);        
  pinMode (pin_led1, OUTPUT);  
  pinMode (pin_led2, OUTPUT); 
  pinMode (pin_led3, OUTPUT);  
  pinMode (pin_bot1, INPUT);
  pinMode (pin_bot2, INPUT);
}

void loop() {
  bool state1 = digitalRead(pin_bot1);
  bool state2 = digitalRead(pin_bot2);
  if (state1 == 1 & state2 == 1) {
    digitalWrite (pin_led1, HIGH);
  }
  else {
    digitalWrite (pin_led1, LOW);
  }
  if (state1 == 1 |state2 == 1){
    digitalWrite (pin_led2, HIGH);
  }
  else {
    digitalWrite (pin_led2, LOW);
  }
    if (state1 == 1 != state2 == 1){
    digitalWrite (pin_led3, HIGH);
  }
  else {
    digitalWrite (pin_led3, LOW);
  }
    
}