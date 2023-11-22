`# Makefile Practice

This repository contains a series of Makefiles for learning and practicing the creation of Makefiles. Each Makefile represents a different level of complexity and introduces new concepts in building and managing projects.

## Table of Contents

1. [0-Makefile](#0-makefile)
2. [1-Makefile](#1-makefile)
3. [2-Makefile](#2-makefile)
4. [3-Makefile](#3-makefile)
5. [Complete Makefile](#complete-makefile)
6. [Island Perimeter](#island-perimeter)

---

## 0-Makefile

**Mandatory**

Create your first Makefile.

**Requirements:**
- Name of the executable: school
- Rules: all
- The `all` rule builds your executable
- Variables: None

```make
all: school
school:
	# Commands to build the executable
```

---

## 1-Makefile

**Mandatory**

**Requirements:**
- Name of the executable: school
- Rules: all
- The `all` rule builds your executable
- Variables: CC, SRC
  - CC: the compiler to be used
  - SRC: the .c fil
```

---

## 2-Makefile

**Mandatory**

Create your first useful Makefile.

**Requirements:**
- Name of the executable: school
- Rules: all
- The `all` rule builds your executable
- Variables: CC, SRC, OBJ, NAME
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
- The `all` rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files

---
```

---

## 3-Makefile

**Mandatory**

**Requirements:**
- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
  - RM: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
```

---

## Complete Makefile

**Mandatory**

**Requirements:**
- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
  - RM: the program to delete files
  - CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the .o files
```

---
---

## Island Perimeter

**Mandatory**

**Requirements:**
- First line contains `#!/usr/bin/python3`
- You are not allowed to import any module
- Module and function must be documented


