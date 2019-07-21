//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLabeledGrowingButton.h"

@class NSTimer, SCLoadingIndicatorView, SCPreviewSaveCountView, SCSunburstView, UIImageView;

@interface SCPreviewSaveButton : SCLabeledGrowingButton
{
    UIImageView *_saveImageView;
    SCLoadingIndicatorView *_savingIndicatorView;
    SCSunburstView *_sunburstView;
    UIImageView *_successImageView;
    UIImageView *_savedImageView;
    NSTimer *_savingIndicatorTimer;
    NSTimer *_sunburstTimer;
    SCPreviewSaveCountView *_saveCountView;
}

- (void).cxx_destruct;
- (void)_savingIndicatorTimerDidFire:(id)arg1;
- (void)_sunburstTimerDidFire:(id)arg1;
- (void)hideSaveCount;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reset;
- (void)showSaveCount:(long long)arg1;
- (void)startAnimationForSaving;
- (void)startAnimationForSuccess;

@end

