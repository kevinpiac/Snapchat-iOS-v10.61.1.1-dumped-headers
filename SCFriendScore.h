//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendScore-Protocol.h"

@class NSNumber, NSString;

@interface SCFriendScore : NSObject <SCFriendScore>
{
    NSNumber *_score;
    long long _lastFetchedTimestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(id)arg1 lastFetchedTimestamp:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long lastFetchedTimestamp; // @synthesize lastFetchedTimestamp=_lastFetchedTimestamp;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

