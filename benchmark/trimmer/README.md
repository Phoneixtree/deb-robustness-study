# Steps to Build Timmer on Ubuntu (16.04 or 18.04)
20220726 editted by wxh

## Step1 Get Source Code of Trimmer
* you can use `git clone` to clone from github
```
	git clone https://github.com/ashish-gehani/Trimmer
```
* or you can download Trimmer-master.zip from https://github.com/ashish-gehani/Trimmer and extract it locally

## Step2 Install cmake
I failed in building Trimmer with cmake-3.24.0 but made it with cmake-3.13.4
Please use `cmake-3.13.4-Linux-x86_64.sh` in this directory and run
```
	sudo sh cmake-3.13.4-Linux-x86_64.sh --prefix=/usr/local --exclude-subdir
```

## Step3 Build Trimmer
If you have already got the source code of Trimmer
```
	#if your Ubuntu's version is 16.04
	cd Trimmer/vagrants/16.04
	#else if your Ubuntu's version is 18.04
	cd Trimmer/vagrants/18.04
```
I built trimmer on my Ubuntu-16.04

Then you have to modified `bootstrap.sh` using sentences below
```
	#HOME is where your place Trimmer's source code, like ~/Trimmer then HOME=~
	export HOME=~
	export LLVM_COMPILER=clang
	#LLVM_DIR is where your are going to place LLVM-functions code, like ~/LLVM then LLVM_DIR=~/LLVM
	export LLVM_DIR=~/LLVM
```

Modified `bootstrap.sh` will be like this:
```
	# Copyright (c) 2020 SRI International All rights reserved.
	# Use of this source code is governed by a BSD-style
	# license that can be found in the LICENSE file.

	#!/usr/bin/env bash

	# 20220705 wxh modified
	export HOME=~
	export LLVM_COMPILER=clang
	export LLVM_DIR=~/LLVM

	# Install package dependencies
	sudo apt-get update
	sudo apt-get install -y build-essential cmake git gettext gnutls-dev groff-base libbz2-dev libevent-dev libidn11-dev libmemcached-tools libpcap-dev libpcre3-dev libssl-dev pkg-config 	python-
	minimal uuid-dev wget wireless-tools curl
	
	# ......
```

And finally you can build trimmer
```
	sudo bash ./bootstrap.sh
```

It took me about 1.5 hour in this progress
If you succeeded in building, it shows you
```
	passed:63
	failed:0
```

# Step4 Install wllvm
Trimmer uses wllvm to create xxxx.bc
To install wllvm:
```
	pip install wllvm
```
**I failed in using wllvm after I changed the priority of python and python3, so please do not change default "python" in your Ubuntu!**
Then you have to set environment variable for wllvm:
```
	export LLVM_COMPILER=clang
```
And if you dislike typing this sentence everytime you open a terminal you can paste it into ~/.profile






