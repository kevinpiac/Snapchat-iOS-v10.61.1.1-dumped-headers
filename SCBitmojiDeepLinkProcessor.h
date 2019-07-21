//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeepLinkProcessor-Protocol.h"

@class NSString, SCUserSession;
@protocol NavigationDelegate;

@interface SCBitmojiDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
}

+ (void)_openURL:(id)arg1 source:(id)arg2 page:(unsigned long long)arg3 universalLinksOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (unsigned long long)getDeepLinkAction:(id)arg1;
+ (id)getToBitmojiDeepLinkURLWithSource:(id)arg1 signedToken:(id)arg2;
+ (void)goToBitmojiAppStorePageWithCompletion:(CDUnknownBlockType)arg1;
+ (void)goToBitmojiAppWith:(id)arg1 page:(unsigned long long)arg2 bitmojiService:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)imojiURIWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;
- (_Bool)needsNavigationDelegate;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
