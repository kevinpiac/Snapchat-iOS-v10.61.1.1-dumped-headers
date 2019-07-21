//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIDynamicAnimator, UITextField;
@protocol SCGalleryPassphraseViewDelegate;

@interface SCGalleryPassphraseView : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    _Bool _resetting;
    UIDynamicAnimator *_animator;
    id <SCGalleryPassphraseViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_textFieldDidChange;
@property(nonatomic) __weak id <SCGalleryPassphraseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isEditingPassphrase;
- (id)passphrase;
- (void)reset;
- (void)resetForFailedPassphrase;
- (void)setDoneKeyEnabled:(_Bool)arg1;
- (void)setPassphraseHidden:(_Bool)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)startEditingPassphrase;
- (void)stopEditingPassphrase;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

