//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfileFriendRequestAccept : SCAUserTrackedEvent
{
    NSNumber *hasDisplayName;
    NSNumber *withDisplayPic;
    long long source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasDisplayName;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (_Bool)getWithDisplayPic;
- (id)init;
- (void)setHasDisplayName:(_Bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setWithDisplayPic:(_Bool)arg1;

@end

