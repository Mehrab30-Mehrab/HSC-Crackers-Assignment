# 🧠 Quadratic Equation Type Classifier

This project classifies a *quadratic equation* based on the nature of its roots.

---

## 📘 Problem Description

You are given three integers `a`, `b`, and `c`, the coefficients of a quadratic equation of the form:

<div align="center">

**ax² + bx + c = 0**

</div>

You must determine the type of this equation based on the nature of its roots:

- **BAD EQUATION**: if both roots are complex  
- **GOOD EQUATION**: if both roots are real but not equal  
- **BEST EQUATION**: if both roots are real and equal

---

## 🧮 Hint

To determine the nature of the roots, compute the *discriminant*:

<div align="center">

**D = b² - 4ac**

</div>

- If **D < 0**: Complex roots → **BAD EQUATION**  
- If **D > 0**: Real and unequal roots → **GOOD EQUATION**  
- If **D == 0**: Real and equal roots → **BEST EQUATION**

---

## 📥 Input

A single line containing three space-separated integers:

<div align="center">

**a b c**

</div>

---

## 📤 Output

Print one of the following:
- `BAD EQUATION`
- `GOOD EQUATION`
- `BEST EQUATION`

---

## 🧪 Examples

| Input      | Output         |
|------------|----------------|
| 4 1 1      | BAD EQUATION   |
| 1 -2 1     | BEST EQUATION  |
| 2 4 1      | GOOD EQUATION  |

---

## 🚀 How to Run

1. Save the code into a file, e.g., `quadratic.c`

2. Compile the program:

```bash
gcc quadratic.c -o quadratic
```

3. Run the compiled program:

```bash
./quadratic
```

4. Input 3 integers (space-separated) and get the result.

---

## 📁 File Structure

```
📂 Quadratic-Equation-Classifier
├── 🧠 quadratic.c
└── 📄 README.md
```

---

## 🙌 Contributions

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Cascadia+Code&size=20&duration=4000&pause=1000&color=FFFFFF&center=true&vCenter=true&width=550&lines=Thanks+For+Going+Through+The+README!!!;Please+Star+The+Repository+If+You+Liked+It+%F0%9F%92%96" alt="Thank you animation" />
</p>

---
