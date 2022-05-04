#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T *elements;
		unsigned int length;
	public:
		Array() : elements(NULL), length(0) {}

		Array(unsigned int Length): elements(NULL), length(0)
		{
			if (Length == 0) throw "Length is zero\n";
			this->length = Length;
			this->elements = new T[this->length];
		}

		Array (const Array& other): elements(NULL), length(0)
		{
			*this = other;
		}
		const Array &operator=(const Array& other)
		{
			if (this != &other)
			{
				if (this->elements != NULL) delete []this->elements;
				this->elements = new T[other.length];
				for (unsigned int i = 0; i < other.length; i++)
					this->elements[i] = other.elements[i];
				this->length = other.length;
			}
			return *this;
		}

		T &operator[](unsigned int ind) const
		{
			if (ind < 0 || ind >= this->length) throw WrongIndex();
			return (this->elements[ind]);
		}

		class WrongIndex : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Wrong index !";
				}
		};

		unsigned int size() const {return (this->length);}

		~Array() {delete []this->elements;}
};

#endif
