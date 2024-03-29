//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAContextMenuBase.h"

@class NSString;

@interface SCAContextMenuAction : SCAContextMenuBase
{
    long long actionType;
    NSString *cardId;
    NSString *actionTypeString;
    NSString *notificationId;
    NSString *filterLensId;
    NSString *teamsnapId;
    NSString *inviteIdHash;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getActionType;
- (id)getActionTypeString;
- (id)getCardId;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (id)getInviteIdHash;
- (id)getNotificationId;
- (double)getPerUserSamplingRate;
- (id)getTeamsnapId;
- (id)init;
- (void)setActionType:(long long)arg1;
- (void)setActionTypeString:(id)arg1;
- (void)setCardId:(id)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setInviteIdHash:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setTeamsnapId:(id)arg1;

@end

