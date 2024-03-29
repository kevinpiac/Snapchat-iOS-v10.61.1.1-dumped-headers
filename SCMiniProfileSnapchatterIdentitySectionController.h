//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

@class SCMiniProfileRowController;

@interface SCMiniProfileSnapchatterIdentitySectionController : SCMiniProfileSectionController
{
    _Bool _showMore;
    SCMiniProfileRowController *_rowController;
}

- (void).cxx_destruct;
- (double)extraBottomInsetSpacing;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 userInfoProvider:(id)arg4 friendScoreProvider:(id)arg5 addSource:(long long)arg6 userSession:(id)arg7 storiesDataAccess:(id)arg8 storiesPlaybackDataProvider:(id)arg9 storiesMediaCoordinator:(id)arg10 replyDelegate:(id)arg11 startChatDelegate:(id)arg12 navigationDelegate:(id)arg13 presentingViewController:(id)arg14;
- (id)initWithTempSnapchatter:(id)arg1 tempSnapchatterDataCoordinator:(id)arg2 userInfoProvider:(id)arg3 addSource:(long long)arg4 userSession:(id)arg5;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;
- (void)setShowsMore:(_Bool)arg1 animated:(_Bool)arg2;

@end

