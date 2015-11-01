/*
 * StringUtils.h
 * Header for String utility class for Arduino
 * Converts various constants to Strings
 * 
 * David Siver
 * CS 4985
 * Fall 2015
 */

#ifndef StringUtils_H_
#define StringUtils_H_

#include "Arduino.h"

class StringUtils {
  private:
    static String getConstantString(int constant, String context);

  public:
    static const String BOOLEAN;
    static const String STATE;
    static const String ESPLORA;
    static const String UNO;
    static String getBooleanString(boolean value);
    static String getButtonStateString(int state, String board);
};

#endif
