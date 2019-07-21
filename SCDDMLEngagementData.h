//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface SCDDMLEngagementData : NSObject <NSCoding>
{
    long long _numSnapsSent;
    long long _numStickersSent;
    long long _numMessagesSent;
    long long _numSnapsReceived;
    long long _numStickersReceived;
    long long _numMessagesReceived;
    long long _numStoriesClicked;
    long long _numBitmojiClicked;
    NSDate *_lastUpdatedTimestamp;
}

- (void).cxx_destruct;
- (_Bool)_isOutdated:(id)arg1;
- (void)_reset;
- (void)encodeWithCoder:(id)arg1;
- (long long)hourIndex;
- (void)increment:(unsigned long long)arg1 count:(long long)arg2 timestamp:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastUpdatedTimestamp:(id)arg1;
- (void)setLastUpdatedTimeStamp:(id)arg1;
- (id)toDictionary;

@end

