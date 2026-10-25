# Mornigong
A morning clock that wakes you up with a sound of a gong/marimba!

## How it works
This project uses 10 solenoids, a solenoid driver board (made by me), an esp32-c3 for controlling the solenoids, and a holder board (for my specific marimba and my solenoids)

## How to make it:
- 3d print 10 of the "part_studio.stl" files, and assemble them following "assembly.step"
- Fasten the solenoids to the 3d printed frame, and the frame to your marimba
- Wire the solenoids to the driver board
- Upload gong.ino to the esp32c3, and change the pins for your exact wiring.
- Play around!

# IMPORTANT
- This is a two part project, I'm coming next week with the actual alarm clock, amd a more detailed program.
