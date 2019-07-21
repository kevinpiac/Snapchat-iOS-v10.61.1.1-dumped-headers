//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTextMediaCardView.h"

#import "SCActionMenuCustomButtonsCell-Protocol.h"
#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "SCBrowserViewControllerDelegate-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSString, NSURL, SCChatURLMediaOperaPresenter, SCUserSession, UITapGestureRecognizer, UIViewController;
@protocol SKStoreProductViewControllerDelegate><SCChatCellMessageStateUpdateDelegate><SCChatCellURLLinkGestureDelegate><SCChatURLMediaOperaPresenterDelegate><SCActionSheetDelegate;

@interface SCURLMediaCardView : SCTextMediaCardView <SCBrowserViewControllerDelegate, SFSafariViewControllerDelegate, SCActionMenuRenderableCellContentView, SCActionMenuCustomButtonsCell>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSURL *_url;
    SCChatURLMediaOperaPresenter *_operaPresenter;
    UIViewController<SKStoreProductViewControllerDelegate><SCChatCellMessageStateUpdateDelegate><SCChatCellURLLinkGestureDelegate><SCChatURLMediaOperaPresenterDelegate><SCActionSheetDelegate> *_parentVC;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_copyActionForUrl:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)_updateWithViewModel:(id)arg1 parentVC:(id)arg2;
- (void)browserViewIsClosing;
- (void)dealloc;
- (id)extraActionMenuButtons;
- (id)initWithViewModel:(id)arg1 parentVC:(id)arg2 backgroundColor:(id)arg3 userSession:(id)arg4;
- (void)onTap:(id)arg1;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
- (void)safariViewControllerDidFinish:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithViewModel:(id)arg1 parentVC:(id)arg2 backgroundColor:(id)arg3;
- (id)urlMediaCardViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

