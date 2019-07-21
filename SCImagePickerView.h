//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolBarPickerView.h"

@class SCImagePickerDropletView, SCImagePickerListView, SCShapeView, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol SCImagePickerViewDelegate;

@interface SCImagePickerView : SCPreviewToolBarPickerView
{
    SCShapeView *_backgroundShapeView;
    SCImagePickerListView *_imageListView;
    SCImagePickerDropletView *_dropletView;
    struct CGSize _previousBoundsSize;
    struct CGPoint _beginPanLocation;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    id <SCImagePickerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_animatePath:(id)arg1;
- (void)_setAlphaForPickerAnimatableViews:(_Bool)arg1;
- (void)animateOnboarding;
- (void)animatePathDefault;
- (void)animateViews:(long long)arg1;
- (struct CGSize)containerSize;
@property(nonatomic) __weak id <SCImagePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithImageCount:(unsigned long long)arg1 needOnboardingAnimation:(_Bool)arg2 compactButton:(id)arg3;
- (_Bool)isComplete;
- (void)layoutSubviews;
- (void)longPress:(id)arg1;
- (void)onPostAnimateForViews:(long long)arg1;
- (void)onPreAnimateForViews:(long long)arg1;
- (void)setDropletOriginY:(double)arg1 offsetX:(double)arg2;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithImage:(id)arg1 forIndex:(unsigned long long)arg2;

@end
