/*
	SPDX-FileCopyrightText: 2013 Graeme Gott <graeme@gottcode.org>

	SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef FOCUSWRITER_DICTIONARY_PROVIDER_HUNSPELL_H
#define FOCUSWRITER_DICTIONARY_PROVIDER_HUNSPELL_H

#include "abstract_dictionary_provider.h"

class DictionaryProviderHunspell : public AbstractDictionaryProvider
{
public:
	DictionaryProviderHunspell();

	bool isValid() const override
	{
		return true;
	}

	QStringList availableDictionaries() const override;
	AbstractDictionary* requestDictionary(const QString& language) const override;

	void setIgnoreNumbers(bool ignore) override;
	void setIgnoreUppercase(bool ignore) override;
};

#endif // FOCUSWRITER_DICTIONARY_PROVIDER_HUNSPELL_H
