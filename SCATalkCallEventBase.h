//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCATalkCallEventBase : SCAUserTrackedEvent
{
    NSNumber *groupParticipantCount;
    NSNumber *durationSec;
    NSNumber *mediaToggleCount;
    NSNumber *withCallKit;
    NSNumber *withCallKitDisableDueToNotLocationAuthorisation;
    NSNumber *withGroup;
    NSNumber *cellViewPosition;
    long long mediaType;
    long long chatSource;
    long long friendshipStatus;
    long long correspondentType;
    NSString *subpageName;
    NSString *callUuid;
    NSString *correspondentId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
    NSString *ghost_correspondent_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCallUuid;
- (long long)getCellViewPosition;
- (long long)getChatSource;
- (id)getCorrespondentId;
- (long long)getCorrespondentType;
- (double)getDurationSec;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendshipStatus;
- (id)getGhost_correspondent_id;
- (long long)getGroupParticipantCount;
- (long long)getMediaToggleCount;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getRankingId;
- (id)getRankingModelId;
- (id)getServerRankingId;
- (id)getSubpageName;
- (_Bool)getWithCallKit;
- (_Bool)getWithCallKitDisableDueToNotLocationAuthorisation;
- (_Bool)getWithGroup;
- (id)init;
- (void)setCallUuid:(id)arg1;
- (void)setCellViewPosition:(long long)arg1;
- (void)setChatSource:(long long)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setCorrespondentType:(long long)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setGroupParticipantCount:(long long)arg1;
- (void)setMediaToggleCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setWithCallKit:(_Bool)arg1;
- (void)setWithCallKitDisableDueToNotLocationAuthorisation:(_Bool)arg1;
- (void)setWithGroup:(_Bool)arg1;

@end
