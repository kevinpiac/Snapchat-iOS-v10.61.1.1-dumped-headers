//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatInputExpandItemControllerDelegate-Protocol.h"
#import "SCChatInputSendItemControllerDelegate-Protocol.h"
#import "SCChatInputTextViewPasteDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SCChatInputBar, SCChatInputItem, SCChatInputItemDrawerCoordinator, SCChatInputTextView, SCChatInputTextViewListenerAnnouncer, SCChatInputView;
@protocol SCChatInputDrawerRenderable, SCChatInputViewControllerDelegate, SCChatInputViewControllerLogging;

@interface SCChatInputViewController : UIViewController <SCTraceEnabled, UITextViewDelegate, SCChatInputSendItemControllerDelegate, SCChatInputTextViewPasteDelegate, SCChatInputExpandItemControllerDelegate>
{
    SCChatInputTextViewListenerAnnouncer *_announcer;
    SCChatInputView *_inputView;
    _Bool _shouldReenableKeyboard;
    SCChatInputItem *_expandItem;
    id <SCChatInputViewControllerDelegate> _delegate;
    unsigned long long _style;
    id <SCChatInputViewControllerLogging> _logger;
    SCChatInputItemDrawerCoordinator *_coordinator;
}

- (void).cxx_destruct;
- (void)_addFeature:(id)arg1;
- (void)_createCoordinator;
- (void)_registerNotifications;
- (void)_returnKeyPressed:(id)arg1;
- (_Bool)_shouldDisableKeyboard;
- (_Bool)_shouldEnableKeyboard;
- (void)addFeature:(id)arg1 atPosition:(unsigned long long)arg2;
- (void)addStateListener:(id)arg1;
- (void)addTextViewListener:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)becomeFirstResponder;
- (id)chatInputView;
@property(retain, nonatomic) SCChatInputItemDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) id <SCChatInputDrawerRenderable> currentDrawer;
@property(nonatomic) long long cursorPosition;
- (void)dealloc;
@property(nonatomic) __weak id <SCChatInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableKeyboard;
- (void)disableKeyboardIfNecessary;
@property(nonatomic) double drawerHeight;
- (double)drawerHeightForState:(unsigned long long)arg1;
- (long long)drawerMode;
- (void)enableKeyboard;
- (void)enableKeyboardIfNecessary;
- (void)expendItemDidPressExpand:(id)arg1;
@property(nonatomic) _Bool ignoresSafeAreaLayoutGuides;
- (id)init;
@property(readonly, nonatomic) SCChatInputBar *inputBar;
- (void)inputTextView:(id)arg1 didPasteGif:(id)arg2;
- (void)inputTextView:(id)arg1 didPasteImage:(id)arg2;
- (void)inputTextView:(id)arg1 didPasteVideo:(id)arg2 contentType:(id)arg3;
@property(nonatomic) _Bool inputViewTransparent;
- (void)insertFeature:(id)arg1 atIndex:(unsigned long long)arg2 position:(unsigned long long)arg3;
- (_Bool)isFirstResponder;
- (void)loadView;
@property(retain, nonatomic) id <SCChatInputViewControllerLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *placeholderText;
- (void)registerPanGesture:(id)arg1;
- (void)removeFeature:(id)arg1;
- (void)removeStateListener:(id)arg1;
- (void)removeTextViewListener:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)restoreAttributedString:(id)arg1;
- (void)selectItemWithDeeplinkIdentifier:(id)arg1;
- (void)sendItemControllerDidPressSend:(id)arg1;
- (void)setPlaceholderText:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) SCChatInputTextView *textView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)transitionDrawerToState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterPanGesture:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

