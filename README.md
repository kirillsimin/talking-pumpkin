# 🎃 Talking Pumpkin

A pseudo-smart pumpkin that detects motion and plays a greeting. When a person responds, it detects the audio signal and plays a response.

## 📝 Overview

This project enhances a traditional Halloween pumpkin by integrating motion and sound detection capabilities. Upon detecting motion, the pumpkin greets the approaching individual. If the person replies, the pumpkin recognizes the audio response and plays a pre-recorded message.

## ✨ Features

- **🎭 Motion Detection**: Utilizes a PIR motion sensor to detect approaching individuals.
- **🔊 Audio Detection**: Employs a sound detector to capture audio responses.
- **📢 MP3 Playback**: Plays pre-recorded greetings and responses using an MP3 player module.

## 🛠️ Hardware Components

- [Espressif ESP32S](https://www.espressif.com/en/products/socs/esp32)
- PIR Motion Sensor (generic)
- KeeYees Mini MP3 DFPlayer Player Module
- [SparkFun Sound Detector (with Headers)](https://www.sparkfun.com/products/12642)

## 🚀 Setup and Usage

### 1️⃣ Hardware Assembly
- Connect the PIR motion sensor, sound detector, and MP3 player module to the ESP32S according to their respective pin configurations.

### 2️⃣ Audio Preparation
- Record various greetings and responses.
- Use audio editing software (e.g., Audacity) to modify and enhance the recordings as desired.
- Save the audio files in the appropriate format and upload them to the MP3 player module.

### 3️⃣ Programming
- Write or upload the firmware to the ESP32S to handle sensor inputs and control the MP3 player module.

### 4️⃣ Operation
- Once set up, the system will monitor for motion.
- Upon detecting movement, it will play a greeting.
- If it detects an audio response, it will play a corresponding reply.

## 🎃 Inspiration

This project was inspired by the desire to create a more interactive and engaging Halloween decoration. The idea was to have a pumpkin that not only greets visitors but also responds to their replies, adding an element of surprise and delight.

For a detailed walkthrough and additional insights, visit the project page on Hackster.io:  
🔗 [Answering Halloween Pumpkin](https://www.hackster.io/kirillsimin/answering-halloween-pumpkin-6e0853)

---

👻 **Happy Haunting & Happy Hacking!** 🎃
