//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMyFriendsPresenting-Protocol.h"

@class NSString, SCLazy;
@protocol SCImageDownloading, SCLegacyItemDownloading, SCMyFriendsActionHandlerCreating;

@interface SCMyFriendsPresenter : NSObject <SCMyFriendsPresenting>
{
    SCLazy *_snapchatterDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_friendmojiPresenter;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    id <SCMyFriendsActionHandlerCreating> _actionHandlerCreator;
    id <SCImageDownloading> _imageDownloader;
    NSString *_myUserId;
    _Bool _shouldDisplayStreakCounter;
}

- (void).cxx_destruct;
- (id)_myfriendsSectionCreatorWithPresentingViewController:(id)arg1 navigationDelegate:(id)arg2;
- (void)_presentLegacyMyFriendsWithPresentingViewController:(id)arg1 navigationDelegate:(id)arg2;
- (void)_presentSIGMyFriendsWithPresentingViewController:(id)arg1 navigationDelegate:(id)arg2;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 friendmojiPresenter:(id)arg3 labelInfoProvider:(id)arg4 actionHandlerCreator:(id)arg5 imageDownloader:(id)arg6 myUserId:(id)arg7 shouldDisplayStreakCounter:(_Bool)arg8;
- (void)presentMyFriendsWithPresentingViewController:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

