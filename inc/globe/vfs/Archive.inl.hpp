//***************************************************************************
//
// Author     : Jean-Charles Lefebvre
// Created On : 2011-11-03 14:43:15
//
// $Id$
//
//***************************************************************************


//---------------------------------------------------------------------------
inline bool Archive::isOpen (void) const
{
  return m_Arch.isOpen();
}

//---------------------------------------------------------------------------
inline const Archive::Entries& Archive::getEntriesList (void) const
{
  return m_Entries;
}
