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

## BOM

Ref_no,Part name,Pcs,Link,Cost for all needed parts/min order ($)
"-","Solenoids","10","https://www.aliexpress.com/item/1005002842258094.html","15"
"-","Marimba","1","https://www.aliexpress.com/item/1005011900189223.html","15"
"U1","ESP32-C3","1","https://www.aliexpress.com/ssr/300000512/BundleDealsDutyCovered?","3"
"C1","1000 uF 16V electrolytic, radial","1","https://www.lcsc.com/product-detail/Aluminum-Electrolytic-Capacitors-Leaded_1000uF-16V_C43810.html","0.8"
"C2, C3","100 nF 50V X7R, leaded MLCC","2","https://www.lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-Leaded_FH-Guangdong-Fenghua-Advanced-Tech-CT4-0805B104K500F3_C84772.html","0.4"
"D1-D10","1N5408 rectifier, 3A 1000V, DO-201AD","10","https://www.lcsc.com/product-detail/Diodes-General-Purpose_MDD-Microdiode-Electronics_C2460.html","0.85"
"F1","PTC resettable fuse 3A hold / 6A trip, 30V","1","https://www.lcsc.com/product-detail/PTC-Fuse_BOURNS_MF-R300_BOURNS-MF-R300_C208487.html","1.43"
"J1","USB-C receptacle 16P, SMD + through-hole shell","1","https://www.lcsc.com/product-detail/C165948.html","0.87"
"J3-J12","2-position screw terminal, 5.0 mm pitch","10","https://www.lcsc.com/product-detail/C474881.html","1.03"
"Q10-Q19","IRLZ44N logic-level MOSFET, TO-220AB","10","https://www.lcsc.com/product-detail/MOSFETs_Infineon-Technologies_C38774.html","7.25"
"R1-R10","100 ohm 1/4W 5% carbon film, axial","10","https://www.lcsc.com/product-detail/C120031.html","0.59"
"R11-R20","10 kohm 1/4W 5% carbon film, axial","10","https://www.lcsc.com/product-detail/C2894649.html?","0.41"
"R21, R22","5.1 kohm 1/4W 5% carbon film, axial","2","https://www.lcsc.com/product-detail/C120072.html","0.57"
"-","3D printing costs","-","-","2.50"
"","","","Total cost","49.70"

