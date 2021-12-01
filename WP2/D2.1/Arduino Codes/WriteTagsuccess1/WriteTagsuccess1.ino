#include <NfcAdapter.h>
#include <PN532/PN532/PN532.h>

#include <PN532/PN532_HSU/PN532_HSU.h>
PN532_HSU pn532hsu(Serial1);
NfcAdapter nfc(pn532hsu);


void setup() {
    nfc.begin();
      digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
    
        NdefMessage message = NdefMessage();
        message.addUriRecord("http://arduino.cc");

       if (nfc.tagPresent()) {
        nfc.write(message);
        digitalWrite(LED_BUILTIN, HIGH);
    }

    delay(5000);
        
       }
