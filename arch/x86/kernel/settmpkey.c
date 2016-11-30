#include <linux/unistd.h>
#include <linux/linkage.h>

asmlinkage long sys_settmpkey(int key, char* value, unsigned int lifespan) {
  return (key);
}
