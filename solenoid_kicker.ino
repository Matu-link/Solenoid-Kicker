#define skick 1  //ソレノイド
#define Lsen 2 //センサ
void setup() {
 Serial.begin(9600);
 pinMode(skick,OUTPUT);
 pinMode(Lsen,INPUT);

}

void loop() {  
  int val = digitalRead(Lsen);
  Serial.println(val);

 if(val == 1){
  digitalWrite(skick,HIGH);
 }
}
