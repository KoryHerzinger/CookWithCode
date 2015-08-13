#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class Butter : public Ingredient
   {
      public:
         Butter (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~Butter ();
   };
}
