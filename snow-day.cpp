float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
  float snow = initialSnow;
  for (int i = 0; i < hours; i++) {
    snow += snowFallRate;
    snow -= snow * meltingRate;
  }
  return snow;
}