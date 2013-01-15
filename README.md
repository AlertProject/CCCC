README.TXT for CCCC version 3.1.5-alert
========================================

This is a fork of the program CCCC (C and C++ Code Counter) for
the ALERT project. It includes minor modifications that allow to
the platform to retrieve information about modules/classes and
functions/methods.
For more information about ALERT project please visit: http://www.alert-project.eu

This program exists to analyze and report measurements on
source code in C, C++ and Java.  The languages Ada83 and Ada95, which were
supported in previous versions are presently not supported.

CCCC is a command line tool, originally implemented for Linux and other 
POSIX-style platforms, but also buildable on the Win32 platform.  
Files to be analyzed are listed (typically on the command line, although 
support does exist for the list of files to be read from standard input.   
The program analyzes the files and generates a one or more reports in HTML 
or XML format on the content.  

This distribution is intended to be a single package containing everything
which is required to compile and install CCCC on either a POSIX or Win32 
platform.  Whereas previous distributions contained only a single directory,
containing the source code of CCCC, this distribution is divided into a 
number of subdirectories, with the following contents:
* A full distribution of the Purdue Compiler Construction Toolset (PCCTS) by
  Terence Parr and others, now maintained by Tom Moog of Polhode Inc. 
  PCCTS is required to compile CCCC: in the past the distribution has relied
  on the existence of a PCCTS package on the compilation platform, while this
  distribution chooses to include it as part of CCCC's own package.
* The source of a new version of CCCC, which I hope will turn out to be more
  efficient, accurate and useful than previous versions, although it is very
  similar in spirit and interface.
* The source of an accessory program called CcccDevStudioAddIn.dll which 
  provides integration between the command line CCCC program and the 
  Microsoft Visual Studio IDE (version 5.0 or 6.0).
* A directory of minimal test cases for the command line CCCC tool.
* Miscellaneous batch files, makefiles and Microsoft Visual Studio workspace 
  and project files to support building, testing and installing the software 
  under POSIX and Win32.

The pccts directory contains software for which I am not the original 
author.  The software has been placed in the public domain, with
the expectation that appropriate credit will be given for use.  

Since version 3.pre63, the recommended way of building the software is by
using the BAT and SH scripts in the top directory of the distribution as
appropriate for your platform.  On Win32, the script build_w32vc.bat 
builds the software with Microsoft Visual C++ version 5 or 6 (locations
within the script may need to be modified according to which you have
and whether it is installed at the default position in the filesystem).
On Linux and similar platforms the shell script build_posixgcc.sh should work. 

Previous versions of CCCC have been released like PCCTS into the public
domain with no restrictions, other than the pious hope that should anyone
base a derivative work on it I will be given due credit.  The current version 
is released under the GNU Public License.

CCCC was originally developed as a proof-of-concept tool for some ideas 
relating to software metrics which I was investigating as an academic 
research project.  I have now completed the project and been awarded 
my PhD.  

With this release, I am choosing to declare the project in a dormant 
state.  I have no plans to do further releases, either to add new features
or to correct existing defects. I am happy to provide advice to users of 
CCCC via email, and I encourage all users to exercise the rights granted 
them under the GPL to tinker with the code if this helps the software 
to meet their needs better.

I am grateful to a number of people for assistance on this project, including
Terence Parr and his co-workers, and Tom Moog for the development and ongoing
maintenance of the excellent PCCTS tool; my academic supervisor, Dr Thomas
O'Neill; a number of developers who have contributed source patches; and
many people who have mailed me with constructive suggestions or merely to 
confirm that they were using the tool. Feedback on the value or otherwise 
of CCCC will always be welcome.


Tim Littlefair (tim_littlefair@hotmail.com)
updated January 2005
--------------

Santiago Dueñas (sduenas@libresoft.es)
updated January 2013
--------------
This distribution of CCCC is available from
http://github.com/AlertProject/CCCC

Past distributions of CCCC and related tools should be
available for the forseeable future from http://cccc.sourceforge.net
The Internet site for the original CCCC development is: http://cccc.sourceforge.net.

