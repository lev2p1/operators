#pragma once

#include <stdexcept>
#include <string>

namespace oprs {

	template <typename T>
	class array {
		T* arr;
		int size;
		int capacity;

	public:
		array(int size) : arr(new T[size]), size(size), capacity(0) {}

		~array() {
			delete[] arr;
		}

		void add(T& data) {
			if (capacity == size)
				throw std::out_of_range("Access at index " + std::to_string(capacity) + " with size " + std::to_string(size));

			arr[capacity] = data;
			capacity++;
		}

		T& get(int index) {
			if (index >= 0 && index < capacity) {
				return arr[index];
			}

			throw std::out_of_range("Access via an incorrect index");
		}

		T pop() {
			if (capacity <= 0) 
				throw std::out_of_range("Access at index -1");

			capacity--;
			return arr[capacity];
		}

		int getSize() {
			return size;
		}

		int getCapacity() {
			return capacity;
		}

		T& operator[](int index) {
			return get(index);
		}
	};
}