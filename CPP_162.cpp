unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    char buffer[MD5_DIGEST_LENGTH * 2];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buffer + i * 2, "%02x", result[i]);
    }

    return string(buffer);
}