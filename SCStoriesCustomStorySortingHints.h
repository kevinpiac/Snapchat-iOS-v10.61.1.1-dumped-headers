//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoriesCustomStorySortingHints : NSObject <NSCopying>
{
    _Bool _isFirstDegreeFriend;
    double _mostRecentPostTimestamp;
    double _myMostRecentPostTimestamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithIsFirstDegreeFriend:(_Bool)arg1 mostRecentPostTimestamp:(double)arg2 myMostRecentPostTimestamp:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFirstDegreeFriend; // @synthesize isFirstDegreeFriend=_isFirstDegreeFriend;
@property(readonly, nonatomic) double mostRecentPostTimestamp; // @synthesize mostRecentPostTimestamp=_mostRecentPostTimestamp;
@property(readonly, nonatomic) double myMostRecentPostTimestamp; // @synthesize myMostRecentPostTimestamp=_myMostRecentPostTimestamp;

@end

