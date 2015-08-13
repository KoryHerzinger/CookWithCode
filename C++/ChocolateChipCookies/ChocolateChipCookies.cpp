#include <CookWithCode.hpp>

class ChocolateChipCookies : public Recipe
{
   private:
      Equipment::Oven oven;
      Equipment::StandMixer stand_mixer;

   protected:
      Ingredients::Butter softened_butter {1.0f, Units::Volume::CUP};
      Ingredients::GranulatedSugar white_sugar {1.0f, Units::Volume::CUP};
      Ingredients::BrownSugar packed_brown_sugar {1.0f, Units::Volume::CUP};
      std::vector<Ingredients::Egg> eggs {
         Ingredients::Egg (),
         Ingredients::Egg ()
      };
      Ingredients::VanillaExtract vanilla {2.0f, Units::Volume::TEASPOON};
      Ingredients::BakingSoda baking_soda {1.0f, Units::Volume::TEASPOON};
      Ingredients::Salt salt {0.5f, Units::Volume::TEASPOON};
      std::vector<Ingredients::Flour> flour {
         Ingredients::Flour (1.0f, Units::Volume::CUP),
         Ingredients::Flour (1.0f, Units::Volume::CUP),
         Ingredients::Flour (1.0f, Units::Volume::CUP)
      };
      Ingredients::ChocolateChips chocolate_chips {2.0f, Units::Volume::CUP};
      Ingredients::Walnuts chopped_walnuts {1.0f, Units::Volume::CUP};

   public:
      ChocolateChipCookies () {}
      ~ChocolateChipCookies () {}

      void prepareRecipe (void)
      {
         // Preheat the oven to 375 degrees
         oven.preheat (375.0, Units::Temperature::FAHRENHEIT);
      }

      void mixDough (void)
      {
         // Add one cup of softened butter to the stand mixer
         stand_mixer.addIngredient (softened_butter);

         // Add one cup white sugar and one cup packed brown sugar to the stand mixer
         stand_mixer.addIngredient (white_sugar);
         stand_mixer.addIngredient (packed_brown_sugar);

         // Cream ingredients until smooth
         stand_mixer.start (Equipment::StandMixer::MEDIUM_LOW_SPEED);
         while (!stand_mixer.ingredients.smooth ()) {
         }

         // Beat in two eggs one at a time
         std::for_each (eggs.begin (), eggs.end (), [&] (Ingredients::Egg &egg) {
            stand_mixer.addIngredient (egg);
         });

         // Mix in the vanilla, baking soda and salt
         stand_mixer.addIngredient (vanilla);
         stand_mixer.addIngredient (baking_soda);
         stand_mixer.addIngredient (salt);

         // Slowly add three cups of flour
         std::for_each (flour.begin (), flour.end (), [&] (Ingredients::Flour &one_cup_flour) {
            stand_mixer.addIngredient (one_cup_flour);
         });

         // Mix in the chocolate chips and walnuts
         stand_mixer.addIngredient (chocolate_chips);
         stand_mixer.addIngredient (chopped_walnuts);
      }

      void bakeCookies (void)
      {
         // TODO
      }
};

int main (int argc, char *argv [])
{
   ChocolateChipCookies cookies;

   cookies.prepareRecipe ();
   cookies.mixDough ();
   cookies.bakeCookies ();

   return EXIT_SUCCESS;
}
