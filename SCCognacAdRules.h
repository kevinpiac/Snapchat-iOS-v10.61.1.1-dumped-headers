//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCCognacAdRules : NSObject <NSCopying>
{
    double _capInterval;
    unsigned long long _rateLimitCount;
    double _rateLimitDuration;
}

@property(readonly, nonatomic) double capInterval; // @synthesize capInterval=_capInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithCapInterval:(double)arg1 rateLimitCount:(unsigned long long)arg2 rateLimitDuration:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long rateLimitCount; // @synthesize rateLimitCount=_rateLimitCount;
@property(readonly, nonatomic) double rateLimitDuration; // @synthesize rateLimitDuration=_rateLimitDuration;

@end

