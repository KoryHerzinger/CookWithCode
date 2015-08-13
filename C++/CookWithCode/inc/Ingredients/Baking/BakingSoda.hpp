#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class BakingSoda : public Ingredient
   {
      public:
         BakingSoda (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~BakingSoda ();
   };
}
