#pragma once

#include <Ingredients/Ingredient.hpp>

namespace Ingredients
{
   class Walnuts : public Ingredient
   {
      public:
         Walnuts (double quantity, Units::Volume::UnitOfVolume unit);
         virtual ~Walnuts ();
   };
}
