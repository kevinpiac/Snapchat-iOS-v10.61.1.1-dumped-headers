//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCDiscoverFeedSingleScrollTracker : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _scrollAxis;
    double _startingContentOffset;
    NSDate *_startScrollingTimestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 scrollAxis:(long long)arg2 startingContentOffset:(double)arg3 startScrollingTimestamp:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(readonly, copy, nonatomic) NSDate *startScrollingTimestamp; // @synthesize startScrollingTimestamp=_startScrollingTimestamp;
@property(readonly, nonatomic) double startingContentOffset; // @synthesize startingContentOffset=_startingContentOffset;

@end

