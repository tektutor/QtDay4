# QtDay4
These projects can be compiled in two ways

Command Line
Qt Creator IDE
Approach 1 - Command Line
-------------------------

If you are obsessed with command-line like me then, you can compile these projects in the Linux terminal or Windows command prompt with the below command

qmake make

The Makefiles must be generated with the .pro files in the respective project as the path of qmake and qt tools might vary from one system to other. When you run qmake, qmake will locate the .pro file from current directory and generate a Makefile with your system specific tool paths, hence the Makefile generated by QMake must be removed from version control.

Approach 2 - Qt Creator IDE
-------------------------

Just open the Qt project open and select the .pro file. Qt Creator IDE will then automatically generate the required files to build the projects.

If you wish to hire me for Qt Consulting or Training purposes, please feel free to drop an email to jegan@tektutor.org

Happy Coding !!!
