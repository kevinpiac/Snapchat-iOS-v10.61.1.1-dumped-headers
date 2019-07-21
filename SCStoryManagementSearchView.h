//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCStoryManagementSearchTextField;
@protocol SCStoryManagementSearchViewDelegate;

@interface SCStoryManagementSearchView : UIView <UITextFieldDelegate>
{
    SCStoryManagementSearchTextField *_textField;
    UIView *_bottomSeparator;
    id <SCStoryManagementSearchViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapClearButton;
- (void)_textFieldDidChange;
@property(nonatomic) __weak id <SCStoryManagementSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissKeyboard;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetTextField;
- (void)setPlaceholderText:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
