<h1 align="center">🌀 Problem Statement 3: Circle Position Check</h1>

<p align="center">
  <img src="https://media.giphy.com/media/du3J3cXyzhj75IOgvA/giphy.gif" width="200" alt="spinning circle" />
</p>

---

## 📝 Problem Description

You would have been given an origin-centered circle's **radius** (the circle is centered at (0, 0)) and the **x** and **y** coordinates of a point.  
Your task is to determine whether the point is:

- 🟢 **Inside** the circle
- ⚪ **On** the circle
- 🔴 **Outside** the circle

---

### 🔍 Hint:

Use the formula:

\[
x^2 + y^2 - r^2
\]

---

## 📥 Input

- A single line containing **three integers**:
  - Radius of the circle `r`
  - X coordinate of the point `x`
  - Y coordinate of the point `y`

---

## 📤 Output

Print one of the following based on the point's position:

- `"Inside the Circle"` 🟢
- `"On the Circle"` ⚪
- `"Outside the Circle"` 🔴

---

## 💡 Example

| Input    | Output             |
|----------|--------------------|
| `6 2 2`  | Inside the Circle  |
| `4 0 4`  | On the Circle      |
| `5 5 5`  | Outside the Circle |

---


## 🚀 How to Use

Create a program that:

Write a program that:
1. Reads three integers: `r`, `x`, and `y`
2. Computes `x² + y²`
3. Compares it to `r²`
4. Prints the appropriate output
---

## 🧠 Pseudocode (No Solution! ⚠️)

```text
Read r, x, y
Compute value = x² + y²
If value < r²:
Print "Inside the Circle"
Else if value == r²:
Print "On the Circle"
Else:
Print "Outside the Circle"
```
---

<p align="center">
  <img src="https://media.giphy.com/media/JIX9t2j0ZTN9S/giphy.gif" width="250" alt="coding animation" />
</p>

---

## 📎 Tags

`#Math` `#Geometry` `#Circle` `#Coordinates` `#Logic` `#Beginner`
