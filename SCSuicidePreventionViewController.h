//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownSwipableViewController.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, SCGrowingButton, UILabel, UIView;

@interface SCSuicidePreventionViewController : SCDownSwipableViewController <TTTAttributedLabelDelegate>
{
    SCGrowingButton *_dismissButton;
    UILabel *_emojiLabel;
    UILabel *_greetingLabel;
    UILabel *_introductionLabel;
    NSString *_languageCode;
    NSString *_countryCode;
    UIView *_lowestView;
    UIView *_lowestButtonSpacerView;
}

- (void).cxx_destruct;
- (id)addButtonWithTitle:(id)arg1 belowView:(id)arg2 topMargin:(double)arg3 width:(double)arg4 height:(double)arg5 didTapButton:(SEL)arg6;
- (id)addLabelWithTitle:(id)arg1 font:(id)arg2 belowView:(id)arg3 topMargin:(double)arg4 width:(double)arg5;
- (id)addSpacerViewWithMaxHeight:(double)arg1 equalHeightView:(id)arg2 belowView:(id)arg3;
- (void)addSuicidePreventionResourceWithTitle:(id)arg1 desc:(id)arg2 screenSize:(struct CGSize)arg3 didTapButton:(SEL)arg4;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)callPhone:(id)arg1;
- (void)createInstructionAndButtons;
- (void)createInstructionOnly;
- (void)didTapAUButton1;
- (void)didTapAUButton2;
- (void)didTapAUButton3;
- (void)didTapAUButton4;
- (void)didTapCAButton1;
- (void)didTapCAButton2;
- (void)didTapCAButton3;
- (void)didTapUKButton1;
- (void)didTapUKButton2;
- (void)didTapUSButton1;
- (void)didTapUSButton2;
- (void)didTapUSButton3;
- (void)dismissSuicidePreventionView;
- (void)downSwipeSucceed;
- (void)openURL:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

