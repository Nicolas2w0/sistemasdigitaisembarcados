#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botA 2
#define pin_botB 3

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botA, INPUT);
  pinMode(pin_botB, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botA = digitalRead(pin_botA);
  bool botB = digitalRead(pin_botB);

  if ((botA == 1) && (botB == 1)) {
    digitalWrite(pin_led1, 1);
  }

  else {
    digitalWrite(pin_led1, 0);
  }
   
  if ((botA == 1) || (botB == 1)) {
    digitalWrite(pin_led2, 1);
  }

  else {
    digitalWrite(pin_led2, 0);
  }

  if ((botA == 1) ^ (botB == 1)) {
    digitalWrite(pin_led3, 1);
  }

  else {
    digitalWrite(pin_led3, 0);
  }
}

