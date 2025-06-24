#define pin_led1 8    
#define pin_led2 9  
#define pin_led3 10 
#define pin_led4 11   
#define pin_bot 2


void setup() {
  Serial.begin(9600);    
  pinMode (pin_led1, OUTPUT);  
  pinMode (pin_led2, OUTPUT); 
  pinMode (pin_led3, OUTPUT);  
  pinMode (pin_led4, OUTPUT); 
  pinMode (pin_bot, INPUT);
}

void loop() {
  if (Serial.available() == 1) {
    char a = Serial.read();
    if (a == '1') {
    digitalWrite (pin_led1, HIGH);
    }
    if (a == '2') {
    digitalWrite (pin_led2, HIGH);
    }
    if (a == '3') {
    digitalWrite (pin_led3, HIGH);
    }
    if (a == '4') {
    digitalWrite (pin_led4, HIGH);
    }
    if (a == '5') {
    digitalWrite (pin_led1, LOW);
    }
    if (a == '6') {
    digitalWrite (pin_led2, LOW);
    }
    if (a == '7') {
    digitalWrite (pin_led3, LOW);
    }
    if (a == '8') {
    digitalWrite (pin_led4, LOW);
    }
    if (a == '9') {
    digitalWrite (pin_led1, HIGH);
    digitalWrite (pin_led2, HIGH);
    digitalWrite (pin_led3, HIGH);
    digitalWrite (pin_led4, HIGH);
    }
    if (a == '0') {
    digitalWrite (pin_led1, LOW);
    digitalWrite (pin_led2, LOW);
    digitalWrite (pin_led3, LOW);
    digitalWrite (pin_led4, LOW);
    }
  }
  bool state = digitalRead(pin_bot);
  if (state == 1) {
    digitalWrite (pin_led1, HIGH);
    digitalWrite (pin_led3, HIGH);
    digitalWrite (pin_led2, LOW);
    digitalWrite (pin_led4, LOW);
  }
  else {
    digitalWrite (pin_led2, HIGH);
    digitalWrite (pin_led4, HIGH);
    digitalWrite (pin_led1, LOW);
    digitalWrite (pin_led3, LOW);
  }
}