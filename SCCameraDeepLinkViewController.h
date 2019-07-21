//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCameraDeepLinkViewDelegate-Protocol.h"

@class NSString, SCCameraDeepLinkMetadata, SCUserSession;
@protocol SCCameraTooltipPriorityResolving, SCPreviewPresenter, SCUserTooltipProviding;

@interface SCCameraDeepLinkViewController : UIViewController <SCCameraDeepLinkViewDelegate>
{
    id <SCCameraTooltipPriorityResolving> _tooltipPriorityResolver;
    SCUserSession *_userSession;
    id <SCPreviewPresenter> _previewPresenter;
    id <SCUserTooltipProviding> _userTooltipProvider;
    SCCameraDeepLinkMetadata *_metadata;
}

- (void).cxx_destruct;
- (void)didTapClearButtonWithMetadata:(id)arg1;
- (void)hideTooltip;
- (void)loadView;
@property(retain, nonatomic) SCCameraDeepLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void)setMetadata:(id)arg1 userSession:(id)arg2;
- (void)setPreviewPresenter:(id)arg1;
- (void)setTooltipPriorityResolver:(id)arg1;
- (void)setUserTooltipProvider:(id)arg1;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

