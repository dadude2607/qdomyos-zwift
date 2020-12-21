////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2020 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.40Release
// Tag = production/akw/21.40.00-0-g813c158
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_FILE_ID_MESG_HPP)
#define FIT_FILE_ID_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class FileIdMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Type = 0;
       static const FIT_UINT8 Manufacturer = 1;
       static const FIT_UINT8 Product = 2;
       static const FIT_UINT8 SerialNumber = 3;
       static const FIT_UINT8 TimeCreated = 4;
       static const FIT_UINT8 Number = 5;
       static const FIT_UINT8 ProductName = 8;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    FileIdMesg(void) : Mesg(Profile::MESG_FILE_ID)
    {
    }

    FileIdMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTypeValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns type field
    ///////////////////////////////////////////////////////////////////////
    FIT_FILE GetType(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set type field
    ///////////////////////////////////////////////////////////////////////
    void SetType(FIT_FILE type)
    {
        SetFieldENUMValue(0, type, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of manufacturer field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsManufacturerValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns manufacturer field
    ///////////////////////////////////////////////////////////////////////
    FIT_MANUFACTURER GetManufacturer(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set manufacturer field
    ///////////////////////////////////////////////////////////////////////
    void SetManufacturer(FIT_MANUFACTURER manufacturer)
    {
        SetFieldUINT16Value(1, manufacturer, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of product field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsProductValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns product field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetProduct(void) const
    {
        return GetFieldUINT16Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set product field
    ///////////////////////////////////////////////////////////////////////
    void SetProduct(FIT_UINT16 product)
    {
        SetFieldUINT16Value(2, product, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of favero_product field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFaveroProductValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_FAVERO_PRODUCT ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_FAVERO_PRODUCT);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns favero_product field
    ///////////////////////////////////////////////////////////////////////
    FIT_FAVERO_PRODUCT GetFaveroProduct(void) const
    {
        return GetFieldUINT16Value(2, 0, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_FAVERO_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set favero_product field
    ///////////////////////////////////////////////////////////////////////
    void SetFaveroProduct(FIT_FAVERO_PRODUCT faveroProduct)
    {
        SetFieldUINT16Value(2, faveroProduct, 0, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_FAVERO_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of garmin_product field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGarminProductValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_GARMIN_PRODUCT ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns garmin_product field
    ///////////////////////////////////////////////////////////////////////
    FIT_GARMIN_PRODUCT GetGarminProduct(void) const
    {
        return GetFieldUINT16Value(2, 0, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set garmin_product field
    ///////////////////////////////////////////////////////////////////////
    void SetGarminProduct(FIT_GARMIN_PRODUCT garminProduct)
    {
        SetFieldUINT16Value(2, garminProduct, 0, (FIT_UINT16) Profile::FILE_ID_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of serial_number field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSerialNumberValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns serial_number field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32Z GetSerialNumber(void) const
    {
        return GetFieldUINT32ZValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set serial_number field
    ///////////////////////////////////////////////////////////////////////
    void SetSerialNumber(FIT_UINT32Z serialNumber)
    {
        SetFieldUINT32ZValue(3, serialNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of time_created field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimeCreatedValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns time_created field
    // Comment: Only set for files that are can be created/erased.
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimeCreated(void) const
    {
        return GetFieldUINT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set time_created field
    // Comment: Only set for files that are can be created/erased.
    ///////////////////////////////////////////////////////////////////////
    void SetTimeCreated(FIT_DATE_TIME timeCreated)
    {
        SetFieldUINT32Value(4, timeCreated, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of number field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsNumberValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number field
    // Comment: Only set for files that are not created/erased.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetNumber(void) const
    {
        return GetFieldUINT16Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set number field
    // Comment: Only set for files that are not created/erased.
    ///////////////////////////////////////////////////////////////////////
    void SetNumber(FIT_UINT16 number)
    {
        SetFieldUINT16Value(5, number, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of product_name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsProductNameValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns product_name field
    // Comment: Optional free form string to indicate the devices name or model
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetProductName(void) const
    {
        return GetFieldSTRINGValue(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set product_name field
    // Comment: Optional free form string to indicate the devices name or model
    ///////////////////////////////////////////////////////////////////////
    void SetProductName(FIT_WSTRING productName)
    {
        SetFieldSTRINGValue(8, productName, 0);
    }

};

} // namespace fit

#endif // !defined(FIT_FILE_ID_MESG_HPP)
