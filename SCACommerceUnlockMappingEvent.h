//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCACommerceActionEventBase.h"

@class NSString;

@interface SCACommerceUnlockMappingEvent : SCACommerceActionEventBase
{
    long long unlockPage;
    long long unlockableType;
    NSString *unlockableId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getUnlockPage;
- (id)getUnlockableId;
- (long long)getUnlockableType;
- (id)init;
- (void)setUnlockPage:(long long)arg1;
- (void)setUnlockableId:(id)arg1;
- (void)setUnlockableType:(long long)arg1;

@end
