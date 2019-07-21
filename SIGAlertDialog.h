//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SIGActionSheetTransitionDelegate-Protocol.h"

@class NSArray, NSString, SIGActionSheetTransition, SIGLabel, SIGTextField, UIImageView, UIView;
@protocol SIGAlertDialogDelegate;

@interface SIGAlertDialog : UIViewController <SIGActionSheetTransitionDelegate>
{
    SIGLabel *_titleLabel;
    SIGLabel *_dialogLabel;
    SIGTextField *_editTextField;
    UIImageView *_imageView;
    NSArray *_actionButtons;
    UIView *_contentView;
    UIView *_backgroundView;
    SIGActionSheetTransition *_transition;
    _Bool _editModeEnabled;
    id <SIGAlertDialogDelegate> _delegate;
}

+ (id)editableAlertWithTitle:(id)arg1 dialogText:(id)arg2 saveAction:(id)arg3 cancelAction:(id)arg4;
- (void).cxx_destruct;
- (void)_backgroundViewTapped:(id)arg1;
- (void)_dismissActionDialog;
- (void)_setActions:(id)arg1;
- (void)_setDialogText:(id)arg1;
- (void)_setEditModeEnabled:(_Bool)arg1;
- (void)_setImage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setupAutolayout;
- (void)actionSheetTransitionWillBeginWithView:(id)arg1;
@property(nonatomic) __weak id <SIGAlertDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDialogText:(id)arg1 actions:(id)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2 dialogText:(id)arg3 actions:(id)arg4;
- (id)initWithImage:(id)arg1 title:(id)arg2 dialogText:(id)arg3 editMode:(_Bool)arg4 actions:(id)arg5;
- (id)initWithTitle:(id)arg1 actions:(id)arg2;
- (id)initWithTitle:(id)arg1 dialogText:(id)arg2 actions:(id)arg3;
@property(copy, nonatomic) NSString *textEntered;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

