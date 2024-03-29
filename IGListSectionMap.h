//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray;

@interface IGListSectionMap : NSObject <NSCopying>
{
    NSMapTable *_objectToSectionControllerMap;
    NSMapTable *_sectionControllerToSectionMap;
    NSMutableArray *_mObjects;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescriptionLines;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithMapTable:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mObjects; // @synthesize mObjects=_mObjects;
- (id)objectForSection:(long long)arg1;
@property(readonly, nonatomic) NSMapTable *objectToSectionControllerMap; // @synthesize objectToSectionControllerMap=_objectToSectionControllerMap;
@property(readonly, nonatomic) NSArray *objects;
- (void)reset;
- (id)sectionControllerForObject:(id)arg1;
- (id)sectionControllerForSection:(long long)arg1;
@property(readonly, nonatomic) NSMapTable *sectionControllerToSectionMap; // @synthesize sectionControllerToSectionMap=_sectionControllerToSectionMap;
- (long long)sectionForObject:(id)arg1;
- (long long)sectionForSectionController:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)updateWithObjects:(id)arg1 sectionControllers:(id)arg2;

@end

