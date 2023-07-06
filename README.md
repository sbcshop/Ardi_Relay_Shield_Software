# Ardi_Relay_Shield_Software
<img src="https://cdn.shopify.com/s/files/1/1217/2104/files/ArdiRelayShield.jpg?v=1683883429">
Ardi Relay Shield - a versatile 4-channel optoisolated relay board designed in the Arduino form factor, this shield seamlessly integrates with your Arduino Uno 
and compatible boards, Ardi32 and ArdiPi.

This github provides getting started guide and other working details for Ardi Relay Shield 

### Features:
- 4-channel optoisolated relay so better electrical isolation between High and Low side voltage.
- 4x Relay shield compatible with both 3.3V and 5V MCU
- Onboard 4 Status LED to indicate each relay ON/OFF State
- High-quality relays
- Provides NO/NC interfaces with Screw terminals.
- Mounts directly onto your ArdiPi, Ardi32, and Arduino compatible boards

### Specifications:
- Max Switching Voltage : 250VAC/30VDC
- Max Switching Current: 7A/10A
- Max Switching Power: 2770VA/240W
- Frequency: 1Hz
- Initial Contact Resistance: 50mΩMax at6VDC 1A
- Operate Time: 10ms max
- Release Time: 5ms max
- Life Expectancy Electrical: 100,000 Operations (rated load)
- Life Expectancy Mechanical: 10,000,000 Operations (no load)
  
### Hardware Overview
#### Pinout
<img src="https://cdn.shopify.com/s/files/1/1217/2104/files/relaypinout.jpg?v=1688467593">

- (1) 4 Relay
- (2) Relay ON/OFF status LED

#### Interfacing Details
RL_1, RL_2, RL_3 & RL_4 relay pins are directly connected with Arduino UNO Digital pin number 4-7 when mounted.
Similarly when mounted on Ardi32 it will used IO 41, 2, 9 and 14 pins

- COM - Common pin
- NC - Normally Closed, will be connected with COM when RELAY is OFF i.e. when not triggered
- NO - Normally Open, will be connected with COM when RELAY switched ON i.e when triggered

### Warning: Take precautions when working with HIGH VOLTAGE AC. Improper handling could result in fatality. As a result, it is advised to use under the supervision of experts.
   
### Example Codes
   Also, sample codes are available for Ardi Relay shield
   - [Ardi Relay shield for UNO](https://github.com/sbcshop/Ardi_Relay_Shield_Software/tree/main/examples/ArduinoUno_relay_shield_interfacing) 
   - [Ardi Relay shield for Ardi32](https://github.com/sbcshop/Ardi_Relay_Shield_Software/tree/main/examples/Ardi32_relay_shield_interfacing) 
   - [Ardi Relay shield for ArdiPi](https://github.com/sbcshop/Ardi_Relay_Shield_Software/tree/main/examples/ArdiPi_relay_shield_interfacing)
   
   Using this sample code as a guide, you can modify, build for other boards and share codes!!  
   
## Resources
  * [Schematic](https://github.com/sbcshop/Ardi_Relay_Shield_Hardware/blob/main/Design%20Data/SCH%204CH%20Relay%20Shield.pdf)
  * [Hardware Files](https://github.com/sbcshop/Ardi_Relay_Shield_Hardware/)
  * [Step File](https://github.com/sbcshop/Ardi_Relay_Shield_Hardware/blob/main/Mechanical%20Data/STEP%204CH%20Relay%20Shield.step)


## Related Products
   * [ArdiFi](https://shop.sb-components.co.uk/products/ardi32-uno-r3-alternative-board-based-on-esp32-s3-wroom?_pos=6&_sid=90d9cefb0&_ss=r) - Arduino Uno Form factor with latest powerful ESP32 S3
   * [ArdiPi](https://shop.sb-components.co.uk/products/ardipi-uno-r3-alternative-board-based-on-pico-w?_pos=5&_sid=5704675c2&_ss=r) - Arduino Uno Form factor with powerful Pico W of Raspberry Pi having onboard WiFi and BLE support.
   * [Ardi Display Shield](https://shop.sb-components.co.uk/products/ardi-display-shield-for-arduino-uno?_pos=5&_sid=961a5887c&_ss=r) - 2.0" Display Shield with onboard Programmable Buttons and Joystick
   * [Ardi UHF Shield](https://shop.sb-components.co.uk/products/ardi-uhf-shield-for-arduino-uno?variant=40791294836819) - UHF based shield with Oled display and Buzzer onboard
   * [Ardi RFID Shield](https://shop.sb-components.co.uk/products/ardi-rfid-shield-for-arduino-uno?_pos=5&_sid=b4e4b2ef1&_ss=r) - Ardi RFID Shield with onbard Relay and Status LED
   
   Shields are compatible with ArdiPi, Ardi-32 and Other Arduino Uno Compatible boards.

## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
