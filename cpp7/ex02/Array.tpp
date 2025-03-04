template<typename T>
Array<T>::Array(): _length(0), _data(0)
{}

template<typename T>
Array<T>::Array(unsigned int n): _length(n), _data(new T[n])
{
	for (unsigned int i = 0; i < _length; i++)
		_data[i] = T();
}

template<typename T>
Array<T>::Array(Array const &other): _length(other._length), _data(new T[other._length])
{
	for (unsigned int i = 0; i < _length; i++)
		_data[i] = other._data[i];
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		_length = other._length;
		_data = new T[_length];
		for (unsigned int i = 0; i < _length; i++)
			_data[i] = other._data[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete [] _data;
}

template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= _length)
		throw std::out_of_range("Array out of range!");
	return _data[i];
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return _length;
}
