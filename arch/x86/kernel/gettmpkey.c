#include <linux/unistd.h>
#include <linux/linkage.h>

asmlinkage long sys_gettmpkey(int key, int n, char* value){
  return (key);
}
