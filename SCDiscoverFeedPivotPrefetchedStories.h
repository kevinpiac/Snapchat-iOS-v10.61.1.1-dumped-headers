//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedPivotPrefetchedStories : NSObject <NSCopying>
{
    int _feedType;
    int _numStories;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int feedType; // @synthesize feedType=_feedType;
- (unsigned long long)hash;
- (id)initWithFeedType:(int)arg1 numStories:(int)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int numStories; // @synthesize numStories=_numStories;

@end

