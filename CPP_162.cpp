string string_to_md5(string text){
    if(text.empty())
        return "None";
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX context;
    MD5_Init(&context);
    MD5_Update(&context, (unsigned char*)text.c_str(), text.length());
    MD5_Final(digest, &context);
    
    char md5string[33];
    for(int i=0; i<16; i++){
        sprintf(&md5string[i*2], "%02x", (unsigned int)digest[i]);
    }
    
    return string(md5string);
}