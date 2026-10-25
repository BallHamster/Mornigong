# Mornigong
A morning clock that wakes you up with a sound of a gong/marimba!


## How it works
This project uses 10 solenoids, a solenoid driver board (made by me), an esp32-c3 for controlling the solenoids, and a holder board (for my specific marimba and my solenoids)
<img src="pics/marimba.png" alt="Marimba" width="600">
<img src="pics/solenoids.png" alt="Solenoids" width="600">

Actual marimba and solenoids for my project
<img src="pics/driver board.png" alt="Driver board" width="600">

3d design of the driver board
## How to make it:
- 3d print 10 of the "part_studio.stl" files, and assemble them following "assembly.step"
- Fasten the solenoids to the 3d printed frame, and the frame to your marimba
- Wire the solenoids to the driver board
- Upload gong.ino to the esp32c3, and change the pins for your exact wiring.
- Play around!
<img src="pics/Assembly.png" alt="Assembly" width="600">
<img src="pics/Part.png" alt="Part" width="600">


### Print settings
- Use your preferred printer's basic settings (Like: https://craftlayerindia.com/blogs/3d-printer-settings/best-pla-settings-for-3d-printing)
- Leave supports off
- Infill: 15 %
- Print 10 of the parts, in batches or individually.
- Print in PLA

# IMPORTANT
- This is a two part project, I'm coming next week with the actual alarm clock, amd a more detailed program.
