#define botA 2
#define botB 3 
#define led1 8
#define led2 9
#define led3 10
#define led4 11

int counter = 0;
bool lastA = 0;
bool lastB = 0;
bool stateA = 0;
bool stateB = 0;
int i = 0;


void setup() {
  pinMode(botA, INPUT);
  pinMode(botB, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  stateA = digitalRead(botA);
  if (stateA != lastA){
    if (stateA == 1){
      if (counter < 15){
        counter++;
        Serial.println(counter);
      }
    }
  }
  lastA = stateA;

    stateB = digitalRead(botB);
  if (stateB != lastB
){
    if (stateB == 1){
      if (counter > 0){
        counter--;
        Serial.println(counter);
      }
    }
  }
  lastB
 = stateB;

  if (counter % 2 == 1 || counter == 1){
    digitalWrite(led1, 1);
  }
  else{
    digitalWrite(led1,0);
  }

  i =counter ;

  if (i == 2||i == 3||i == 6||i == 7||i == 10||i == 11||i == 14||i == 15){
    digitalWrite(led2, 1);
  }
  else{
    digitalWrite(led2,0);
  }

  if ((counter / 4 >= 1 && counter / 4 < 2) || counter / 4 >=3 ){
    digitalWrite(led3, 1);
  }
  else{
    digitalWrite(led3,0);
  }

  if (counter>=8){
    digitalWrite(led4, 1);
  }
  else{
    digitalWrite(led4,0);
  }

}
