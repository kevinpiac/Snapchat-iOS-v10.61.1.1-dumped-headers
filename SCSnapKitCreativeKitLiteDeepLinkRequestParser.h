//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapKitCreativeKitDeepLinkRequestParsing-Protocol.h"

@class NSString, SCUserSession;

@interface SCSnapKitCreativeKitLiteDeepLinkRequestParser : NSObject <SCSnapKitCreativeKitDeepLinkRequestParsing>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_handleDeepLinkingForVersion:(long long)arg1 deepLinkURL:(id)arg2 subFeature:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)_handleV1SDKLessPreviewWithDeepLinkURL:(id)arg1 subFeature:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)_verifyDeepLinkURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSesion:(id)arg1;
- (void)parseDeepLinkURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

