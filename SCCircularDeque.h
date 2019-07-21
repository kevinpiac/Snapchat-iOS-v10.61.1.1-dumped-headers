//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface SCCircularDeque : NSObject <NSFastEnumeration>
{
    NSMutableArray *_array;
    unsigned long long _start;
    unsigned long long _mutationCounter;
    unsigned long long _capacity;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (id)_objectAtIndex:(unsigned long long)arg1;
- (id)back;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)front;
- (id)initWithCapacity:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (id)popFront;
- (void)pushBack:(id)arg1;
- (void)removeAllObjects;

@end

