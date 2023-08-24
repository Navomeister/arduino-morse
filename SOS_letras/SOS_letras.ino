
#define LED 13

// exemplo de código morse
// 100 ms pra dit e 300 ms pra dah
// uma palavra apenas


int SOS[3][3] = {{100, 100, 100},  // letra S
                 {300, 300, 300},  // letra O
                 {100, 100, 100}}; // letra S

void setup() {
  // put your setup code here, to run once:
  // seta o led como output
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // para cada letra (linha) da palavra (array), pisca dit ou dah (coluna)
  for (int i = 0; i < (sizeof(SOS) / sizeof(SOS[0])); i++){
    for (int j = 0; j < (sizeof(SOS[i]) / sizeof(SOS[i][0])); j++){
      digitalWrite(LED, HIGH);
      delay(SOS[i][j]);
      digitalWrite(LED, LOW);
      delay(100);
    }
    delay(300);
  }
  delay(700);
  // digitalWrite(LED, HIGH);
  // delay(1000);
  // digitalWrite(LED, LOW);
  // delay(1000);
}
