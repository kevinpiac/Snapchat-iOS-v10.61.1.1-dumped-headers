//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaLayerViewControllerShareableMediaSource-Protocol.h"
#import "SCOperaPageableViewControllerDelegate-Protocol.h"
#import "SCOperaRemoteVideoControllerDelegate-Protocol.h"

@class NSString, SCCustomVolumeController, SCOperaRemoteVideoLayerView, SCOperaRemoteVideoViewProvider;

@interface SCOperaRemoteVideoLayerViewController : SCOperaLayerViewController <SCOperaPageableViewControllerDelegate, SCOperaRemoteVideoControllerDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaLayerViewControllerShareableMediaSource>
{
    SCOperaRemoteVideoLayerView *_layerView;
    SCOperaRemoteVideoViewProvider *_remoteVideoViewController;
    SCCustomVolumeController *_customVolumeController;
    _Bool _silentlyPresentingViewController;
    _Bool _showActionMenuButtonEnabled;
}

- (void).cxx_destruct;
- (id)currentViewParameters;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 customVolumeController:(id)arg4;
- (_Bool)isOverlay;
- (void)loadVideo;
- (void)loadView;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (_Bool)pageIsFullyVisible:(id)arg1;
- (_Bool)pageIsPartiallyVisible:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)pause;
- (unsigned long long)relativePositionForPageId:(id)arg1;
- (void)remoteVideoViewControllerDidDisappear:(_Bool)arg1;
- (void)remoteVideoViewControllerDidFinishPlaying;
- (void)remoteVideoViewControllerDidPressExitButton;
- (void)remoteVideoViewControllerDidPressShowActionMenuButton;
- (void)remoteVideoViewControllerDidRotateToLandscape:(_Bool)arg1;
- (void)remoteVideoViewControllerWasPresented;
- (void)resume;
- (void)rotateBasedOnOrientation;
- (void)setImageForBackdrop:(id)arg1;
- (void)setVolume:(double)arg1;
- (id)shareableMedia;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
