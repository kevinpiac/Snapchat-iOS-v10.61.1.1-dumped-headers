//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCQueueWithCapacity : NSObject
{
    NSMutableArray *_objects;
    unsigned long long _capacity;
    unsigned long long _front;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (id)allObjects;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
