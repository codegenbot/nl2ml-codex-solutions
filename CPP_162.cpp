Here is the solution:

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX md_ctx;
    MD5_Init(&md_ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&md_ctx, str, len);
    MD5_Final(md, &md_ctx);
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }
    return ss.str();
}