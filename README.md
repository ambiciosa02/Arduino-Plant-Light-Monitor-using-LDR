# Arduino-Plant-Light-Monitor-using-LDR
This Arduino code is a simple light monitoring system using an LDR (light-dependent resistor) to check ambient light for plants.


🔍 How it works
1️⃣ Hardware setup

LDR (photoresistor) connected to A0 (analog input).

Optional: a lamp or alert system can be triggered when light is too low.

2️⃣ Program flow

Setup:

Initialize Serial communication at 9600 bps.

Set ldrPin as input.

Loop:

Read the light level using analogRead(ldrPin).

Print the value to the Serial Monitor.

If light value < threshold (300):

Print "⚠️ Not enough light for the plant!"

Optional: you can add actions like turning on a lamp or sending a notification.

Wait 3 seconds before the next reading.

3️⃣ What you’ll see

Serial Monitor will continuously show light levels.

If ambient light is below the threshold, a warning message is displayed.
