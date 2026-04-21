# 📘 FOP Exercises:
This repository contains programming exercises and lab implementations for the Foundations of Programming (FOP) course at MIT World Peace University (MIT-WPU) – Semester 2.

## 🎯 Concepts Covered

- Variables and Data Types  
- Arithmetic & Logical Operators  
- Conditional Statements (`if`, `else`, `switch`)  
- Looping Constructs (`for`, `while`, `do-while`)  
- Functions and Modular Programming  
- Arrays and Basic Matrix Operations  
- Mathematical Computations (Prime, Factorial, GCD, etc.)  

## 🎯 Objective:
The goal of this repository is to:
Strengthen core programming fundamentals
Improve logical reasoning and structured coding
Maintain a well-organized academic reference for Semester 2

## 🏫 Course Information
---

- **Course:** Foundations of Programming (FOP)  
- **University:** MIT World Peace University  
- **Semester:** 2  
- **Specialization:** AI & Data Science (AI & DS)  
- **Development Environment:** Visual Studio (or any C compiler)

---

# ⚙️ Compilation & Execution Instructions
---

Each `.c` file is independent and can be compiled separately.

---

## 🖥️ 1️⃣ Windows
✅ Option A: 
- Using Microsoft Visual Studio
- Open Visual Studio
- Create a New Console App (C Project)
- Replace the default source file with any .c file from this repository
- Click Build → Build Solution
- Run using Ctrl + F5

✅ Option B: Using MinGW (GCC):
If GCC (MinGW) is installed:

1. Open **Visual Studio**
2. Create a **New Console App (C project)**
3. Replace the default source file with any `.c` file from this repo
4. Click **Build → Build Solution**
5. Run using **Ctrl + F5**
```bash
gcc Armstrong_Number.c -o program
program.exe
```

Replace Armstrong_Number.c with the required filename.

---

## 🐧 2️⃣ Linux (GCC)

If GCC is installed (MinGW):
Most Linux distributions come with GCC pre-installed.

🔹 Compile:
```bash
gcc Armstrong_Number.c -o program
program.exe
```

🔹 Run:
```bash
./program
```

If GCC is not installed:
```bash
sudo apt install build-essential
```
---

### 🍎 3️⃣ macOS (Clang)
macOS uses Clang by default.

🔹 Install Command Line Tools (if not installed):
```bash
xcode-select --install
```

🔹 Compile:
```bash
clang Armstrong_Number.c -o program
```

(You can also use gcc, which maps to Clang on macOS.)

🔹 Run:
```bash
./program
```
## 📄 License:
This project is intended strictly for academic and learning purposes.
