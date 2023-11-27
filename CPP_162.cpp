string string_to_md5(string text){
    if(text.empty()){
        return "None";
    }

    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    char md5_string[33];

    MD5(reinterpret_cast<const unsigned char*>(text.c_str()), text.length(), md5_hash);

    for(int i = 0; i < 16; i++){
        sprintf(&md5_string[i*2], "%02x", (unsigned int)md5_hash[i]);
    }

    return md5_string;
}