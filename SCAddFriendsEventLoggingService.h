//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCAddFriendsEventLoggingService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (id)initWithSessionRequestManager:(id)arg1;
- (void)sendSeenEventRequestForSuggestedSnapchatters:(id)arg1 addedSuggestedSnapchatters:(id)arg2 seenAddedMeSnapchatters:(id)arg3 addedAddedMeSnapchatters:(id)arg4 placement:(id)arg5 impressionId:(id)arg6 impressionTimeMs:(id)arg7;

@end

