//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCMapModalInteractionController, UIPanGestureRecognizer;

@protocol SCMapModalInteractionControllerDelegate
- (void)mapModalInteractionController:(SCMapModalInteractionController *)arg1 getDismissalProgress:(double *)arg2 andProgressVelocity:(double *)arg3 fromGesture:(UIPanGestureRecognizer *)arg4;
- (void)mapModalInteractionController:(SCMapModalInteractionController *)arg1 setPresentationProgress:(double)arg2;
- (double)mapModalInteractionControllerTotalAnimationDistanceForDismissal:(SCMapModalInteractionController *)arg1;
@end

