/*
 * StringUtils.cpp
 * String utility class for Arduino
 * Converts various constants to Strings
 * 
 * David Siver
 * CS 4985
 * Fall 2015
 */

#include "StringUtils.h"

const String StringUtils::BOOLEAN = "boolean";
const String StringUtils::STATE = "state";
const String StringUtils::ESPLORA = "Esplora";
const String StringUtils::UNO = "UNO";

String StringUtils::getBooleanString(boolean value) {
  if (value == true) {
    return "true";
  } else {
    return "false";
  }
}

String StringUtils::getButtonStateString(int state, String board) {
  if (board == ESPLORA) {
    if (state == LOW) {
      return "LOW";
    } else {
      return "HIGH";
    }
  }
}
