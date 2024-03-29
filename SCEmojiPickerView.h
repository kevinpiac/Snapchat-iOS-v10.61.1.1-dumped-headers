//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolBarPickerView.h"

@class NSString, SCEmojiPickerDropletView, SCEmojiPickerListView, SCShapeView, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol SCEmojiPickerViewDelegate;

@interface SCEmojiPickerView : SCPreviewToolBarPickerView
{
    SCShapeView *_backgroundShapeView;
    SCEmojiPickerListView *_emojiListView;
    SCEmojiPickerDropletView *_dropletView;
    struct CGSize _previousBoundsSize;
    struct CGPoint _beginPanLocation;
    _Bool _expanded;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    double _heightScale;
    id <SCEmojiPickerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_animatePath:(id)arg1;
- (void)_setAlphaForPickerAnimatableViews:(_Bool)arg1;
- (void)_setExpanded:(_Bool)arg1;
- (void)animateOnboarding;
- (void)animatePathDefault;
- (void)animatePathForLocation:(struct CGPoint)arg1;
- (void)animateViews:(long long)arg1;
- (double)containerHeight;
@property(nonatomic) __weak id <SCEmojiPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithEmojiList:(id)arg1 emojiExtendList:(id)arg2 needOnboardingAnimation:(_Bool)arg3;
- (id)initWithEmojiList:(id)arg1 emojiExtendList:(id)arg2 needOnboardingAnimation:(_Bool)arg3 viewMode:(long long)arg4;
- (void)layoutSubviews;
- (void)longPress:(id)arg1;
- (void)onPostAnimateForViews:(long long)arg1;
- (void)onPreAnimateForViews:(long long)arg1;
@property(readonly, nonatomic) NSString *selectedEmoji;
- (void)setDropletOriginY:(double)arg1 offsetX:(double)arg2;
- (_Bool)shouldExpandHeightWithGesture:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

