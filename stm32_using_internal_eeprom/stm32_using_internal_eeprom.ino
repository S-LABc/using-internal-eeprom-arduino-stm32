#include <EEPROM.h>

int addr = 0;
byte val = 0x00;
byte asd[4] = {158, 129, 05, 73};

void setup() {
  EEPROM.put(addr, asd);
  Serial.begin(9600);
  while (!Serial) {}
}

void loop() {
  if (addr < EEPROM.length()) {
  
    val = EEPROM.read(addr);
  
    Serial.print(addr);
    Serial.print("\t");
    Serial.print(val, DEC);
    Serial.println();

    addr ++;
  }
}
