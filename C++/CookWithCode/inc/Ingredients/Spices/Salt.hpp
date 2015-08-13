#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class Salt : public Ingredient
   {
      public:
         Salt (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~Salt ();
   };
}
