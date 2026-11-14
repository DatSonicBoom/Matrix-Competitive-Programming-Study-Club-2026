# Setup

In this series of events, students will use C++ to implement algorithms!

The following details a series of recommended installation steps. If you already have a C++ environment or prefer to set it up a different way, that's all good as well!

## Windows

Windows users will download *Windows Subsystem for Linux (WSL)* and use it to load a lightweight Ubuntu Linux virtual machine.

First, install *WSL:*

```ps
wsl --install
```

Once *WSL* has been installed, it is possible to download a Linux distribution from the Microsoft Store and run it.

Search for *Ubuntu* (by *Canonical*) on the Microsoft Store. Install it and run it.

At this point, a terminal window should open prompting you to select a username and password for your new *Ubuntu Linux* instance. Choose a simple username and password so that you don't forget it.

At this point, your *Ubuntu Linux* instance is now ready to use! You can run it again from the *Windows Terminal.*

You can use commands like `pwd`, `ls`, `cd`, and `mkdir` to navigate the environment.

From inside the terminal, install the `g++` compiler:

```bash
sudo apt-get install g++
```

Lastly, install Visual Studio Code. You can now use the `code` command from inside the *Ubuntu Linux* instance to launch Visual Studio Code in Windows with a connection to the virtual machine.

For instance, `code .` launches Visual Studio Code on the current directory.

## MacOS

Setting up a C++ environment on MacOS should be simpler. Install the `g++` compiler using the following command:

```zsh
xcode-select --install
```

Finally, install Visual Studio Code.