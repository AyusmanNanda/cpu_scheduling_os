# CPU Scheduling Algorithms (FCFS, SJF, RR, Priority)

This project is an implementation of classic **CPU Scheduling Algorithms** in C.  
It is modular and allows you to easily switch between different algorithms (e.g., **FCFS, SJF, RR, Priority**) using macros or compiler flags.

---

## 📂 Project Structure

```
.
├── main.c          # Entry point (reads input, calls schedule)
├── algo.h          # Chooses scheduling algorithm via macros
├── fcfs.c / fcfs.h # First Come First Serve implementation
├── procgen.c / procgen.h # Random process generator
├── Makefile        # Build system for different schedulers
└── README.md
```

---

## ⚙️ Features

- **Random process generation** (`procgen.c`)  
- **Modular scheduling design** (plug-and-play algorithms via `algo.h`)  
- Implemented algorithms:
  - ✅ First Come First Serve (FCFS)  

---

## 🛠️ Build Instructions

### Build all schedulers
```bash
make
```

### Build FCFS scheduler only
```bash
make scheduler_fcfs
```

This will generate an executable:

```
./scheduler_fcfs
```

### Clean build files
```bash
make clean
```

---

## ▶️ Usage

Run the scheduler and enter the number of processes:

```bash
./scheduler_fcfs
Enter the number of processes: 5
Process before sorting:
process no 0 : process id [1], arrival time [42]
process no 1 : process id [2], arrival time [7]
...
```

Processes are generated randomly using `procgen.c`, then scheduled and sorted based on the chosen algorithm.

---

## 🔧 Switching Algorithms

You can change the algorithm by either:

1. **Defining a macro in code** (not recommended for large projects):

```c
#define FCFS   // or SJFS, RR, PRIORITY
#include "algo.h"
```

2. **Passing a compiler flag** (preferred):

```bash
gcc main.c fcfs.c procgen.c -o cpu_scheduling -DFCFS
```

With the Makefile, just run:

```bash
make scheduler_fcfs
make scheduler_sjfs
```

---

## 📖 Example Output (FCFS)

```
Enter the number of processes: 4
Process before sorting:
process no 0 : process id [1], arrival time [42]
process no 1 : process id [2], arrival time [7]
process no 2 : process id [3], arrival time [58]
process no 3 : process id [4], arrival time [13]

Process after sorting by arrival time:
process no 0 : process id [2], arrival time [7]
process no 1 : process id [4], arrival time [13]
process no 2 : process id [1], arrival time [42]
process no 3 : process id [3], arrival time [58]
```

---

## 🚀 Future Improvements

- Add **waiting time** and **turnaround time** calculation for each algorithm.  
- Add **Gantt chart visualization** (ASCII-based or graphical).  
- Support for **interactive vs random input mode**.
- Implement all cpu scheduling algorithims.

---

## 👨‍💻 Author

Developed by *Ayusman* as part of an **Operating Systems CPU Scheduling project**.
