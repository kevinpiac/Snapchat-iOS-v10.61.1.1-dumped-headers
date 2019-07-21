//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCPreviewSaveButton, SCPreviewTooltipBalloon, SCSentinel, UIView;

@interface SCPreviewSaveButtonController : NSObject
{
    SCPreviewSaveButton *_saveButton;
    UIView *_dimmingView;
    NSString *_savingTooltipText;
    NSString *_finishedTooltipText;
    SCPreviewTooltipBalloon *_savingTooltip;
    SCPreviewTooltipBalloon *_finishedTooltip;
    SCSentinel *_sentinel;
    _Bool _saved;
}

- (void).cxx_destruct;
- (void)_hideDimmingView;
- (void)_hideToolTipWithType:(unsigned long long)arg1 afterDelay:(double)arg2 animated:(_Bool)arg3 animationCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_reset;
- (void)_showDimmingView;
- (void)_showToolTipWithType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)didFinishSavingSucceeded:(_Bool)arg1 tooltipText:(id)arg2 token:(id)arg3 animationCompletionBlock:(CDUnknownBlockType)arg4;
- (id)didStartSavingWithTooltipText:(id)arg1;
- (id)initWithSaveButton:(id)arg1;
@property(nonatomic, getter=isSaved) _Bool saved; // @synthesize saved=_saved;
- (void)reset;

@end

