#pragma once

template <typename T>
class smptr {
	T* ptr;

public:
	smptr() = default;
	smptr(T* p) : ptr(p) {}

	~smptr() { delete ptr; }

	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }

	bool equal(const smptr& other) const {
		return *ptr == *other.ptr;
	}

	bool operator==(const smptr& other) const {
		return equal(other);
	}
};