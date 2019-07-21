//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaWebV3ButtonDelegate-Protocol.h"

@class NSString, NSTimer, SCOperaWebV3Button;
@protocol SCOperaWebV3ButtonOverlayDelegate;

@interface SCOperaWebV3ButtonOverlay : UIView <SCOperaWebV3ButtonDelegate>
{
    SCOperaWebV3Button *_backButton;
    SCOperaWebV3Button *_forwardButton;
    SCOperaWebV3Button *_shareButton;
    _Bool _shareable;
    _Bool _autofillPromptIsShowing;
    _Bool _isAnimatingNavButton;
    double _overlayYOffset;
    double _progress;
    NSTimer *_inactivityTimer;
    id <SCOperaWebV3ButtonOverlayDelegate> _delegate;
}

- (void).cxx_destruct;
- (double)_buttonCenterY;
- (void)_hideButtonsWithoutAnimation;
- (void)_inactivityTimePeriodReached;
- (void)_resetInactivityTimer;
@property(nonatomic) __weak id <SCOperaWebV3ButtonOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPressWebButton:(id)arg1 actionType:(long long)arg2;
- (void)hideButtons;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isLongPressingButton;
- (void)layoutSubviews;
- (void)reset;
- (void)setAutoFillPromptVisibility:(_Bool)arg1;
- (void)setShareable:(_Bool)arg1;
- (void)showButtons;
- (void)updateLoadingProgress:(double)arg1;
- (void)updateYOffset:(double)arg1 offsetPercentage:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
