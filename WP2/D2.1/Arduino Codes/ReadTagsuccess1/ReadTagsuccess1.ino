#include <NfcAdapter.h>
#include <PN532/PN532/PN532.h>


#include <PN532/PN532_HSU/PN532_HSU.h>
PN532_HSU pn532hsu(Serial1);
NfcAdapter nfc(pn532hsu);

int ledPin = 5;

void setup(void) {
    nfc.begin();
    digitalWrite(ledPin, LOW);
}

void loop(void) {
    if (nfc.tagPresent()) {
        NfcTag tag = nfc.read();
        digitalWrite(ledPin, HIGH);
    }

    else  digitalWrite(ledPin, LOW);

    delay(5000);
}
