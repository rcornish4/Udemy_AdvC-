/*
 * ring.h
 *
 *  Created on: Jul 6, 2017
 *      Author: rcornish
 */

#ifndef RING_H_
#define RING_H_

#include <iostream>

template <class T>
class ring {
private:
  int m_size;
  int m_pos;
  T *m_values;

public:
  class iterator;

public:
  ring(): m_size(0), m_pos(0), m_values(nullptr) {}

  ring( int size ): m_size( size ), m_pos(0), m_values(nullptr) {
    m_values = new T[m_size];
  }

  virtual ~ring() {
    delete[] m_values;
  }

  int size() {
    return m_size;
  }

  iterator begin() {
    return iterator( 0, *this );
  }

  iterator end() {
    return iterator( m_size, *this );
  }

  void add( T value ) {
    m_values[m_pos++] = value;

    if (m_pos == m_size) {
	m_pos = 0;
    }

  }

  T &get( int pos ) {
    return m_values[pos];
  }

};

template <class T>
class ring<T>::iterator {
private:
  int m_pos;
  ring &m_ring;

public:
  iterator( int pos, ring &aRing ) : m_pos( pos ), m_ring( aRing ) {}

  iterator &operator++( int ) {
    m_pos++;

    return *this;

  }

  iterator &operator++() {
    m_pos++;

    return *this;

  }

  T &operator*() {
    return m_ring.get( m_pos );
  }

  bool operator!=(const iterator &other ) const {
    return m_pos != other.m_pos;
  }

};

#endif /* RING_H_ */
