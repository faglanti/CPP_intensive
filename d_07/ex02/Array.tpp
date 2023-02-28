/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faglanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:28 by faglanti          #+#    #+#             */
/*   Updated: 2022/11/08 15:47:45 by faglanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array(): _size(0), _array(nullptr){}

template<typename T>
Array<T>::Array(unsigned int size): _size(size){
	_array = new T[size];
}

template<typename T>
Array<T>::Array(const Array<T> &copy){
	if (copy._size > 0){
		_array = new T[copy._size];
		for (int i = 0; i < (int)copy._size; i++)
			_array[i] = copy._array[i];
	}
	_size = copy._size;
}

template<typename T>
Array<T>::~Array(){
	delete [] _array;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &example){
	if (_size > 0)
		delete [] _array;
	_array = nullptr;
	if (example._size > 0){
		_array = new T[example._size];
		for (int i = 0; i < example._size; i++)
			_array[i] = example._array[i];
	}
	_size = example._size;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int number){
	if (number >= _size)
		throw IndexException();
	return (_array[number]);
}

template<typename T>
const char *Array<T>::IndexException::what() const throw(){
	return ("Index is out of bounds");
}

#endif