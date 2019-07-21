//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfilePageExit : SCAUserTrackedEvent
{
    NSNumber *newAddedMeCount;
    NSNumber *hasProfilePic;
    long long destination;
    long long destinationPage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDestination;
- (long long)getDestinationPage;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasProfilePic;
- (long long)getNewAddedMeCount;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setDestination:(long long)arg1;
- (void)setDestinationPage:(long long)arg1;
- (void)setHasProfilePic:(_Bool)arg1;
- (void)setNewAddedMeCount:(long long)arg1;

@end

