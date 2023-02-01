#include <iostream>
template <typename T>

class Array {
    private :
    T *array;
    size_t mysize;
    public:
    Array()
    {
        this->array = NULL;
        this->mysize = 0;
    }
    Array(unsigned int n)
    {
        array = new T[n];
    }

    Array(const Array& other){
        *this = other;
    }

    const Array& operator=(const Array& other)
    {
        array = other.array;
        mysize = other.mysize;

        return *this;
    }

    T& operator[](const size_t index)
    {
        if(index > mysize && index < 0)
            throw IndexOutOfBoundsException();
        return array[index];
    }

    size_t size()
    {
        return this->size;
    }

    ~Array()
    {
        //delete [] array;
    }

     class IndexOutOfBoundsException : public std::exception{
        public:
        const char *what() const throw(){
            return ("Index is out of bounds");
        }
    };

};