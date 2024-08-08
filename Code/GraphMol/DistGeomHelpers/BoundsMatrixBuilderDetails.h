#include <RDGeneral/export.h>

#include <GraphMol/ForceFieldHelpers/UFF/AtomTyper.h>
#include <GraphMol/ForceFieldHelpers/MMFF/AtomTyper.h>
#include <DistGeom/BoundsMatrix.h>

#include <utility>

namespace RDKit {
class ROMol;
namespace DGeomHelpers {
namespace Details {

std::pair<bool, UFF::AtomicParamVect> parametrizeMolUFF(const ROMol &mol);

std::pair<bool, MMFF::MMFFMolProperties> parametrizeMolMMFF(const ROMol &mol);

double calc12UFFBounds(const ROMol &mol, Bond *const bond,
                       UFF::AtomicParamVect params, unsigned int begId,
                       unsigned int endId);

double calc12MMFFBounds(const ROMol &mol, Bond *const bond,
                        MMFF::MMFFMolProperties params, unsigned int begId,
                        unsigned int endId);

}  // namespace Details
}  // namespace DGeomHelpers
}  // namespace RDKit
