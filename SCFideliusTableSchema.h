//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCFideliusColumn;

@interface SCFideliusTableSchema : NSObject
{
    NSString *_tableName;
    SCFideliusColumn *_primaryKeyColumn;
    NSArray *_columns;
    NSArray *_columnNames;
}

- (void).cxx_destruct;
- (id)beginTransaction;
- (id)commitTransaction;
- (id)initWithName:(id)arg1 primaryKey:(id)arg2 columns:(id)arg3;
- (unsigned long long)numberOfColumns;
- (id)primaryKey;
- (id)primaryKeyWhereClause;
- (id)translateToBatchReplace:(unsigned long long)arg1;
- (id)translateToCreateIfNotExists;
- (id)translateToDeleteFormat;
- (id)translateToDropIfExists;
- (id)translateToInsert;
- (id)translateToReplace;
- (id)translateToSelectFormat;
- (id)translateToSelectFormatForColumn:(id)arg1;

@end

