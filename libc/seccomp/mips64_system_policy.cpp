// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter mips64_system_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5000, 0, 84),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5164, 41, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5077, 21, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5034, 11, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5008, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5005, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5003, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5002, 77, 76), //read|write
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5004, 76, 75), //close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5006, 75, 74), //fstat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5031, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5023, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5020, 72, 71), //lseek|mmap|mprotect|munmap|brk|rt_sigaction|rt_sigprocmask|ioctl|pread64|pwrite64|readv|writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5028, 71, 70), //sched_yield|mremap|msync|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5032, 70, 69), //dup
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5057, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5043, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5038, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5037, 66, 65), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5042, 65, 64), //getpid|sendfile|socket|connect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5056, 64, 63), //sendto|recvfrom|sendmsg|recvmsg|shutdown|bind|listen|getsockname|getpeername|socketpair|setsockopt|getsockopt|clone
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5070, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5062, 62, 61), //execve|exit|wait4|kill|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5076, 61, 60), //fcntl|flock|fsync|fdatasync|truncate|ftruncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5132, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5093, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5091, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5089, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5080, 56, 55), //getcwd|chdir|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5090, 55, 54), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5092, 54, 53), //fchown
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5110, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5109, 52, 51), //umask|gettimeofday|getrlimit|getrusage|sysinfo|times|ptrace|getuid|syslog|getgid|setuid|setgid|geteuid|getegid|setpgid|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5130, 51, 50), //setsid|setreuid|setregid|getgroups|setgroups|setresuid|getresuid|setresgid|getresgid|getpgid|setfsuid|setfsgid|getsid|capget|capset|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|sigaltstack
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5151, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5137, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5134, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5133, 47, 46), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5136, 46, 45), //statfs|fstatfs
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5150, 45, 44), //getpriority|setpriority|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|mlock|munlock|mlockall|munlockall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5153, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5152, 43, 42), //pivot_root
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5162, 42, 41), //prctl|adjtimex|setrlimit|chroot|sync|acct|settimeofday|mount|umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5244, 21, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5208, 11, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5178, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5172, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5168, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5167, 36, 35), //reboot|sethostname|setdomainname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5170, 35, 34), //init_module|delete_module
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5173, 34, 33), //quotactl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5200, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5194, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5193, 31, 30), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5198, 30, 29), //futex|sched_setaffinity|sched_getaffinity|cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5206, 29, 28), //io_setup|io_destroy|io_getevents|io_submit|io_cancel|exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5237, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5215, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5211, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5209, 25, 24), //epoll_ctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5214, 24, 23), //rt_sigreturn|set_tid_address|restart_syscall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5226, 23, 22), //fadvise64|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5242, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5238, 21, 20), //waitid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5243, 20, 19), //set_thread_area
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5297, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5271, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5252, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5247, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5246, 15, 14), //inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5251, 14, 13), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5267, 13, 12), //newfstatat|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare|splice|sync_file_range|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5279, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5276, 11, 10), //getcpu|epoll_pwait|ioprio_set|ioprio_get|utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5295, 10, 9), //fallocate|timerfd_create|timerfd_gettime|timerfd_settime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5316, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5308, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5300, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5298, 6, 5), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5306, 5, 4), //clock_adjtime|syncfs|sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5315, 4, 3), //getdents64|sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5319, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5317, 2, 1), //execveat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5323, 1, 0), //mlock2|copy_file_range|preadv2|pwritev2
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t mips64_system_filter_size = sizeof(mips64_system_filter) / sizeof(struct sock_filter);
