//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTParticipantState.h"

@class NSString, TCV3ParticipantState;

@interface SCTChatParticipantState : SCTParticipantState
{
    TCV3ParticipantState *_coreParticipantState;
    _Bool _present;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long callingState;
- (id)initWithCoreParticipantState:(id)arg1;
- (id)initWithCoreParticipantState:(id)arg1 username:(id)arg2 displayName:(id)arg3 presenceColor:(id)arg4 bitmojiAvatarId:(id)arg5;
@property(readonly, nonatomic) long long mediaIssue;
@property(readonly, nonatomic) _Bool present; // @synthesize present=_present;
@property(readonly, nonatomic) long long publishedMedia;
@property(readonly, nonatomic) long long typingState;
@property(readonly, nonatomic) _Bool videoFlowing;
@property(readonly, nonatomic) NSString *videoSinkId;

@end

