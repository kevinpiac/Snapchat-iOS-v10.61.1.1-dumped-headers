//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCDiscoverFeedMomentStoryActionHandler, SCDiscoverFeedSectionKey, SCMomentsOperaPresenter, SCOperaPlaylistFeaturePlugin, SCOperaPresenter;
@protocol SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera;

@protocol SCDiscoverFeedMomentStoryActionHandlerDelegate
- (SCOperaPlaylistFeaturePlugin<SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera> *)momentStoryHandler:(SCDiscoverFeedMomentStoryActionHandler *)arg1 willPresentMomentsStoryWithOperaPresenter:(SCMomentsOperaPresenter *)arg2 sectionKey:(SCDiscoverFeedSectionKey *)arg3;
- (void)momentStoryHandler:(SCDiscoverFeedMomentStoryActionHandler *)arg1 willPresentStoryWithOperaPresenter:(SCOperaPresenter *)arg2;
@end

