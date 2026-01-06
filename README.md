# Falena

[![CI](https://github.com/scale03/falena/actions/workflows/ci.yml/badge.svg)](https://github.com/scale03/falena/actions)
[![Go Report Card](https://goreportcard.com/badge/github.com/scale03/falena)](https://goreportcard.com/report/github.com/scale03/falena)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

**Kernel Depth. Kubernetes Context.**

Falena is a high-performance observability agent designed to bridge the semantic gap between Linux syscalls and Kubernetes identities. It leverages **eBPF (CO-RE)** to capture file access patterns with nanosecond precision and minimal overhead, correlating PIDs to Pods in real-time.
