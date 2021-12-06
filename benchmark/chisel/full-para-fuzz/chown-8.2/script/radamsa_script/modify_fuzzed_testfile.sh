#!/bin/bash

who=$(whoami)

  echo "${who}"":sudo+file1+file2" > train_input1
  echo "${who}"":sudo+d1/d1/d1/file+d2/d2/d2/file" > train_input2
  echo "${who}"":sudo+d1+d2" > train_input3
  echo "-R+""${who}"":sudo+d1+d2" > train_input4
  echo "-h+""${who}"":sudo+file1+file2" > train_input5
  echo "-h+""${who}"":sudo+symfile1+symfile2" > train_input6
  echo "${who}"":sudo+symfile1+symfile2" > train_input7

  echo "${who}:${who}""+file1+file2" > train_input11
  echo "${who}:${who}""+d1/d1/d1/file+d2/d2/d2/file"> train_input22
  echo "${who}:${who}""+d1+d2" > train_input33
  echo "-R+""${who}:${who}""+d1+d2"> train_input44
  echo "-h+""${who}:${who}""file1+file2" > train_input55
  echo "-h+""${who}:${who}""+symfile1+symfile2" > train_input66
  echo "${who}:${who}""+symfile1+symfile2" > train_input77

