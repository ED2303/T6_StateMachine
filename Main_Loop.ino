void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SensorSetup();
  stateMachineSetup();
  motorSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
 if(!emergencystop){ 
  SensorLoop();
  stateMachineLoop();
  motorLoop();
 } else {
  end
 }
}
