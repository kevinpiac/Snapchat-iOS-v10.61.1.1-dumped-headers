//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCQueuePerformerIterator : NSObject
{
    NSMutableArray *_performerArray;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (void)addPerformer:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)init;
- (id)iterate;

@end

