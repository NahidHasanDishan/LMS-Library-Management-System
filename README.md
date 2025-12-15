## 📚 Library Management System (C – Terminal Based)

This project is a console-based Library Management System written in C, designed to demonstrate core procedural programming concepts along with modular design and unit testing.

### ✨ Features

| Role | Feature |
| :--- | :--- |
| **Shared** | Menu-driven terminal interface |
| **Librarian** | Add book, remove book |
| **Librarian** | View available books |
| **Issue** | Issue book to student |
| **Records** | View issued book list |
| **Storage** | Binary files (`books.txt`, `issue.txt`) |
| **Testing** | Unit-style tests for each module |

### 🗂 File Map

| File | Purpose |
| :--- | :--- |
| **`main.c`** | Entry menu (add/list/delete/issue) |
| **`books.c`** | Add book, book validation |
| **`list.c`** | Show available books |
| **`delete.c`** | Remove book |
| **`issue.c`** | Issue book, issued list |
| **`test_books.c`** | Book validation test |
| **`test_list.c`** | List validation test |
| **`test_delete.c`** | Delete validation test |
| **`test_issue.c`** | Issue validation test |
| **`test_main.c`** | Menu validation test |

### ⚙️ Build & Run

**Requirements:** GCC (MinGW on Windows) — no extra libraries.

```bash
# 1. Compile main application
gcc ./main.c

# 2. Run
./a.exe

# Unit test (example)
gcc test_books.c -DUNIT_TEST
./a.exe
```