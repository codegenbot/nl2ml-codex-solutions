string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char *ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(md5, &ctx);
    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }
    return result;
}