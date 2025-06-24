#define botA 2
#define botB 3
#define botC 5
#define led1 9
#define led2 10
#define led3 11
#define led4 12

void setup() {
  pinMode(botA, INPUT);
  pinMode(botB, INPUT);
  pinMode(botC, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

bool A = digitalRead(botA);

void loop() {
  if((digitalRead(botA) == 0) && (digitalRead(botB) == 0) && (digitalRead(botC) == 1)){
    digitalWrite(led1,1);
  }
   if((digitalRead(botA) == 0) && (digitalRead(botB) == 1) && (digitalRead(botC) == 0)){
    digitalWrite(led1,1);
  }
   if((digitalRead(botA) == 1) && (digitalRead(botB) == 0) && (digitalRead(botC) == 0)){
    digitalWrite(led1,1);
  }
   if((digitalRead(botA) == 1) && (digitalRead(botB) == 1) && (digitalRead(botC) == 1)){
    digitalWrite(led1,1);
  }
  else{
    digitalWrite(led1,0);
  }
}
