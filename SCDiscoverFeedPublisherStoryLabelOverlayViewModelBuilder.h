//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, SCDiscoverFeedPublisherStoryProgressBarViewModel, SCDiscoverFeedTileBadgeViewModel;

@interface SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder : NSObject
{
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    SCDiscoverFeedPublisherStoryProgressBarViewModel *_progressBarViewModel;
    SCDiscoverFeedTileBadgeViewModel *_tileBadge;
    long long _tileBadgePosition;
}

+ (id)discoverFeedPublisherStoryLabelOverlayViewModel;
+ (id)discoverFeedPublisherStoryLabelOverlayViewModelFromExistingDiscoverFeedPublisherStoryLabelOverlayViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withProgressBarViewModel:(id)arg1;
- (id)withSubtitle:(id)arg1;
- (id)withTileBadge:(id)arg1;
- (id)withTileBadgePosition:(long long)arg1;
- (id)withTitle:(id)arg1;

@end

