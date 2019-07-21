//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "CNContactViewControllerDelegate-Protocol.h"
#import "SCActionMenuCustomButtonsCell-Protocol.h"
#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCStatusView, SCUserSession, UITapGestureRecognizer, UIViewController;
@protocol SCActionSheetDelegate, SCChatMediaCardViewModel><SCChatPhoneMediaCardViewModel;

@interface SCPhoneNumberMediaCardView : SCBaseMediaCardView <CNContactViewControllerDelegate, UIGestureRecognizerDelegate, SCActionMenuRenderableCellContentView, SCActionMenuCustomButtonsCell>
{
    SCStatusView *_phoneNumberStatusView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController<SCActionSheetDelegate> *_parentVC;
    id <SCChatMediaCardViewModel><SCChatPhoneMediaCardViewModel> _viewModel;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_addToContacts:(id)arg1 formattedPhoneNumber:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dismissButtonPressed;
- (id)extraActionMenuButtons;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)height;
- (id)initWithViewModel:(id)arg1 parentVC:(id)arg2 userSession:(id)arg3;
- (void)onTap:(id)arg1;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
- (void)updateWithViewModel:(id)arg1 parentVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
