int ehSilencio(short* in, unsigned long length, unsigned short min_level, double min_proportion) {
    int count_silence = 0;
    for (int i = 0; i < length; i++) {
        if (in[i] >= -min_level && in[i] <= min_level) {
            count_silence++;
        }
    }
    double proportion = (double)count_silence / length;
    return (proportion >= min_proportion);
}
