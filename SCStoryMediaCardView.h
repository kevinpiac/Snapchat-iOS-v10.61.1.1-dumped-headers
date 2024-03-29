//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "SCChatMediaCardViewDelegate-Protocol.h"

@class NSString, SCBaseStoryMediaCardViewModel, SCChatMediaCardMediaView, UILabel, UIView, UIViewController;
@protocol SCChatCellGestureDelegate;

@interface SCStoryMediaCardView : SCBaseMediaCardView <SCChatMediaCardViewDelegate, SCActionMenuRenderableCellContentView>
{
    SCBaseStoryMediaCardViewModel *_viewModel;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    UIView *_titleContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCChatMediaCardMediaView *_storyThumbnailView;
}

- (void).cxx_destruct;
- (void)_initStoryThumbnailView;
- (void)_initSubtitleLabel;
- (void)_initTitleContainerView;
- (void)_initTitleLabel;
- (void)_renderPayload;
- (void)_setStoryThumbnail;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)didSetupMediaViewCompleteDisplay;
- (void)didSetupMediaViewIncompleteDisplay;
- (id)initWithParentVC:(id)arg1;
- (id)mediaThumbnailView;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
- (void)setViewModel:(id)arg1;
- (id)thumbnailViewForMediaId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

