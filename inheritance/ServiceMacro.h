#pragma once
#ifndef SERVICE_MACRO_H
#define SERVICE_MACRO_H

#define GENERATE_ACCESSOR_FIELD(fieldType, fieldName, accessorName) \
    private: \
        fieldType fieldName; \
    public: \
        void set##accessorName(const fieldType& value) { fieldName = value; } \
        fieldType get##accessorName() const { return fieldName; }

#define GENERATE_ACCESSOR_GET_FIELD(fieldType, fieldName, accessorName) \
    private: \
        fieldType fieldName; \
    public: \
        fieldType get##accessorName() const { return fieldName; }


#endif // !SERVICE_MACRO_H
