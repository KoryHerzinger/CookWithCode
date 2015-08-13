#pragma once

#include <Common.hpp>

class Recipe
{
   public:
      Recipe (const char* name, const char* category, const char* author, const char* url);
      Recipe (std::string& name, std::string& category, std::string& author, std::string& url);
      virtual ~Recipe ();

   protected:
      std::string recipeName;
      std::string recipeCategory;
      std::string recipeAuthor;
      std::string recipeURL;
};
