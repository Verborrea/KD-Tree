// Copyright

#ifndef SRC_KDTREE_HPP_
#define SRC_KDTREE_HPP_

#include <cmath>
#include <iostream>
#include <set>
#include <stdexcept>
#include <utility>
#include <vector>
#include "Point.hpp"

template <size_t N, typename ElemType>
class KDTree {
 public:
  typedef std::pair<Point<N>, ElemType> value_type;

  KDTree();

  ~KDTree();

  KDTree(const KDTree &rhs);
  KDTree &operator=(const KDTree &rhs);

  size_t dimension() const;

  size_t size() const;
  bool empty() const;

  bool contains(const Point<N> &pt) const;

  void insert(const Point<N> &pt, const ElemType &value);

  ElemType &operator[](const Point<N> &pt);

  ElemType &at(const Point<N> &pt);
  const ElemType &at(const Point<N> &pt) const;

  ElemType knn_value(const Point<N> &key, size_t k) const;

  std::vector<ElemType> knn_query(const Point<N> &key, size_t k) const;

 private:

  struct KDTreeNode {
    value_type node_value;
    typedef KDTreeNode hijos[2];
    KDTreeNode(const value_type &value){
      node_value = value;
      hijos[0] = 0;
      hijos[1]] = 0;
    }
  }
  typedef KDTreeNode *raiz;
  size_t dimension_;
  size_t size_;
};

template <size_t N, typename ElemType>
KDTree<N, ElemType>::KDTree() {
  size_ = 0;
  dimension_ = N;
}

template <size_t N, typename ElemType>
KDTree<N, ElemType>::~KDTree() {
  // TODO(me): Fill this in.
}

template <size_t N, typename ElemType>
KDTree<N, ElemType>::KDTree(const KDTree &rhs) {
  // TODO(me): Fill this in.
}

template <size_t N, typename ElemType>
KDTree<N, ElemType> &KDTree<N, ElemType>::operator=(const KDTree &rhs) {
  // TODO(me): Fill this in.
  return *this;
}

template <size_t N, typename ElemType>
size_t KDTree<N, ElemType>::dimension() const {
  return dimension_;
}

template <size_t N, typename ElemType>
size_t KDTree<N, ElemType>::size() const {
  return size_;
}

template <size_t N, typename ElemType>
bool KDTree<N, ElemType>::empty() const {
  // TODO(me): Fill this in.
  return true;
}

template <size_t N, typename ElemType>
bool KDTree<N, ElemType>::contains(const Point<N> &pt) const {
  // TODO(me): Fill this in.
  return true;
}

template <size_t N, typename ElemType>
void KDTree<N, ElemType>::insert(const Point<N> &pt, const ElemType &value) {
  // TODO(me): Fill this in.
}

template <size_t N, typename ElemType>
ElemType &KDTree<N, ElemType>::operator[](const Point<N> &pt) {
  // TODO(me): Fill this in.
}

template <size_t N, typename ElemType>
ElemType &KDTree<N, ElemType>::at(const Point<N> &pt) {
  // TODO(me): Fill this in.
}

template <size_t N, typename ElemType>
const ElemType &KDTree<N, ElemType>::at(const Point<N> &pt) const {
  // TODO(me): Fill this in.
}

template <size_t N, typename ElemType>
ElemType KDTree<N, ElemType>::knn_value(const Point<N> &key, std::size_t k) const {
  // TODO(me): Fill this in.
  ElemType new_element;
  return new_element;
}

template <size_t N, typename ElemType>
std::vector<ElemType> KDTree<N, ElemType>::knn_query(const Point<N> &key,
                                                     std::size_t k) const {
  // TODO(me): Fill this in.
  std::vector<ElemType> values;
  return values;
}

// TODO(me): finish the implementation of the rest of the KDTree class

#endif  // SRC_KDTREE_HPP_
