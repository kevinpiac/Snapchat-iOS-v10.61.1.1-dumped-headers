//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate;

@interface SCFriendsFeedStreakInfo : NSObject <NSCopying>
{
    long long _streakCount;
    NSDate *_expirationTimestamp;
    double _expirationWarningInSec;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDate *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, nonatomic) double expirationWarningInSec; // @synthesize expirationWarningInSec=_expirationWarningInSec;
- (unsigned long long)hash;
- (id)initWithStreakCount:(long long)arg1 expirationTimestamp:(id)arg2 expirationWarningInSec:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;

@end

