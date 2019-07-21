//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedCollectionViewCell.h"

@class SCBaseMediaThumbnailViewModel, SCUserSession, UIView;
@protocol SCChatSingleMediaThumbnailView;

@interface SCStackedChatMediaCollectionViewCell : SCStackedCollectionViewCell
{
    UIView<SCChatSingleMediaThumbnailView> *_mediaThumbnailView;
    SCUserSession *_userSession;
    SCBaseMediaThumbnailViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_initLagunaViewWithParentVC:(id)arg1;
- (void)_initMediaViewWithParentVC:(id)arg1;
- (id)mediaThumbnailView;
- (void)setViewModel:(id)arg1 userSession:(id)arg2 parentVC:(id)arg3;
- (void)startAnimation;
- (void)stopAnimation;

@end

