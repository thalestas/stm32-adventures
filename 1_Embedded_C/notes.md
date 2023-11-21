### LED
LD2 is connected to PA05

1- Enable the clock:
RCC address - 0x40023800
AHB1L (PORTA) Offset - 0x30

== Address 0x40023830
== Set bit 0

2- Set to output mode
PORTA address - 0x40020000
Offset - 0x00

== Address 0x40020000
== Set bit 10

3- Set to HIGH
PORTD address - 0x40020000
Offset - 0x14

== Address 0x40020014
== Set bit 5
