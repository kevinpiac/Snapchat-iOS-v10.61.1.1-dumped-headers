//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaInterstitialLayerThumbnailViewProvider-Protocol.h"

@class SCDiscoverFeedStoryViewModel, SCUserSession;

@interface SCDiscoverFeedOperaInterstitialLayerThumbnailViewProvider : NSObject <SCOperaInterstitialLayerThumbnailViewProvider>
{
    SCDiscoverFeedStoryViewModel *_viewModel;
    SCUserSession *_userSession;
    unsigned long long _interstitialType;
}

- (void).cxx_destruct;
- (id)_defaultDiscoverFeedTilesViewModelToInterstitialLayerThumbnailViewModel:(id)arg1;
- (id)_makeViewModelForOperaInterstitialLayerThumbnail:(id)arg1 shouldEnableVideoThumbnail:(_Bool)arg2;
- (id)_ourStoryDynamicFeedTilesViewModelToInterstitialLayerThumbnailViewModel:(id)arg1;
- (id)_promotedStoryDynamicFeedTilesViewModelToInterstitialLayerThumbnailViewModel:(id)arg1;
- (id)_publicUserStoryDynamicFeedTilesViewModelToInterstitialLayerThumbnailViewModel:(id)arg1;
- (id)getThumbnailView;
- (id)initWithCheetahStory:(id)arg1 shouldEnableVideoThumbnail:(_Bool)arg2 interstitialType:(unsigned long long)arg3 userSession:(id)arg4;

@end

