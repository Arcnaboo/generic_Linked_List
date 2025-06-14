# 🧠 C LinkedList — Procedural, Generic, Powerful

This project implements a **generic, class-like linked list in C**, using only the procedural paradigm.

No macros.  
No magic.  
Just pure C — structured for clarity, control, and composability.

---

## 🔍 Features

- ✅ Generic `void*` data storage
- ✅ Class-like API (`add`, `remove_first`, `print`, `clear`)
- ✅ No global state — fully reusable
- ✅ Function pointers simulate OOP-style behavior
- ✅ Simple, lightweight, and embeddable

---

## 💡 Why Procedural?

Most modern devs lean on object-oriented languages to structure systems.  
But **procedural programming**, done right, teaches **architecture with intent**:

> "C doesn’t give you classes. It gives you something better — control."

You handle everything: memory, state, flow.  
That’s not a burden. It’s a **superpower**.

---

## 📦 File Structure

linkedlist/
├── linkedlist.h // Interface definition
├── linkedlist.c // Function implementations
└── main.c // Example usage

yaml
Copy
Edit

---

## 🚀 Usage

```bash
gcc main.c linkedlist.c -o linkedlist_example
./linkedlist_example
