for(int i=0; i<message.length(); i++){
    if(isalpha(message[i])){
        message[i] = islower(message[i]) ? toupper(message[i]) : tolower(message[i]);
        if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
            message[i] = static_cast<char>(message[i] + 2);
        }
    }
}
return message;
}