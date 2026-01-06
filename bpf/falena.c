#include <linux/bpf.h>
#include <bpf/bpf_helpers.h>

  char __license[] SEC("license") = "Dual MIT/GPL";

SEC("tracepoint/syscalls/sys_enter_openat")
int sys_enter_openat(void *ctx) {
   
    char msg[] = "Falena: Someone opened a file!\n";
    bpf_trace_printk(msg, sizeof(msg));

    return 0;
}
