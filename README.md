# CS101 Final Exam: C++ Programming Implementation

## 📂 Project Structure

This exam is split into two files to help you focus on one core concept at a time.

1. **`sort_array.cpp`**: Focuses on **Logic**. Can you organize data?
2. **`bmi_calculator.cpp`**: Focuses on **Interaction**. Can you build a tool for a user?

---

## 🛠 File 1: `sort_array.cpp` (The Logic Test)

**Objective:** Take a messy list of 100 numbers and put them in order.

- **What we're looking for:** A nested loop (a loop inside a loop) and a way to swap two numbers if they are in the wrong order.
- **Don't sweat the small stuff:** If you forget the exact name of the array or misplace a curly bracket, you will still receive most of the credit as long as your **sorting logic** is visible.

---

## 🛠 File 2: `bmi_calculator.cpp` (The Tool Test)

**Objective:** Create a program that talks to a user and does some math.

- **What we're looking for:** Can you ask a question, save the answer, and use the BMI formula?
- **The Formula:**

$$
\text{BMI} = \frac{\text{weight (kg)}}{\text{height (m)}^2}
$$

Or in C++ syntax:

```cpp
bmi = weight / (height * height)
```

- **Pro-Tip:** Make sure to use `double` or `float` for your numbers so you can handle decimals like `1.75` meters!

---

## ⚖️ Grading Rubric

_We are looking for "Proof of Concept." If your logic is sound, you are in good shape!_

| Section               | Points     | How to earn them                                                                       |
| --------------------- | ---------- | -------------------------------------------------------------------------------------- |
| **The "Big Picture"** | **50 pts** | Does the code show you understand how a sort works and how to calculate BMI?           |
| **Effort & Attempt**  | **30 pts** | Did you attempt every part of the prompt? (Partial code still earns points!)           |
| **Syntax & Flow**     | **20 pts** | Is the code generally readable? (Minor typos/missing semicolons won't hurt much here). |

**Total: 100 points**

> **Professor's Grace Period:** If your code doesn't compile due to a single missing semicolon or a small typo, I will fix it and grade the logic underneath. I want to see how you **think**, not just how you type!

---

## 📊 Visual Guide

### How Bubble Sort Works (Conceptual)

```
Initial Array:    [5, 2, 8, 1, 9]
                    ↓  ↓
After Pass 1:     [2, 5, 1, 8, 9]  ← Largest bubbles to the end
                    ↓  ↓
After Pass 2:     [2, 1, 5, 8, 9]
                    ↓  ↓
After Pass 3:     [1, 2, 5, 8, 9]  ← Sorted!
```

**Key Insight:** Compare neighbors, swap if wrong order, repeat!

### BMI Calculation Example

```
User inputs:
  Weight = 70 kg
  Height = 1.75 m

Calculation:
  BMI = 70 / (1.75 × 1.75)
      = 70 / 3.0625
      = 22.86

Result: "Your BMI is 22.86 (Normal weight)"
```

---

## 🚀 How to Submit

1. Ensure both files are saved as `.cpp`.
2. Upload them to [Insert Platform Name].
3. Double-check that you included your name in the comments at the top of each file!

---

## 📝 Getting Started

### Compile and Run

To compile and run each file:

```bash
# For sort_array.cpp
g++ -o sort_array sort_array.cpp
./sort_array

# For bmi_calculator.cpp
g++ -o bmi_calculator bmi_calculator.cpp
./bmi_calculator
```

### Tips for Success

- **Start simple:** Get something working first, then refine it.
- **Test as you go:** Compile frequently to catch errors early.
- **Comment your code:** It helps you think through your logic and shows your understanding.
- **Ask for help:** If you're stuck, reach out during office hours!

---

Good luck! Remember: I'm grading your **thinking**, not just your typing. 🎓
