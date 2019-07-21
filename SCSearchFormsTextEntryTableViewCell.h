//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol SCSearchFormsTextEntryTableViewCellDelegate;

@interface SCSearchFormsTextEntryTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    _Bool _isEditable;
    id <SCSearchFormsTextEntryTableViewCellDelegate> _delegate;
    NSString *_titleLabelText;
    NSString *_identifier;
    UITextField *_textField;
}

- (void).cxx_destruct;
- (void)_textFieldDidChange:(id)arg1;
- (void)_textFieldFinished:(id)arg1;
- (_Bool)becomeFirstResponder;
@property(nonatomic) __weak id <SCSearchFormsTextEntryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
@property(retain, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

