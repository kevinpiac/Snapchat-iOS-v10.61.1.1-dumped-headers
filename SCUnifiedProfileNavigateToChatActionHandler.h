//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCUnifiedProfileViewController, SCUserSession;
@protocol SCUnifiedProfileNavigateToChatActionHandlerDelegate;

@interface SCUnifiedProfileNavigateToChatActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    id <SCUnifiedProfileNavigateToChatActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_navigateToChat:(id)arg1;
- (void)_navigateToChatForGroupId:(id)arg1 deepLinkURL:(id)arg2;
- (void)_navigateToChatForUsername:(id)arg1 deepLinkURL:(id)arg2;
@property(nonatomic) __weak id <SCUnifiedProfileNavigateToChatActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

