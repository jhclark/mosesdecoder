
#pragma once

#include <list>
#include "LanguageModel.h"

class Phrase;
class ScoreColl;

class LMList : public std::list < LanguageModel* >	
{
public:
	void SetScore(const Phrase &phrase, float &retFullScore, float &retNGramScore, ScoreColl *ngramComponent) const;

};
