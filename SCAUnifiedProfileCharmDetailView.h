//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUnifiedProfileBaseCharmEvent.h"

@class NSNumber;

@interface SCAUnifiedProfileCharmDetailView : SCAUnifiedProfileBaseCharmEvent
{
    NSNumber *isNew;
    NSNumber *pos;
    NSNumber *maxPos;
    NSNumber *viewTimeMillis;
    long long source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsNew;
- (long long)getMaxPos;
- (double)getPerUserSamplingRate;
- (long long)getPos;
- (long long)getSource;
- (long long)getViewTimeMillis;
- (id)init;
- (void)setIsNew:(_Bool)arg1;
- (void)setMaxPos:(long long)arg1;
- (void)setPos:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setViewTimeMillis:(long long)arg1;

@end

