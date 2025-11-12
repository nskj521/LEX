# Lex

![Lex](docs/images/lex.png)

Lex is a lightweight, simple, terminal-based text editor, inspired by GNU Nano. It focuses on minimalism, speed, and essential features for developers who prefer working in the terminal.

## ✨ Features

* 🧩 Familiar Interface — Simple layout inspired by Nano
* 🎨 Syntax Highlighting — Supports C, C++, Python, Java, JavaScript, and more
* 🧭 Lightweight & Fast — Minimal resource usage
* 💾 Basic File Operations — Open, edit, save files
* 🧠 Undo/Redo Support
* 🖱️ Optional Mouse Support
* ⚙️ Configurable Settings — Tab width, line numbers, etc.

## 📦 Installation

Requires CMake 3.15+, GCC/Clang, and Make.

### Build & Install

```bash
# Clone repo
git clone https://github.com/danko1122q/LEX.git && cd LEX

# Build
mkdir build && cd build
cmake ..
make -j$(nproc)

# Install (requires sudo)
sudo make install
```

**One-liner:**

```bash
git clone https://github.com/danko1122q/LEX.git && cd LEX && mkdir build && cd build && cmake .. && make -j$(nproc) && sudo make install
```

Default binary location: `/usr/local/bin/lex`

## 🗑️ Uninstallation

### Normal Uninstall

```bash
cd build
sudo make uninstall
```

### Force Uninstall

```bash
cd build
sudo make force-uninstall
```

Removes binary from:

* `/usr/local/bin/lex`
* `/usr/bin/lex`
* `${CMAKE_INSTALL_PREFIX}/bin/lex`

### Manual Uninstall

```bash
sudo rm -f /usr/local/bin/lex
sudo rm -f /usr/bin/lex
which lex # Should show nothing
```

## 🧹 Purge (Full Cleanup)

```bash
make -C build purge
```

> Runs uninstall, then deletes the build directory.

## 🚀 Usage

```bash
lex [filename]    # Open file or new buffer
lex -v            # Show version
```

### Interface Overview

* Editor area, Status bar, Command line (optional)

### Keyboard Shortcuts

| Shortcut | Action   |
| -------- | -------- |
| Ctrl+O   | Save     |
| Ctrl+X   | Exit     |
| Ctrl+G   | Help     |
| Ctrl+W   | Search   |
| Ctrl+K   | Cut line |
| Ctrl+U   | Paste    |
| Ctrl+Z   | Undo     |
| Ctrl+Y   | Redo     |

## ⚙️ Configuration

Change editor behavior via prompt (Ctrl+P):

```
set tabsize 4
set lilex 1
set helpinfo 0
```

## 🐛 Troubleshooting

**Installation:**

* Missing CMake: `sudo apt install cmake` (Debian/Ubuntu)
* Permission denied: Use `sudo`
* Build fails: Ensure GCC/Clang installed

**Uninstallation:**

* `install_manifest.txt` missing: use `sudo make force-uninstall`
* Permission denied: run with `sudo`
* Conflict with system `lex`: rename project in `CMakeLists.txt` or install locally with `CMAKE_INSTALL_PREFIX=$HOME/.local`

## 📜 License

Modified MIT License (Non-Commercial). Commercial use requires written permission.

## 🙏 Acknowledgments

* GNU Nano for inspiration
* Open Source community
* Contributors

## 🔗 Links

* Repository: github.com/danko1122q/LEX
* Issues / Pull Requests: Use
