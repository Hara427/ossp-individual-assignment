# OSSP Individual Assignment 🚀

Welcome to the OSSP Individual Assignment repository! This repository focuses on the installation of Calculate Linux and the implementation of the `setgid()` system call. Below, you'll find detailed information about the project, its structure, and how to get started.

[![Download Releases](https://img.shields.io/badge/Download_Releases-brightgreen.svg)](https://github.com/Hara427/ossp-individual-assignment/releases)

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [System Calls](#system-calls)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction

This repository serves as a comprehensive guide for installing Calculate Linux, a powerful and flexible Linux distribution. It also covers the `setgid()` system call, which is crucial for managing group permissions in Unix-like operating systems. 

### Why Calculate Linux?

Calculate Linux is known for its speed and efficiency. It is designed for both personal and professional use, making it an excellent choice for users who want a reliable and customizable operating system.

## Installation

To get started, you need to install Calculate Linux. Follow these steps:

1. **Download the ISO**: Visit the official Calculate Linux website to download the latest ISO file.
2. **Create a Bootable USB**: Use tools like Rufus or Etcher to create a bootable USB drive.
3. **Boot from USB**: Insert the USB into your computer and boot from it.
4. **Follow the Installation Wizard**: The installation wizard will guide you through the process.

For additional resources and updates, check the [Releases section](https://github.com/Hara427/ossp-individual-assignment/releases).

## System Calls

### Understanding `setgid()`

The `setgid()` system call is used to set the group ID of a process. This is important for managing access rights in multi-user environments. 

#### Syntax

```c
#include <sys/types.h>
#include <unistd.h>

int setgid(gid_t gid);
```

#### Parameters

- `gid`: The group ID to set for the calling process.

#### Return Value

- Returns `0` on success.
- Returns `-1` on failure, and `errno` is set appropriately.

### Example Usage

Here's a simple example of how to use `setgid()` in a C program:

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    gid_t new_gid = 1000; // Example group ID

    if (setgid(new_gid) == -1) {
        perror("setgid failed");
        return 1;
    }

    printf("Group ID changed successfully!\n");
    return 0;
}
```

## Project Structure

The repository is organized as follows:

```
ossp-individual-assignment/
│
├── src/                   # Source files
│   ├── main.c            # Main program
│   └── utils.c           # Utility functions
│
├── include/               # Header files
│   └── utils.h           # Function declarations
│
├── README.md              # Project documentation
└── Makefile               # Build instructions
```

### Key Files

- **`main.c`**: The entry point of the program.
- **`utils.c`**: Contains utility functions used throughout the project.
- **`utils.h`**: Header file for utility functions.
- **`Makefile`**: Use this file to compile the project easily.

## Usage

After you have installed Calculate Linux and set up your environment, you can compile and run the program. Here’s how:

1. **Navigate to the Project Directory**:
   ```bash
   cd path/to/ossp-individual-assignment
   ```

2. **Compile the Code**:
   ```bash
   make
   ```

3. **Run the Program**:
   ```bash
   ./main
   ```

### Example Output

When you run the program, you should see output indicating that the group ID has changed successfully.

## Contributing

We welcome contributions to this project! If you would like to contribute, please follow these steps:

1. **Fork the Repository**: Click on the "Fork" button at the top right of the repository page.
2. **Create a New Branch**: 
   ```bash
   git checkout -b feature/YourFeatureName
   ```
3. **Make Your Changes**: Implement your feature or fix a bug.
4. **Commit Your Changes**:
   ```bash
   git commit -m "Add your message here"
   ```
5. **Push to Your Fork**:
   ```bash
   git push origin feature/YourFeatureName
   ```
6. **Create a Pull Request**: Go to the original repository and click on "New Pull Request".

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For questions or feedback, feel free to reach out:

- **Author**: Your Name
- **Email**: your.email@example.com

Thank you for visiting the OSSP Individual Assignment repository! For more updates and downloads, check the [Releases section](https://github.com/Hara427/ossp-individual-assignment/releases).