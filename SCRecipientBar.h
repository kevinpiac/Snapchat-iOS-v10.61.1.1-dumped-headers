//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCRecipientTextFieldDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CALayer, NSMutableArray, NSMutableDictionary, NSString, SCRecipientTextField, SCSnapchatter, UILabel, UIScrollView;
@protocol SCRecipientBarDelegate;

@interface SCRecipientBar : UIView <UITextFieldDelegate, SCRecipientTextFieldDelegate>
{
    unsigned long long _state;
    unsigned long long _creationType;
    int _selectedIndex;
    NSString *_currentSuggestion;
    SCSnapchatter *_currentFriendSuggestion;
    NSString *_currentText;
    _Bool _keyboadShowing;
    NSMutableArray *_recipientPills;
    NSMutableDictionary *_userIdsToRecipients;
    int _toLabelWidth;
    int _previousHeight;
    UILabel *_toLabel;
    SCRecipientTextField *_textField;
    UIScrollView *_scrollView;
    UIView *_containerView;
    CALayer *_bottomBorder;
    _Bool _v11ThemeEnabled;
    long long _toLabelHeight;
    _Bool _needsRecipientLayout;
    int _windowWidth;
    id <SCRecipientBarDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_addPill:(id)arg1;
- (void)_applyState:(unsigned long long)arg1;
- (_Bool)_attemptAddPill:(id)arg1;
- (_Bool)_attemptRemovePill:(id)arg1;
- (struct CGRect)_calculateFrameForRecipient:(id)arg1 recipientState:(unsigned long long)arg2 previousFrame:(struct CGRect)arg3 lines:(int *)arg4;
- (double)_calculateHeightForLines:(long long)arg1;
- (id)_calculateRecipientFramesForState:(unsigned long long)arg1 lines:(int *)arg2;
- (void)_deselectAllPills;
- (_Bool)_recipientExists:(id)arg1;
- (unsigned long long)_recipientPillStateForState:(unsigned long long)arg1;
- (void)_removePill:(id)arg1;
- (void)_removePillByUserId:(id)arg1;
- (void)_resetCursorPosition;
- (void)_scrollToBottom;
- (void)_selectPill:(id)arg1;
- (void)_setUserText:(id)arg1 suggestion:(id)arg2;
- (id)_setUserTextAndSuggest:(id)arg1;
- (_Bool)_shouldShowCursorForState:(unsigned long long)arg1;
- (void)_updateReturnOrDoneButton;
- (void)_updateTextFieldPlaceholderIfNecessary;
- (void)addRecipient:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)clearRecipients;
- (id)currentFilterText;
@property(readonly, nonatomic) SCSnapchatter *currentFriendSuggestion;
@property(nonatomic) __weak id <SCRecipientBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPressDeleteWithEmptyString;
- (void)didRecognizeTapGesture:(id)arg1;
- (void)didTapPill:(id)arg1;
- (void)initBottomBorder;
- (void)initGestureAndKeyboard;
- (void)initScrollView;
- (void)initTextField;
- (void)initToLabel;
- (id)initWithCreationType:(unsigned long long)arg1 v11ThemeEnabled:(_Bool)arg2;
- (_Bool)isFirstResponder;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutForV11NewChatTransition:(_Bool)arg1;
- (void)layoutSubviews;
- (void)removeRecipient:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)setNeedsRecipientLayout;
- (void)setTintColor:(id)arg1;
- (_Bool)shouldGestureRecognizerBeginOnTextField:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

