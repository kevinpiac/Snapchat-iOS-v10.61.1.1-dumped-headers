//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCGalleryCellTransitioning-Protocol.h"
#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"
#import "SCGalleryViewCellSelecting-Protocol.h"
#import "SCGalleryViewCellUpdating-Protocol.h"

@class NSString, SCGalleryDebugSyncStatusChecker, SCGalleryDebugSyncStatusView, SCGalleryEntrySyncStatusGenerator, SCGalleryStoryViewModel, SCLoadingIndicatorView, SCMemoriesStatusIcon, SCUserSession, UIImage, UIImageView, UIView;
@protocol SCCachingMediaRequest, SCCanceling, SCGallerySnap;

@interface SCGalleryBaseStorySnapCell : UICollectionViewCell <SCGalleryCellTransitioning, SCGalleryViewCellUpdating, SCGalleryViewCellSelecting, SCGalleryEntrySyncStatusGeneratorDelegate>
{
    id <SCCachingMediaRequest> _mediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    UIImage *_miniThumbnail;
    UIImageView *_selectedOverlayView;
    SCLoadingIndicatorView *_loadingIndicator;
    CDUnknownBlockType _miniThumbnailBlock;
    _Bool _isSnapClientCompatible;
    SCMemoriesStatusIcon *_incompatibleIcon;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    SCGalleryDebugSyncStatusView *_debugSyncStatusView;
    _Bool _isActionMenu;
    UIImageView *_imageView;
    SCGalleryStoryViewModel *_storyViewModel;
    id <SCGallerySnap> _snap;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    UIView *_containerView;
    SCUserSession *_userSession;
    CDStruct_bac8f6e9 _mediaScenePath;
}

- (void).cxx_destruct;
- (void)_addIncompatibleIcon;
- (void)_cancelMiniThumbnailBlock;
- (void)_didFetchImage:(id)arg1;
- (void)_requestImage:(id)arg1;
- (void)_requestThumbnail:(id)arg1;
- (void)_shouldShowLoadingIndicator:(_Bool)arg1;
- (void)_startLoading;
- (void)_stopLoading;
- (void)_updateLoadingIndicator:(_Bool)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (void)animateTap:(_Bool)arg1;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)interactionMode;
@property(nonatomic) _Bool isActionMenu; // @synthesize isActionMenu=_isActionMenu;
- (_Bool)isTransferring;
@property(readonly, nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_mediaScenePath;
- (void)prepareForReuse;
- (void)setSelectMode:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 debugSyncStatusChecker:(id)arg6;
@property(retain, nonatomic) SCGalleryEntrySyncStatusGenerator *syncStatusGenerator; // @synthesize syncStatusGenerator=_syncStatusGenerator;
- (void)setTransitioningInitialImage:(id)arg1;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
- (id)sourceViewForOpera;
- (void)startGeneratingUpdates;
- (void)stopGeneratingUpdates;
@property(readonly, nonatomic) __weak SCGalleryStoryViewModel *storyViewModel; // @synthesize storyViewModel=_storyViewModel;
- (void)toggleDebugSyncStatusView;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)updateIcon;
- (void)updateSnap:(id)arg1;
- (void)updateUI;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

