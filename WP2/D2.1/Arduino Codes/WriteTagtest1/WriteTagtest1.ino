#include <PN532_HSU.h>
  #include <PN532.h>
  
  PN532_HSU pn532hsu(Serial1);
  PN532 nfc(pn532hsu);
  
void setup(void) {

SERIAL.begin(9600);

SERIAL.println("NDEF Reader");

nfc.begin();

}



void loop(void) {

SERIAL.println("\nScan a NFC tag\n");

if (nfc.tagPresent()) {

NfcTag tag = nfc.read();

tag.print();

}

delay(5000);

}
