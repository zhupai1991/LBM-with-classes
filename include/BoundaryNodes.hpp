#ifndef BOUNDARY_NODES_HPP_
#define BOUNDARY_NODES_HPP_
#include "LatticeModel.hpp"

class BoundaryNodes {
 public:
  BoundaryNodes(bool is_prestream
    , LatticeModel &lm);

  virtual ~BoundaryNodes() = default;

  virtual void UpdateNodes(std::vector<std::vector<double>> &df) = 0;

  bool prestream;

 protected:
  enum Directions {
    E = 1,
    N,
    W,
    S,
    NE,
    NW,
    SW,
    SE
  };

  LatticeModel &lm_;

  std::vector<std::size_t> coordinates_;
};
#endif // BOUNDARY_NODES_HPP_