//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCCameraDeepLinkMetadata, SCUserSession;
@protocol SCCameraTooltipPriorityResolving, SCPreviewPresenter, SCUserTooltipProviding;

@protocol SCFeatureSnapKit
- (SCCameraDeepLinkMetadata *)metadata;
- (void)reset;
- (void)setDeepLinkMetadata:(SCCameraDeepLinkMetadata *)arg1 userSession:(SCUserSession *)arg2;
- (void)setPreviewPresenter:(id <SCPreviewPresenter>)arg1;
- (void)setTooltipPriorityResolver:(id <SCCameraTooltipPriorityResolving>)arg1;
- (void)setUserTooltipProvider:(id <SCUserTooltipProviding>)arg1;
@end

