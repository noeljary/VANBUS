void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  //analogWrite(3, 128);
  digitalWrite(3, 1);
  Serial.begin(115200);
}

void loop() {
  float v_raw = 0, i_raw = 0;

  for (int i = 0; i < 10; i++) {
    v_raw = ((v_raw * i) + analogRead(A0)) / (i + 1);
    i_raw = ((i_raw * i) + analogRead(A1)) / (i + 1);
  }

  float v_in = (((v_raw / 1000.0) * 5.0) / (16.0 / (31 + 16))) * 1.053;
  float i_in = map(abs((i_raw - 511)), 0, 512, 0, 30000);

  Serial.print(v_in);
  Serial.print("V - ");
  Serial.print(i_in);
  Serial.println("ma");

  delay(1000);
}
