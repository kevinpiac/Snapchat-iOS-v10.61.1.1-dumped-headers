//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCImageProcessLensCommand, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate;

@protocol SCPreviewFeatureLensProcessing
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizerDelegate;
- (_Bool)isAnyLensTouchProcessingGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)isLensActive;
- (_Bool)lensHitAreaContainGesture:(UIGestureRecognizer *)arg1;
- (void)updateLensProcessingCommand:(SCImageProcessLensCommand *)arg1;
@end

