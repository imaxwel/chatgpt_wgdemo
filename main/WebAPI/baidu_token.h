#pragma once

#include "esp_system.h"

// 百度语音识别接口地址
// #define BAIDU_ASR_URL "https://vop.baidu.com/server_api"
// #define TOKEN_URL "https://aip.baidubce.com/oauth/2.0/token"


// 百度语音识别的API Key和Secret Key,将这两个key更改为自己的key
#define API_KEY "xxxx"
#define SECRET_KEY "xxxx"


// 获取语音识别结果
bool refresh_baidu_access_token(const char *client_id, const char *secret_key);


