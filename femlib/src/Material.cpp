#include "Material.hpp"

Material::Material():density(1){}

Material::~Material(){}

Eigen::MatrixXd
Material::getStiffness(int eidx, ElementMesh * mesh)
{
  return Eigen::MatrixXd(1,1);
}

Eigen::MatrixXd
Material::getMassMatrix(int eidx, ElementMesh * mesh)
{
  return Eigen::MatrixXd(1,1);
}
