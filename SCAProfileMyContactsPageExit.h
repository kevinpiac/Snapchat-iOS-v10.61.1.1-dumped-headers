//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfileMyContactsPageExit : SCAUserTrackedEvent
{
    NSNumber *contactFoundCount;
    NSNumber *contactFoundCountWithDisplayPic;
    NSNumber *nonSnapchatterCount;
    NSNumber *friendAddCount;
    NSNumber *friendAddCountWithDisplayPic;
    NSNumber *snapchatterAddInSearchCount;
    NSNumber *contactInviteCount;
    NSNumber *nonSnapchatterInviteInSearchCount;
    long long destination;
    long long destinationPage;
    long long verificationType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getContactFoundCount;
- (long long)getContactFoundCountWithDisplayPic;
- (long long)getContactInviteCount;
- (long long)getDestination;
- (long long)getDestinationPage;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendAddCount;
- (long long)getFriendAddCountWithDisplayPic;
- (long long)getNonSnapchatterCount;
- (long long)getNonSnapchatterInviteInSearchCount;
- (double)getPerUserSamplingRate;
- (long long)getSnapchatterAddInSearchCount;
- (long long)getVerificationType;
- (id)init;
- (void)setContactFoundCount:(long long)arg1;
- (void)setContactFoundCountWithDisplayPic:(long long)arg1;
- (void)setContactInviteCount:(long long)arg1;
- (void)setDestination:(long long)arg1;
- (void)setDestinationPage:(long long)arg1;
- (void)setFriendAddCount:(long long)arg1;
- (void)setFriendAddCountWithDisplayPic:(long long)arg1;
- (void)setNonSnapchatterCount:(long long)arg1;
- (void)setNonSnapchatterInviteInSearchCount:(long long)arg1;
- (void)setSnapchatterAddInSearchCount:(long long)arg1;
- (void)setVerificationType:(long long)arg1;

@end

