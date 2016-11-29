#include <linux/unistd.h>
#include <linux/linkage.h>

asmlinkage long sys_mycall(void) {
  return(4096);
}

asmlinkage long sys_settmpkey(void) {
	return(11011);
}

asmlinkage long sys_gettmpkey(void) {
	return(10101);
}
