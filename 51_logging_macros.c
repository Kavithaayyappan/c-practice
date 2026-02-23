#include <stdio.h>

#define LOG_DEBUG(msg) printf("[DEBUG] %s:%d:%s(): %s\n", __FILE__, __LINE__, __func__, msg)
#define LOG_INFO(msg)  printf("[INFO] %s:%d:%s(): %s\n", __FILE__, __LINE__, __func__, msg)
#define LOG_ERR(msg)   printf("[ERROR] %s:%d:%s(): %s\n", __FILE__, __LINE__, __func__, msg)

int main() {
    LOG_DEBUG("Debug message");
    LOG_INFO("Info message");
    LOG_ERR("Error message");
    return 0;
}