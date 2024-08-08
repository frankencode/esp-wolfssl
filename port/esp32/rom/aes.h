/** workaround for having wolfSSL esp32-crypt include proper header file
  */

#include <rom/aes.h>
#undef AES_BLOCK_SIZE
