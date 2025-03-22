# Radiance Home Security System

The DIY Home Security System is an Arduino-based intrusion detection system designed to enhance home security. It uses an ultrasonic sensor to detect movement and triggers a buzzer alarm if an object or person is detected within 30 cm. This system is simple, cost-effective, and easy to set up, making it ideal for home security applications.

## Features

- **Intrusion Detection:** Uses an ultrasonic sensor to detect movement.
- **Alarm System**: Activates a buzzer when an object is detected within range (within 30 cm).

> The components used for this project are listed [**here**](./components.md): `components.md`

## Circuit Connections

- **Ultrasonic Sensor:**
  - VCC → 5V (Arduino)
  - GND → GND (Arduino)
  - Trig → Digital Pin 9 (Arduino)
  - Echo → Digital Pin 10 (Arduino)

- **Buzzer:**
  - Positive (long leg) → Digital Pin 11 (Arduino)
  - Negative (short leg) → GND (Arduino)

## Code Structure

The project consists of a single Arduino script handling bin automation and monitoring:

- Main Code: `radiance-home-security.ino`
- Functions:
  - `setup()` - Initializes pins and serial communication.
  - `loop()` - Continuously checks for motion and triggers the buzzer if an object is detected.
  - `getDistance(int trigPin, int echoPin)` - Calculates distance using the ultrasonic sensor.

## How to Use

1. Clone the repository:

```sh
git clone https://github.com/emmanueldev247/radiance-home-security.git
```

2. Connect the components as per the provided [**Circuit Diagram**](./radiance-home-security-circuit-diagram.jpg).
3. Upload the code to your Arduino board.
4. Power the system and observe its functionality.

## Contributing

Contributions are welcome! Feel free to create issues, suggest new features, or open pull requests to improve the Radiance Smart Bin.

> Enjoy building a cleaner and smarter waste management system with Radiance Smart Bin!

## Authors

<details>
    <summary>Emmanuel Ademola</summary>
    <ul>
    <li><a href="https://www.github.com/emmanueldev247">Github</a></li>
    <li><a href="https://www.twitter.com/emmanueldev247">Twitter</a></li>
    <li><a href="mailto:mailemmydee@gmail.com">E-mail</a></li>
    <li><a href="https://emmanueldev247.publicvm.com">Portfolio</a></li>
    </ul>
</details>
