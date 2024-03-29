//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCheetahSendToViewMenuActionHandlerDelegate-Protocol.h"

@class NSString, SCUnifiedActionMenuPresenter, UIButton, UIViewController;
@protocol SCCheetahSendToViewMenuControllerDelegate;

@interface SCCheetahSendToViewMenuController : NSObject <SCCheetahSendToViewMenuActionHandlerDelegate>
{
    unsigned long long _menuItems;
    UIViewController *_presentingViewController;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    id <SCCheetahSendToViewMenuControllerDelegate> _delegate;
    UIButton *_menuBarButton;
}

- (void).cxx_destruct;
- (void)_presentActionMenu;
@property(nonatomic) __weak id <SCCheetahSendToViewMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithConfiguration:(id)arg1 previewExporter:(id)arg2 presentingViewController:(id)arg3;
@property(retain, nonatomic) UIButton *menuBarButton; // @synthesize menuBarButton=_menuBarButton;
- (void)sendToViewMenuActionHandler:(id)arg1 handleActionForActionModel:(id)arg2;
- (void)sendToViewMenuActionHandlerDismissSendToViewMenu:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

