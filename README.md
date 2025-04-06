# Sanat_MaRS
# 🚀 MaRS Recruitment - Software Task #1 (2025)

Welcome to my submission for **Software Task #1** from the MaRS Recruitment Team. This repository contains my completed solutions for the Light Dose and problems of the Medium Dose, all written in **C language**.

---

## 📌 Completed Tasks

### ✅ Light Dose
- Ubuntu commands and bash scripting (converted logic to C)

### ✅ Medium Dose 
- 📐 **Camera coordinate correction** – Calculated object position after correcting misalignment.
- 📡 **Morse code decoding** – Interpreted signals and decoded into plain text.
- 🔐 **Encryption of message** – Decrypted the rover's encoded messages.
- 🔬 **Applying Median Filter** - Reading sensor values from a file and filtering it.
- 💻 **Conversion Code** - Conversion of message for communication between Martian and MaRSians.

### ✅ Hard Dose 
- 📐 **Obstacle Detection** – Reads obstacle data from a file and generates a visual map of an arena, marking obstacles and safe positions based on relative directions.
- 📡 **Behaviour Tree Structure** – Checks battery status first, then handles movement and obstacle avoidance

---

## 💡 Technologies Used

- **C Programming Language** (GCC)
- **Linux Terminal** for compilation and testing
- **Git** for version control

---

## 📂 Directory Structure

```bash
.
├── Light_Dose/
│   ├── light_1.sh
│   ├── light_2.sh
├── Medium_Dose/
│   ├── medium_1.c
│   ├── medium_2.c
│   ├── medium_3.c
│   ├── medium_4.c
│   └── medium_5.c
├── Hard_Dose/
│   ├── rover_brick.c
│   ├── hard_3.sh
├── Screenshot_Mars/           # Git command usage proof
├── README.md


---

## ⚙️ Compilation

You can compile any of the C programs using:

```bash
gcc filename.c -o outputname
./outputname
```


---

## 📷 Git and Terminal Usage

Screenshots of the following git commands are included:

```bash
git status
git add 
git commit -m "Commit Message"
git push origin main
git remote set-url origin https://<token>/Sanat0x01/Sanat_MaRS
mkdir
cd
touch
find . -type f -name ".log"
gedit
cat
grep
wc -l
echo

```

---

## 🧠 Learning Outcomes

- Improved command over **C programming** for system-level tasks.
- Practiced data parsing and transformation techniques.
- Understood how to simulate bash-like operations using C.
- Worked with coordinate geometry and string decoding algorithms.

---

## ✍️ Approach to the problems
**First Medium Dose Program**

- I wrote this code to help me calculate how far an object is from a camera in 3D space. First, I ask the user (that could be me or someone else) to type in the x and y coordinates that the camera detected. I already know the z-coordinate starts at -60 cm - that's how far back the camera is from the object. But I realized there's a 5 cm offset in our setup that we need to account for, so I adjusted the z-coordinate to -65 cm. Then I did two distance calculations - one with the original -60 cm position and one with the corrected -65 cm position. Finally, I printed out both results so I can see exactly how much difference that 5 cm adjustment makes.

**Second Medium Dose Program**

- I built this program to translate Morse code signals back into readable letters and numbers. It starts by asking how many Morse code characters we need to decode. Then, one by one, I take each Morse code input from the user - things like short beeps (dots) and long beeps (dashes) - and store them in memory. The real magic happens in the decoding part, where I compare each Morse code pattern against all the standard combinations I know. For example, when I see '.-', I know that's 'A', and '-...' is 'B'. This goes all the way through the alphabet and includes numbers too - '-----' becomes '0', '.----' is '1', and so on up to '9'. If someone enters a code I don't recognize, I just show a question mark to indicate it's not valid. It's like having a secret decoder ring built right into the computer! The program keeps things simple by handling one character at a time, making it easy to understand how Morse code translation works at its most basic level.
  
**Third Medium Dose Program**

- I wrote this program to decode secret messages that were encrypted using a special shifting technique. Here's how it works: First, it asks for the encrypted message and stores it. Then, it goes through each letter one by one. For every letter, it does three important things: (1) converts lowercase letters to uppercase to keep things consistent, (2) calculates how much the letter was shifted during encryption (the shift increases by 1 for each subsequent letter), and (3) reverses that shift to reveal the original letter. The clever part is handling the wrap-around - if reversing the shift takes us before 'A', it loops back to 'Z' to keep everything within the alphabet. Finally, it puts all the decoded letters together and shows us the original secret message.
  
**Fourth Medium Dose Program**

- I  built this program to clean up messy sensor data from a file called log.txt. First, I set up a median filter—a common technique for smoothing out noise. The filter works by taking small chunks of data (3 values at a time), sorting them, and picking the middle value to remove extreme spikes. I used bubble sort because it’s simple and works fine for small groups of numbers. The program reads the raw sensor values, applies the filter, and then prints the cleaned-up results. This helps make the data more reliable by removing random jumps while keeping the real trends intact—just like how noise-canceling headphones block out static but keep the music clear.

  **Fifth Medium Dose Program**

  -To solve this problem, I started by asking the user to input the roll, pitch, and yaw angles in degrees, since these represent rotations around the X, Y, and Z axes respectively. Since trigonometric functions in C work with radians, I created a toRadians function to convert the input values. After that, I calculated the cosine and sine values of half-angles for each of the three rotations—this is a standard part of converting Euler angles to a quaternion. Once I had all the trigonometric components, I used the quaternion formula to compute the values of w, x, y, and z. Finally, I printed out the quaternion values with 6 decimal precision to show the result in the Martian rotation system. This approach ensures that 3D orientation is accurately represented using quaternions instead of Euler angles, which can sometimes cause gimbal lock.

  **First Hard Dose Program**

  -To solve this problem, I began by prompting the user to input the filename that contains the obstacle data. I then opened the file and used fscanf to read each obstacle’s directional distances—north, east, south, and west—storing them in a 2D array. While reading the file, I simultaneously tracked the maximum distance to determine the appropriate arena size, which I calculated as 2 * max + 1 to account for movement in all directions from a central point. After initializing the entire arena with safe positions marked as 1, I determined the center and used the obstacle data to calculate each obstacle’s position relative to that center. I marked those positions in the arena as 0 to indicate obstacles. Finally, I printed the entire arena grid, using X for obstacles and . for safe zones, so the user could clearly visualize the layout.

  **Third Hard Dose Program**

  -To design the behaviour tree for the robot, I started by identifying the two main priorities: battery status and navigation. I used a Selector node at the root, since the robot should choose the first successful branch it can execute. For the first branch, I created a Battery Check Selector which allows the robot to react based on how critical the battery level is. If the battery is below 20%, the robot must immediately return to base. If it's low but not critical (between 20% and 50%), I decided it should conserve power by turning off non-essential systems like cameras. Otherwise, if the battery is above 50%, it proceeds with normal operation. Once battery safety is ensured, the second branch handles Navigation using a Sequence node, because each step must be performed in order. The robot attempts to move forward, and if it detects an obstacle, it checks the size. If it’s small, it just slightly changes direction and continues. But if it’s a large obstacle, it either stops or chooses an alternate route. 
  
---

## ✍️ Future Work

- Take on the Hard Dose challenges.
- Editing code for performance improvements.

---



> _"Exploration begins here!" — Team MaRS_
