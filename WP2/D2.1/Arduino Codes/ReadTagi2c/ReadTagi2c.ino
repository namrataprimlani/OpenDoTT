#include <NfcAdapter.h>
#include <PN532/PN532/PN532.h>


#include <Wire.h>
#include <PN532/PN532_I2C/PN532_I2C.h>

PN532_I2C pn532_i2c(Wire);
NfcAdapter nfc = NfcAdapter(pn532_i2c);

void setup(void) {
    nfc.begin();
    digitalWrite(LED_BUILTIN, HIGH);
}

void loop(void) {
    if (nfc.tagPresent()) {
        NfcTag tag = nfc.read();
        digitalWrite(LED_BUILTIN, LOW);
    }

    delay(5000);
}
