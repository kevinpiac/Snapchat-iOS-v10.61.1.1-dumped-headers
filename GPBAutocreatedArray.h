//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@class GPBMessage;

@interface GPBAutocreatedArray : NSMutableArray
{
    GPBMessage *_autocreator;
    NSMutableArray *_array;
}

- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end

