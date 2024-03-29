//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCInviteFriendStateTracker, SCLazy;
@protocol SCActionHandling, SCImageDownloading, SCLegacyItemDownloading;

@interface SCAllContactsSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_nonSnapchattersDataFetcher;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_userInfoProvider;
    id <SCActionHandling> _actionHandler;
    double _displayTimestamp;
}

- (void).cxx_destruct;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 nonSnapchattersDataFetcher:(id)arg3 inviteFriendStateTracker:(id)arg4 imageDownloader:(id)arg5 labelInfoProvider:(id)arg6 userInfoProvider:(id)arg7 actionHandler:(id)arg8 displayTimestamp:(double)arg9;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

