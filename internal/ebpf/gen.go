package ebpf

//go:generate go run github.com/cilium/ebpf/cmd/bpf2go -target native Falena ../../bpf/falena.c -- -I../../bpf/headers
